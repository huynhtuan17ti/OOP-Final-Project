// TODO: create User class to store informations of user
/*
    Requried attributes:
    - Username
    - Password
    Optional attributes:
    - Sex
    - Birth
    - ...
*/
// Also to create/propose a way to store database of users
class User{
    
};

// UserName,PassWord,Name,Birthday,Sex
// aaaaaa,11111111,Nguyen Van A,27/2/2002,1


#pragma once
#include <iostream>
#include <fstream>
#include <iostream> 
#include <iomanip> 
#include <sstream> 
#include <string> 
#include <ctime> 
#include <vector> 

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


class User {
	std::string _userName;
	std::string _passWord;
	std::string _name;
	Date _birth;
	bool _sex; // 0 : female, 1 : male

public:
	bool Match(const std::string& username, const std::string& password) {
		if (username != _userName) return false;
		if (password != _passWord) return false;
		return true;
	}

	bool Save(std::ostream& os) const {
		if (!os) return false;

		os << _userName << ',' << _passWord << ',' << _name << ',' << _birth.ToString() << ',' << _sex << std::endl;
		return true;
	}

	bool Load(std::istream& is) {
		if (!is) return false;

		getline(is, _userName, ',');
		getline(is, _passWord, ',');
		getline(is, _name, ',');

		std::string line;
		getline(is, line,',');
		_birth = Date::Parse(line);

		std::string line1;
		getline(is, line1);
		if (line1 == "1") _sex = true;
		else if (line1 == "0") _sex = false;

		return true;
	}
};

class Users {
	std::vector<User> _users;

public:
	bool Save(const std::string& path) {
		std::ofstream os(path);

		if (!os) return false;

		for (auto user : _users) {
			user.Save(os);
		}

		os.close();

		return true;
	}

	bool Load(const std::string& path) {
		std::ifstream is(path);

		if (!is) return false;

		User user;

		while (!is.eof()) {
			user.Load(is);
			_users.push_back(user);
		}
		is.close(); 
			
		return true;
	}
};
