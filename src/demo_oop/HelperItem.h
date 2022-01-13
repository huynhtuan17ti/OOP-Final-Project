#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <codecvt>
#include <locale>

class ImageItem {
private:
	std::wstring title;
	std::wstring imagePath;
public:
	ImageItem(std::wstring, std::wstring);
	ImageItem(const ImageItem&);
	~ImageItem(){}
	std::wstring getTitle() {
		return title;
	}
	std::wstring getImagePath() {
		return imagePath;
	}
};

class LocateItem {
private:
	std::wstring title;
	std::wstring address;
	std::wstring activeTime;
	std::wstring map;
public:
	LocateItem(std::wstring, std::wstring, std::wstring, std::wstring);
	LocateItem(const LocateItem&);
	~LocateItem(){}
	std::wstring getTitle() {
		return title;
	}
	std::wstring getAddress() {
		return address;
	}
	std::wstring getActiveTime() {
		return activeTime;
	}
	std::wstring getMap() {
		return map;
	}
};

class WebItem {
private:
	std::wstring title;
	std::wstring url;
public:
	WebItem(std::wstring, std::wstring);
	WebItem(const WebItem&);
	~WebItem(){}
	std::wstring getTitle() {
		return title;
	}
	std::wstring getUrl() {
		return url;
	}
};

class BaseList {
public:
	virtual ImageItem* getImageItem(int) const {
		return NULL;
	}
	virtual WebItem* getWebItem(int) const {
		return NULL;
	}
	virtual LocateItem* getLocateItem(int) const {
		return NULL;
	}
	virtual int getAmount() {
		return 0;
	}
	virtual ~BaseList(){}
};


class ImageItemList: public BaseList {
private:
	std::vector <ImageItem*> itemList;
public:
	ImageItemList(std::wstring path);
	~ImageItemList() {

	}
	ImageItem* getImageItem(int index) const {
		return itemList[index];
	}
	int getAmount() {
		return itemList.size();
	}
};

class WebItemList : public BaseList {
private:
	std::vector <WebItem*> itemList;
public:
	WebItemList(std::wstring path);
	~WebItemList() {

	}
	WebItem* getWebItem(int index) const {
		return itemList[index];
	}
	int getAmount() {
		return itemList.size();
	}
};

class LocateItemList : public BaseList {
private:
	std::vector <LocateItem*> itemList;
public:
	LocateItemList(std::wstring path);
	~LocateItemList() {

	}
	LocateItem* getLocateItem(int index) const {
		return itemList[index];
	}
	int getAmount() {
		return itemList.size();
	}
};