#include "Timestamp.h"

Date Date::Parse(std::string line) {
	std::vector<std::string> tokens = Tokenizer::Parse(line, "/");

	if (tokens.size() != 3) return Date(0, 0, 0);

	int day = stoi(tokens[0]);
	int mon = stoi(tokens[1]);
	int year = stoi(tokens[2]);

	Date d(day, mon, year);

	return d;
}

Date::Date() {
	time_t now = time(0);
	tm* a = localtime(&now);
	this->_day = a->tm_mday;
	this->_mon = 1 + a->tm_mon;
	this->_year = 1900 + a->tm_year;
}

Date::Date(int day, int mon, int year) {
	_day = day;
	_mon = mon;
	_year = year;
}


std::string Date::toString() const {
	std::stringstream ss;

	ss << std::setfill('0') << std::setw(2) << _day << '/'
		<< std::setfill('0') << std::setw(2) << _mon << '/'
		<< std::setfill('0') << std::setw(4) << _year;

	return ss.str();
}

Time::Time() {
	// ref: https://stackoverflow.com/questions/43493794/how-to-get-local-time-c
	time_t currentTime;
	struct tm* localTime;

	time(&currentTime);
	localTime = localtime(&currentTime);

	int Hour = localTime->tm_hour;
	int Min = localTime->tm_min;
	int Sec = localTime->tm_sec;

	_hour = Hour;
	_minute = Min;
	_second = Sec;
}

Time::Time(int srcHour, int srcMinute, int srcSecond) {
	_hour = srcHour;
	_minute = srcMinute;
	_second = srcSecond;
}

std::string Time::toString() const{
	std::stringstream ss;

	ss << std::setfill('0') << std::setw(2) << _hour << ':'
		<< std::setfill('0') << std::setw(2) << _minute << ':'
		<< std::setfill('0') << std::setw(2) << _second;

	return ss.str();
}

Time Time::Parse(std::string line) {
	std::vector<std::string> tokens = Tokenizer::Parse(line, ":");

	if (tokens.size() != 3) return Time(0, 0, 0);

	int hour = stoi(tokens[0]);
	int minute = stoi(tokens[1]);
	int second = stoi(tokens[2]);

	Time t(hour, minute, second);

	return t;
}

Timestamp::Timestamp() {
	Date date = Date();
	Time time = Time();
}

Timestamp::Timestamp(Date srcDate, Time srcTime) {
	date = srcDate;
	time = srcTime;
}

Date Timestamp::getDate() {
	return date;
}

Time Timestamp::getTime() {
	return time;
}

std::string Timestamp::toString() {
	return date.toString() + " - " + time.toString();
}