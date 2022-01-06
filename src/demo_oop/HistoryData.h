#pragma once
#include "ExamData.h"
#include <sstream>

class HistoryStoring {
private:
	std::string userName;
	Timestamp* timestamp;
	ExamSettings* examSettings;
	int doneTime;
	int correctAnswer;

public:
	HistoryStoring(std::string, ExamSettings*, int, int);
	HistoryStoring(std::string line);
	~HistoryStoring() {
		if (examSettings != nullptr) {
			delete examSettings;
			examSettings = nullptr;
		}
		if (timestamp != nullptr) {
			delete timestamp;
			timestamp = nullptr;
		}
	}

public:
	std::string getUsername() {
		return userName;
	}
	Timestamp* getTimestamp() const {
		return timestamp;
	}
	ExamSettings* getExamSettings() const {
		return examSettings;
	}
	int getDoneTime(){
		return doneTime;
	}
	int getCorrectAnswer() {
		return correctAnswer;
	}
	bool isPass() {
		return (examSettings->getQuestionAmount() - correctAnswer <= examSettings->getMaxWrongAnswer());
	}

public:
	void storing();
};


class HistoryStoringList {
private:
	std::vector <HistoryStoring*> list;

public:
	HistoryStoringList(){}
	~HistoryStoringList() {
		for (auto& x : list)
			if (x != nullptr) {
				delete x;
				x = nullptr;
			}
	}

	int getAmount() {
		return list.size();
	}

	void add(HistoryStoring* other) {
		list.push_back(other);
	}

	HistoryStoring* getAtIndex(int index) const{
		return list[index];
	}
};