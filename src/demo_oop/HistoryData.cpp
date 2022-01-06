#include "HistoryData.h"

HistoryStoring::HistoryStoring(std::string srcUserName, ExamSettings* srcExamSetting, int srcDoneTime, int srcCorrectAnswer) {
	userName = srcUserName;
	examSettings = srcExamSetting;
	timestamp = new Timestamp();
	doneTime = srcDoneTime;
	correctAnswer = srcCorrectAnswer;
}

HistoryStoring::HistoryStoring(std::string line) {
	std::istringstream ss(line);

	std::vector <std::string> tokens;
	std::string token;
	while (std::getline(ss, token, ',')) {
		tokens.push_back(token);
	}

	userName = tokens[0];
	Date* date = Date::Parse(tokens[1]);
	Time* time = Time::Parse(tokens[2]);
	timestamp = new Timestamp(date, time);

	examSettings = new ExamSettings(std::stoi(tokens[3]),
		std::stoi(tokens[4]),
		std::stoi(tokens[5]),
		std::stoi(tokens[6]));

	doneTime = std::stoi(tokens[7]);
	correctAnswer = std::stoi(tokens[8]);
}

void HistoryStoring::storing() {
	std::ofstream out(history_path, std::ios::app);
	
	out << userName << "," << timestamp->toStringv2() << ","
		<< examSettings->toString() << ","
		<< doneTime << ","
		<< correctAnswer << '\n';

	out.close();
}