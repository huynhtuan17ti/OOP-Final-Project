#pragma once
#include "HelperItem.h"

class BaseHelperCreator {
private:
	std::wstring helperTitle;
public:
	std::wstring getHelperTitle() {
		return helperTitle;
	}
	void setHelperTitle(std::wstring src) {
		helperTitle = src;
	}
	virtual BaseList* createHelper() const = 0;
	virtual ~BaseHelperCreator() {}
};

class TheoryHelperCreator : public BaseHelperCreator {
public:
	TheoryHelperCreator() {
		setHelperTitle(L"Trợ giúp lý thuyết");
	}
	BaseList* createHelper() const {
		return new WebItemList(L"data/Helper/TheoryHelperDatabase.txt");
	}
	~TheoryHelperCreator(){}
};

class PracticeHelperCreator : public BaseHelperCreator {
public:
	PracticeHelperCreator() {
		setHelperTitle(L"Trợ giúp thực hành");
	}
	BaseList* createHelper() const {
		return new WebItemList(L"data/Helper/PracticeHelperDatabase.txt");
	}
	~PracticeHelperCreator() {}
};

class RegisterHelperCreator : public BaseHelperCreator {
public:
	RegisterHelperCreator() {
		setHelperTitle(L"Trợ giúp đăng ký thi");
	}
	BaseList* createHelper() const {
		return new WebItemList(L"data/Helper/RegisterHelperDatabase.txt");
	}
	~RegisterHelperCreator() {}
};

class LocateHelperCreator : public BaseHelperCreator {
public:
	LocateHelperCreator() {
		setHelperTitle(L"Các địa điểm xác hạnh bằng lái");
	}
	BaseList* createHelper() const {
		return new LocateItemList(L"data/Helper/LocateHelperDatabase.txt");
	}
	~LocateHelperCreator() {}
};

class AppHelperCreator : public BaseHelperCreator {
public:
	AppHelperCreator() {
		setHelperTitle(L"Hướng dẫn sử dụng phần mềm");
	}
	BaseList* createHelper() const {
		return new ImageItemList(L"data/Helper/AppHelperDatabase.txt");
	}
	~AppHelperCreator() {}
};