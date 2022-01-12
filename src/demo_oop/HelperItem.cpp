#include "HelperItem.h"

ImageItem::ImageItem(std::wstring srcTitle, std::wstring srcImagePath) {
	title = srcTitle;
	imagePath = srcImagePath;
}

ImageItem::ImageItem(const ImageItem& other) {
	title = other.title;
	imagePath = other.imagePath;
}

LocateItem::LocateItem(std::wstring srcTitle, std::wstring srcAddress, std::wstring srcActiveTime, std::wstring srcMap) {
	title = srcTitle;
	address = srcAddress;
	activeTime = srcActiveTime;
	map = srcMap;
}

LocateItem::LocateItem(const LocateItem& other) {
	title = other.title;
	address = other.address;
	activeTime = other.activeTime;
	map = other.map;
}

WebItem::WebItem(std::wstring srcTitle, std::wstring srcUrl) {
	title = srcTitle;
	url = srcUrl;
}

WebItem::WebItem(const WebItem& other) {
	title = other.title;
	url = other.url;
}