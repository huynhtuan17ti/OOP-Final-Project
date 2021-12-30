#pragma once
#include "Timestamp.h"
#include <fstream>
#include <iostream>
#include "Constants.h"
#include <vector>

class User {
	std::string _userName;
	std::string _passWord;
	std::string _name;
	Date _birth;
	bool _sex; // 0 : female, 1 : male

public:
	User();
	User(std::string, std::string, std::string, Date, bool);
	~User() {
	}
	bool Match(const std::string& username, const std::string& password);
	bool MatchUsername(const std::string& username);
	bool Save(std::ofstream& os);
	bool Load(std::ifstream& is);
};


class Users {
	std::vector <User*> _users;
	const std::wstring users_path = account_path;

public:
	Users();
	~Users() {
		for (auto& x : _users)
			delete x;
	}
	void addUser(User* user);
	bool isHaveSameUsername(const std::string& username);
	bool isHaveAccount(const std::string& username, const std::string& password);
	bool Save();
	bool Load();
};