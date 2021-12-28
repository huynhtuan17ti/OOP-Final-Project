#pragma once
#include <string>
#include <vector>
#include <ctime>
#include <iomanip> 
#include <sstream> 

class Tokenizer {
public:
	static std::vector<std::string> Parse(std::string line, std::string seperator) {
		std::vector<std::string> tokens;

		int startPos = 0;
		size_t foundPos = line.find(seperator, startPos);

		while (foundPos != std::string::npos) {
			int count = foundPos - startPos;

			std::string token = line.substr(startPos, count);
			tokens.push_back(token);

			startPos = foundPos + seperator.length();

			foundPos = line.find(seperator, startPos);
		}

		int count = line.length() - startPos;
		std::string token = line.substr(startPos, count);
		tokens.push_back(token);

		return tokens;
	}
};

class Date {
private:
	int _day;
	int _mon;
	int _year;
public:
	Date();
	Date(int day, int mon, int year);
public:
	std::string ToString() const;
	static Date Parse(std::string line);
};
