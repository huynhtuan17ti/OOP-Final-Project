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
	Date date = Date::Parse(tokens[1]);
	Time time = Time::Parse(tokens[2]);
	timestamp = new Timestamp(date, time);

	examSettings = new ExamSettings(std::stoi(tokens[3]),
		std::stoi(tokens[4]),
		std::stoi(tokens[5]),
		std::stoi(tokens[6]));

	doneTime = std::stoi(tokens[7]);
	correctAnswer = std::stoi(tokens[8]);


	/*
	// read username
	int size = 0;
	inp.read(reinterpret_cast<char*>(&size), sizeof(int));
	char str[100];
	inp.read(str, size);
	userName = "";
	for (int i = 0; i < size; i++)
		userName += str[i];

	// read timestamp
	inp.read(reinterpret_cast<char*>(&timestamp), sizeof(Timestamp));

	// read examSettings
	inp.read(reinterpret_cast<char*>(&examSettings), sizeof(ExamSettings));

	// read doneTime
	inp.read(reinterpret_cast<char*>(&doneTime), sizeof(int));

	// read correctAnswer
	inp.read(reinterpret_cast<char*>(&correctAnswer), sizeof(int));
	*/
}

void HistoryStoring::storing() {
	std::ofstream out(history_path, std::ios::app);
	
	out << userName << "," << timestamp->toStringv2() << ","
		<< examSettings->toString() << ","
		<< doneTime << ","
		<< correctAnswer << '\n';

	out.close();

	/*
	// write username
	int size = userName.size();
	out.write(reinterpret_cast<char*>(&size), sizeof(int));
	const char* str = userName.data();
	size_t size2 = userName.size();
	out.write(str, size2);

	// write timestamp
	out.write(reinterpret_cast<char*>(&timestamp), sizeof(Timestamp));

	// write examSettings
	out.write(reinterpret_cast<char*>(&examSettings), sizeof(ExamSettings));

	// write doneTime
	out.write(reinterpret_cast<char*>(&doneTime), sizeof(int));

	// write correctAnswer
	out.write(reinterpret_cast<char*>(&correctAnswer), sizeof(int));
	*/
}