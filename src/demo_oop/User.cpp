#include "User.h"

User::User() {

}

User::User(std::string srcUserName, std::string srcPassWord, std::string srcName, Date srcBirth, bool srcSex) {
	_userName = srcUserName;
	_passWord = srcPassWord;
	_name = srcName;
	_birth = srcBirth;
	_sex = srcSex;
}

bool User::Match(const std::string& username, const std::string& password){
	if (username != _userName) return false;
	if (password != _passWord) return false;
	return true;
}

bool User::MatchUsername(const std::string& username) {
	return username == _userName;
}

bool User::Save(std::ofstream& os) {
	if (!os) return false;

	os << _userName << ',' << _passWord << ',' << _name << ',' << _birth.toString() << ',' << _sex << std::endl;
	return true;
}

bool User::Load(std::ifstream& is) {
	if (!is) return false;

	getline(is, _userName, ',');
	getline(is, _passWord, ',');
	getline(is, _name, ',');

	std::string line;
	getline(is, line, ',');
	_birth = Date::Parse(line);

	std::string line1;
	getline(is, line1);
	if (line1 == "1") _sex = true;
	else if (line1 == "0") _sex = false;

	return true;
}

Users:: Users() {
	Load();
}

void Users:: addUser(User* user) {
	_users.push_back(user);
}

bool Users::Save() {
	std::ofstream os(users_path);

	if (!os) return false;

	for (auto &user : _users) {
		user->Save(os);
	}

	os.close();

	return true;
}

bool Users::Load() {
	std::ifstream is(users_path);

	if (!is) return false;

	while (!is.eof()) {
		User* user = new User();
		user->Load(is);
		_users.push_back(user);
	}
	is.close();

	return true;
}

bool Users::isHaveAccount(const std::string& username, const std::string& password) {
	for (auto& x : _users)
		if (x->Match(username, password))
			return true;
	return false;
}

bool Users::isHaveSameUsername(const std::string& username) {
	for (auto& x : _users)
		if (x->MatchUsername(username))
			return true;
	return false;
}