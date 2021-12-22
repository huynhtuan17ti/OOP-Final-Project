#pragma once
#include "Database.h"
#include "Constants.h"
#include <assert.h>

class ExamData: public QuestionData{
private:
	int examQuestionAmount; // number of questions in exam
	int maxWrongAnswer; // maximum number of wrong answers in exam

public:
	ExamData(int, int, int);
	
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
	bool isSaveHistory;

public:
	ExamSettings(int srcCertificateIndex, int srcCountdownSeconds, int srcQuestionAmount, int srcMaxWrongAnswer, bool srcIsSaveHistory) {
		certificateIndex = srcCertificateIndex;
		countdownSeconds = srcCountdownSeconds;
		questionAmount = srcQuestionAmount;
		maxWrongAnswer = srcMaxWrongAnswer;
		isSaveHistory = srcIsSaveHistory;
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

	bool getIsSaveHistory() {
		return isSaveHistory;
	}
};