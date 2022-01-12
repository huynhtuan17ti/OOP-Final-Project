#include "Helper.h"

ImageHelper::ImageHelper(std::wstring path) {
	std::wifstream fi(path);
	fi.imbue(std::locale(fi.getloc(), new std::codecvt_utf8<wchar_t>));
	if (!fi)
		throw "Cannot open file!";

	std::wstring line;
	while (getline(fi, line)) {
		ImageItem* imageItem = new ImageItem(L"", line);
		itemList.push_back(imageItem);
	}

	fi.close();
}

LocateHelper::LocateHelper(std::wstring path) {
	std::wifstream fi(path);
	fi.imbue(std::locale(fi.getloc(), new std::codecvt_utf8<wchar_t>));
	if (!fi)
		throw "Cannot open file!";

	std::wstring line;
	int turn = 0;
	std::wstring title, address, activeTime, map;
	while (getline(fi, line)) {
		if (turn == 0)
			title = line;
		if (turn == 1)
			address = line;
		if (turn == 2)
			activeTime = line;
		if (turn == 3)
			map = line;
		turn++;
		if (turn == 4) {
			LocateItem* locateItem = new LocateItem(title, address, activeTime, map);
			itemList.push_back(locateItem);
			turn = 0;
		}
	}

	fi.close();
}

WebHelper::WebHelper(std::wstring path) {
	std::wifstream fi(path);
	fi.imbue(std::locale(fi.getloc(), new std::codecvt_utf8<wchar_t>));
	if (!fi)
		throw "Cannot open file!";

	std::wstring line;
	while (getline(fi, line)) {
		std::wistringstream iss(line);
		std::wstring title, url;
		std::getline(iss, title, L',');
		std::getline(iss, url, L',');

		WebItem* webItem = new WebItem(title, url);
		itemList.push_back(webItem);
	}

	fi.close();
}