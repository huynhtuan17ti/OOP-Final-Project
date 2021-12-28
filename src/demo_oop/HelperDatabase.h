#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

using namespace std;


class HelperDatabase {
protected:
	vector<string> data;
	string path;
public:
	static void readData(const string& path, vector<string>& data) {
		if (path.length() > 0) {
			ifstream fi(path);

			if (fi) {
				string line;
				while (getline(fi, line))
					data.push_back(line);

				fi.close();
			}
		}
	}

	vector<string> getData() {
		return data;
	}
};

// data[0], data[1], data[2]: A1
// data[3]: A2
// data[4]: B2
class TheoryHelper : public HelperDatabase {
public:
	TheoryHelper() {
		path = "TheoryHelperDatabase.txt";
		HelperDatabase::readData(path, data);
	}
};


// data[0]: A1 
// data[1]: A2
// data[2]: B1
// data[3]: B2
class PracticeHelper : public HelperDatabase {
public:
	PracticeHelper() {
		path = "PracticeHelperDatabase.txt";
		HelperDatabase::readData(path, data);
	}
};


// data[0]: A1
// data[1]: A2
// data[2]: B2
class RegisterHelper : public HelperDatabase {
public:
	RegisterHelper() {
		path = "RegisterHelperDatabase.txt";
		HelperDatabase::readData(path, data);
	}
};

// Sau khi hoan thanh ung dung, lam clip huong dan up len Youtube
// roi doc link giong nhu nhung cai o tren
class AppHelper : public HelperDatabase {
public:
	AppHelper() {
		/*
		path = "AppHelperDatabase.txt";
		HelperDatabase::readData(path, data);
		*/
	}
};

// Du lieu lay tu So GTVT TP HCM
class LocateHelper : public HelperDatabase {
public:
	LocateHelper() {
		path = "LocateHelperDatabase.txt";
		HelperDatabase::readData(path, data);
	}
};