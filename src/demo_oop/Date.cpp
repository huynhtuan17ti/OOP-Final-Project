#include "Date.h"

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


std::string Date::ToString() const {
	std::stringstream ss;

	ss << std::setfill('0') << std::setw(2) << _day << '/'
		<< std::setfill('0') << std::setw(2) << _mon << '/'
		<< std::setfill('0') << std::setw(4) << _year;

	return ss.str();
}