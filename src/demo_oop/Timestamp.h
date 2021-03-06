#pragma once
#include "Tokenizer.h"
#include <ctime>
#include <iomanip> 
#include <sstream> 

class Date {
private:
	int _day;
	int _mon;
	int _year;
public:
	Date();
	Date(const Date&);
	Date(int day, int mon, int year);
	~Date() {};

public:
	std::string toString() const;
	static Date* Parse(std::string line);
};

class Time {
private:
	int _hour;
	int _minute;
	int _second;

public:
	Time();
	Time(const Time&);
	Time(int, int, int);
	~Time() {};

public:
	std::string toString() const;
	static Time* Parse(std::string);
};

class Timestamp {
private:
	Date* date;
	Time* time;

public:
	Timestamp();
	Timestamp(const Timestamp&);
	~Timestamp() {
		if (date != nullptr) {
			delete date;
			date = nullptr;
		}
		if (time != nullptr) {
			delete time;
			time = nullptr;
		}
	}
	Timestamp(Date*, Time*);

public:
	Time* getTime();
	Date* getDate();

public:
	std::string toString(); // for interface
	std::string toStringv2(); // for storing
};