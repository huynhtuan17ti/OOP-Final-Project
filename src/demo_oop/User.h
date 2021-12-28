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
#pragma once
#include <vector> 
#include "Date.h"


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
