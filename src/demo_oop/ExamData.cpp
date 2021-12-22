#include "ExamData.h"

ExamData::ExamData(int scrCertiType, int srcExamQuestionAmount, int srcMaxWrongAnswer): QuestionData(certificatPathArray[scrCertiType]) {
	if (srcExamQuestionAmount == -1) // if -1 get all questions
		this->examQuestionAmount = this->getQuestionAmount();
	else
		this->examQuestionAmount = srcExamQuestionAmount;
	this->maxWrongAnswer = srcMaxWrongAnswer;

	this->shuffle();
	assert(this->examQuestionAmount <= this->questionData->getQuestionAmount());
}