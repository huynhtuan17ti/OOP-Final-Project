#pragma once
#include <string>
#include <vector>

class Question {
private:
	std::string question;
	std::vector <std::string> answers;
	std::vector <int> result;
	std::string pathImage;

public:
	Question(){}
	void setQuestion(std::string srcQuestion) {
		question = srcQuestion;
	}
	void setPathImage(std::string srcPathImage) {
		pathImage = srcPathImage;
	}
	void addAnswer(std::string srcAnswer) {
		answers.push_back(srcAnswer);
	}
	void addResult(int srcResult) {
		result.push_back(srcResult);
	}
public:
	std::string getDescription() {
		return question;
	}
	std::vector <std::string> getAnswers() {
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
	std::string getImagePath() {
		return pathImage;
	}
};