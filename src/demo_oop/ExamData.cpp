#include "ExamData.h"

ExamData::ExamData(int scrCertiType, int srcExamQuestionAmount, int srcMaxWrongAnswer): QuestionData(certificatPathArray[scrCertiType]) {
	if (srcExamQuestionAmount == -1) // if -1 get all questions
		this->examQuestionAmount = this->getQuestionAmount();
	else
		this->examQuestionAmount = srcExamQuestionAmount;
	this->maxWrongAnswer = srcMaxWrongAnswer;

	this->shuffle();
}

std::vector <AnswerState*> AnswerState::createAnswerStateList(QuestionData* questionData) {
	std::vector <AnswerState*> answerStateList;
	for (int i = 0; i < questionData->getQuestionAmount(); i++) {
		Question q = questionData->getQuestion(i);
		answerStateList.push_back(new AnswerState(q.getResult()));
	}
	return answerStateList;
}

ExamResult::ExamResult(ExamData* srcExamData, ExamSettings* srcExamSettings){
	examData = srcExamData;
	examSettings = srcExamSettings;
};

void ExamResult::addAnswerStateList(std::vector <AnswerState*> srcList) {
	answerStateList = srcList;
}

int ExamResult::getScore() {
	int totalScore = 0;
	for (auto& x : answerStateList)
		totalScore += x->compare();
	return totalScore;
}