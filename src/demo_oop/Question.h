#pragma once
#include <string>
#include <vector>

class Question {
private:
	std::wstring question;
	std::vector <std::wstring> answers;
	std::vector <int> result;
	std::wstring pathImage;

public:
	Question(){}
	void setQuestion(std::wstring srcQuestion) {
		question = srcQuestion;
	}
	void setPathImage(std::wstring srcPathImage) {
		pathImage = srcPathImage;
	}
	void addAnswer(std::wstring srcAnswer) {
		answers.push_back(srcAnswer);
	}
	void addResult(int srcResult) {
		result.push_back(srcResult);
	}
public:
	std::wstring getDescription() {
		return question;
	}
	std::vector <std::wstring> getAnswers() {
		return answers;
	}
	std::vector <int> getResult() {
		return result;
	}
	int getNumberAnswer() {
		return answers.size();
	}
	int getNumberResult() {
		return result.size();
	}
	std::wstring getImagePath() {
		return pathImage;
	}
};