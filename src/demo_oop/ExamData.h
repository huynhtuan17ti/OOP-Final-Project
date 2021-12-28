#pragma once
#include "Database.h"
#include "Constants.h"
#include "Date.h"
#include <assert.h>

class ExamData: public QuestionData{
private:
	int examQuestionAmount; // number of questions in exam
	int maxWrongAnswer; // maximum number of wrong answers in exam

public:
	ExamData(int, int, int);
	ExamData(const ExamData* examData): QuestionData(examData){
		examQuestionAmount = examData->examQuestionAmount;
		maxWrongAnswer = examData->maxWrongAnswer;
	}
	
public:
	int getQuestionAmount() {
		return examQuestionAmount;
	}
};

class ExamSettings {
private:
	int certificateIndex;
	int countdownSeconds;
	int questionAmount;
	int maxWrongAnswer;

public:
	ExamSettings(int srcCertificateIndex, int srcCountdownSeconds, int srcQuestionAmount, int srcMaxWrongAnswer) {
		certificateIndex = srcCertificateIndex;
		countdownSeconds = srcCountdownSeconds;
		questionAmount = srcQuestionAmount;
		maxWrongAnswer = srcMaxWrongAnswer;
	}
	ExamSettings(const ExamSettings* examSettings) {
		certificateIndex = examSettings->certificateIndex;
		countdownSeconds = examSettings->countdownSeconds;
		questionAmount = examSettings->questionAmount;
		maxWrongAnswer = examSettings->maxWrongAnswer;
	}

public:
	int getCertificateIndex() {
		return certificateIndex;
	}
	
	int getCountdownSeconds() {
		return countdownSeconds;
	}

	int getQuestionAmount() {
		return questionAmount;
	}

	int getMaxWrongAnswer() {
		return maxWrongAnswer;
	}
};

class AnswerState {
private:
	int state;
	int correctState;
public:
	AnswerState(int srcCorrectState) {
		state = 0;
		correctState = srcCorrectState;
	}
	AnswerState(std::vector <int> results) {
		correctState = state = 0;
		for (int u : results)
			correctState += (1 << u);
	}
	AnswerState(const AnswerState* answerState) {
		state = answerState->state;
		correctState = answerState->correctState;
	}
	int getCorrectState() {
		return correctState;
	}
	int getAnswerState() {
		return state;
	}
	void setAnswerState(int answerState) {
		state = answerState;
	}
	// check if the answer is right
	bool compare() { 
		return (state == correctState);
	}
public:
	// create an AnswerState List from questionData
	static std::vector <AnswerState*> createAnswerStateList(QuestionData* questionData);
};

class ExamResult {
private:
	ExamData* examData;
	ExamSettings* examSettings;
	std::vector <AnswerState*>  answerStateList;
	Date* date;

public:
	ExamResult(ExamData*, ExamSettings*);
	~ExamResult() {
		delete examData, examSettings;
		delete date;
		for (auto& x : answerStateList)
			delete x;
	}
	void addAnswerStateList(std::vector <AnswerState*>);
	void updateAnswerStateAtIndex(int index, int state) {
		answerStateList[index]->setAnswerState(state);
	}
	int getAnswerStateAtIndex(int index) {
		return answerStateList[index]->getAnswerState();
	}
	int getCorrectStateAtIndex(int index) {
		return answerStateList[index]->getCorrectState();
	}
	int getSingleScoreAtIndex(int index) {
		return answerStateList[index]->compare();
	}
	int getScore();
	void saveExamResult();
};