#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <assert.h>
#include "Question.h"

class QuestionData{
private:
	const char* dataPath = "A1/data_no_accent.txt";
private:
	std::vector <Question> questions;
public:
	QuestionData();
public:
	int getNQuestion() {
		return questions.size();
	}

	Question getQuestion(int index) {
		assert(0 <= index && index < questions.size());
		return questions[index];
	}
};