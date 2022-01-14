#pragma once
#include "Database.h"
#include "Constants.h"
#include "Timestamp.h"
#include "User.h"
#include <assert.h>

class ExamData: public QuestionData{
private:
	int examQuestionAmount; // number of questions in exam
	int maxWrongAnswer; // maximum number of wrong answers in exam

public:
	ExamData(int, int, int);
	ExamData(const ExamData& examData): QuestionData(examData){
		examQuestionAmount = examData.examQuestionAmount;
		maxWrongAnswer = examData.maxWrongAnswer;
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
	bool saveHistory;

public:
	ExamSettings(int srcCertificateIndex, int srcCountdownSeconds, int srcQuestionAmount, int srcMaxWrongAnswer) {
		certificateIndex = srcCertificateIndex;
		countdownSeconds = srcCountdownSeconds;
		questionAmount = srcQuestionAmount;
		maxWrongAnswer = srcMaxWrongAnswer;

		saveHistory = (countdownSeconds == 1200 && questionAmount == 25 && maxWrongAnswer == 4);
	}
	ExamSettings(const ExamSettings& examSettings) {
		certificateIndex = examSettings.certificateIndex;
		countdownSeconds = examSettings.countdownSeconds;
		questionAmount = examSettings.questionAmount;
		maxWrongAnswer = examSettings.maxWrongAnswer;

		saveHistory = (countdownSeconds == 1200 && questionAmount == 25 && maxWrongAnswer == 4);
	}
	bool isSaveHistory() {
		return saveHistory;
	}
	// for storing
	std::string toString() const;

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

public:
	ExamResult(ExamData*, ExamSettings*);
	~ExamResult() {
		if (examData != nullptr) {
			delete examData;
			examData = nullptr;
		}
		if (examSettings != nullptr) {
			delete examSettings;
			examSettings = nullptr;
		}
		for (auto& x : answerStateList)
			if (x != nullptr) {
				delete x;
				x = nullptr;
			}
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
};