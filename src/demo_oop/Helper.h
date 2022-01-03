#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <codecvt>
#include <locale>

class UrlHelperDatabase {
protected:
	std::vector<std::wstring> titleList;
	std::vector<std::wstring> urlList;
	std::wstring dataName;
	std::wstring path;
public:
	std::wstring getDataName() const{
		return dataName;
	}
	void setDataName(std::wstring srcDataName) {
		dataName = srcDataName;
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


class TheoryHelper : public UrlHelperDatabase {
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
class PracticeHelper : public UrlHelperDatabase {
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
	PracticeHelper() {
		dataName = L"Trợ giúp thi thực hành";
		path = L"data/Helper/PracticeHelperDatabase.txt";
	}
};


// data[0]: A1
// data[1]: A2
// data[2]: B2
class RegisterHelper : public UrlHelperDatabase {
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
	RegisterHelper() {
		path = L"data/Helper/RegisterHelperDatabase.txt";
		dataName = L"Hướng dẫn thủ tục đăng ký thi bằng lái";
	}
};


class AppHelper {
private:
	std::wstring path;
	std::vector <std::wstring> imageList;
public:
	void readData() {
		std::wifstream fi(path);
		fi.imbue(std::locale(fi.getloc(), new std::codecvt_utf8<wchar_t>));
		if (!fi)
			throw "Cannot open file!";

		std::wstring line;
		while (getline(fi, line)) {
			imageList.push_back(line);
		}

		fi.close();
	}

	int getLength() {
		return imageList.size();
	}

	std::wstring getImageAtIndex(int index) {
		return imageList[index];
	}

	AppHelper() {
		path = L"data/Helper/AppHelperDatabase.txt";
	}
};

// Du lieu lay tu So GTVT TP HCM
// titleList: Ten cac trung tam sat hach
// urlList: Dia chi cua trung tam tuong ung
class LocateHelper: UrlHelperDatabase {
private:
	std::vector<std::wstring> locateList;
	std::vector<std::wstring> activeTimeList;
public:
	void readData() {
		std::wifstream fi(path);
		fi.imbue(std::locale(fi.getloc(), new std::codecvt_utf8<wchar_t>));
		if (!fi)
			throw "Cannot open file!";

		std::wstring line;
		int turn = 0;
		while (getline(fi, line)) {
			if(turn == 0)
				titleList.push_back(line);
			if(turn == 1)
				locateList.push_back(line);
			if (turn == 2)
				activeTimeList.push_back(line);
			if(turn == 3)
				urlList.push_back(line);
			turn = (turn + 1)%4;
		}

		fi.close();
	}

	int getLength() {
		return UrlHelperDatabase::getLength();
	}

	std::wstring getTitleAtIndex(int index) {
		return UrlHelperDatabase::getTitleAtIndex(index);
	}

	std::wstring getUrlAtIndex(int index) {
		return UrlHelperDatabase::getUrlAtIndex(index);
	}

	std::wstring getLocateAtIndex(int index) {
		return locateList[index];
	}
	std::wstring getActiveTimeAtIndex(int index) {
		return activeTimeList[index];
	}
	LocateHelper() {
		path = L"data/Helper/LocateHelperDatabase.txt";
		dataName = L"Địa điểm sát hạch bằng lái";
	}
};
