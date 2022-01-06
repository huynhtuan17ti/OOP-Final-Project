#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <assert.h>
#include <codecvt>
#include <locale>
#include "Question.h"
#include <algorithm>

class QuestionData{
private:
	std::wstring imagePath;

private:
	std::vector <Question> questions;

public:
	QuestionData(const std::wstring);
	QuestionData(const QuestionData&);

public:
	std::wstring getImagePath() {
		return imagePath;
	}

	void shuffle() { // shuffle the questions
		std::random_shuffle(questions.begin(), questions.end());
	}

	virtual int getQuestionAmount() {
		return questions.size();
	}

	Question getQuestion(int index) {
		assert(0 <= index && index < questions.size());
		return questions[index];
	}
};