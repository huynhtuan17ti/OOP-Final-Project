#pragma once
#include <string>

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