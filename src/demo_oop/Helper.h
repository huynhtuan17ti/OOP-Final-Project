#pragma once
#include "HelperVisitor.h"

class ImageHelper: public Helper {
private:
	std::vector <ImageItem*> itemList;
public:
	ImageHelper(std::wstring path);
	~ImageHelper() {
		for (auto& x : itemList) {
			delete x;
			x = nullptr;
		}
	}
	int getAmount() {
		return itemList.size();
	}
	ImageItem* getItemAtIndex(int index) const{
		return itemList[index];
	}
	ImageItem* accept(HelperVisitor* visitor, int index) const {
		return visitor->getImageItem(this, index);
	}
};

class LocateHelper: public Helper {
private:
	std::vector <LocateItem*> itemList;
public:
	LocateHelper(std::wstring path);
	~LocateHelper() {
		for (auto& x : itemList) {
			delete x;
			x = nullptr;
		}
	}
	int getAmount() {
		return itemList.size();
	}
	LocateItem* getItemAtIndex(int index) const {
		return itemList[index];
	}
	LocateItem* accept(HelperVisitor* visitor, int index) const {
		return visitor->getLocateItem(this, index);
	}
};

class WebHelper: public Helper {
private:
	std::wstring nameHelper;
	std::vector <WebItem*> itemList;
public:
	WebHelper(std::wstring path);
	~WebHelper() {
		for (auto& x : itemList) {
			delete x;
			x = nullptr;
		}
	}
	int getAmount() {
		return itemList.size();
	}
	WebItem* getItemAtIndex(int index) const {
		return itemList[index];
	}
	WebItem* accept(HelperVisitor* visitor, int index) const {
		return visitor->getWebItem(this, index);
	}
public:
	void setNameHelper(std::wstring src) {
		nameHelper = src;
	}
	std::wstring getNameHelper() {
		return nameHelper;
	}
};