#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <codecvt>
#include <locale>

class VideoHelperDatabase {
protected:
	std::vector<std::wstring> titleList;
	std::vector<std::wstring> urlList;
	std::wstring dataName;
	std::wstring path;
public:
	std::wstring getDataName() {
		return dataName;
	}
	int getLength() {
		return titleList.size();
	}

	std::wstring getTitleAtIndex(int index) {
		return titleList[index];
	}

	std::wstring getUrlAtIndex(int index) {
		return urlList[index];
	}
	virtual void readData() = 0;
};


class TheoryHelper : public VideoHelperDatabase {
public:
	void readData() {
		std::wifstream fi(path);
		fi.imbue(std::locale(fi.getloc(), new std::codecvt_utf8<wchar_t>));
		if (!fi)
			throw "Cannot open file!";

		std::wstring line;
		while (getline(fi, line)) {
			std::wistringstream iss(line);
			std::wstring curTitle;
			std::getline(iss, curTitle, L',');
			std::wstring curUrl;
			std::getline(iss, curUrl, L',');

			titleList.push_back(curTitle);
			urlList.push_back(curUrl);
		}

		fi.close();
	}
	TheoryHelper() {
		dataName = L"Trợ giúp thi lý thuyết";
		path = L"data/Helper/TheoryHelperDatabase.txt";
	}
};


// data[0]: A1 
// data[1]: A2
// data[2]: B1
// data[3]: B2
class PracticeHelper : public VideoHelperDatabase {
public:
	void readData() {
		std::wifstream fi(path);
		if (!fi)
			throw "Cannot open file!";

		std::wstring line;
		while (getline(fi, line)) {
			std::wistringstream iss(line);
			std::wstring curTitle;
			std::getline(iss, curTitle, L',');
			std::wstring curUrl;
			std::getline(iss, curUrl, L',');

			titleList.push_back(curTitle);
			urlList.push_back(curUrl);
		}

		fi.close();
	}
	PracticeHelper() {
		dataName = L"Trợ giúp thi thực hành";
		path = L"data/Helper/PracticeHelperDatabase.txt";
	}
};


// data[0]: A1
// data[1]: A2
// data[2]: B2
class RegisterHelper : public VideoHelperDatabase {
public:
	void readData() {
		std::wifstream fi(path);
		if (!fi)
			throw "Cannot open file!";

		std::wstring line;
		while (getline(fi, line)) {
			std::wistringstream iss(line);
			std::wstring curTitle;
			std::getline(iss, curTitle, L',');
			std::wstring curUrl;
			std::getline(iss, curUrl, L',');

			titleList.push_back(curTitle);
			urlList.push_back(curUrl);
		}

		fi.close();
	}
	RegisterHelper() {
		path = L"data/Helper/RegisterHelperDatabase.txt";
		dataName = L"Hướng dẫn thủ tục đăng ký thi bằng lái";
	}
};

// Cau truc file: <Mo ta anh>,<url anh>
// titleList: Luu cac mo ta anh
// urlList: Luu url anh tuong ung
class AppHelper : public VideoHelperDatabase {
public:
	void readData() {
		std::wifstream fi(path);
		if (!fi)
			throw "Cannot open file!";

		std::wstring line;
		while (getline(fi, line)) {
			std::wistringstream iss(line);
			std::wstring curTitle;
			std::getline(iss, curTitle, L',');
			std::wstring curUrl;
			std::getline(iss, curUrl, L',');

			titleList.push_back(curTitle);
			urlList.push_back(curUrl);
		}

		fi.close();
	}
	AppHelper() {
		dataName = L"Hướng dẫn sử dụng phần mềm";
		path = L"data/Helper/AppHelperDatabase.txt";
	}
};

// Du lieu lay tu So GTVT TP HCM
// titleList: Ten cac trung tam sat hach
// urlList: Dia chi cua trung tam tuong ung
class LocateHelper : public VideoHelperDatabase {
public:
	void readData() {
		std::wifstream fi(path);
		if (!fi)
			throw "Cannot open file!";

		std::wstring line;
		while (getline(fi, line)) {
			std::wistringstream iss(line);
			std::wstring curTitle;
			std::getline(iss, curTitle, L',');
			std::wstring curUrl;
			std::getline(iss, curUrl, L'\n');

			titleList.push_back(curTitle);
			urlList.push_back(curUrl);
		}

		fi.close();
	}
	LocateHelper() {
		path = L"data/Helper/LocateHelperDatabase.txt";
		dataName = L"Địa điểm sát hạch bằng lái";
	}
};
