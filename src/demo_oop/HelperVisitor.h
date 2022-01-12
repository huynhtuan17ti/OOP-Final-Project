#pragma once
#include "HelperItem.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <codecvt>
#include <locale>

class WebHelper;
class LocateHelper;
class ImageHelper;

class Helper {
public:
	virtual ~Helper() {}
};

class HelperVisitor {
public:
	virtual WebItem* getWebItem(const WebHelper*, int) const = 0;
	virtual ImageItem* getImageItem(const ImageHelper*, int) const = 0;
	virtual LocateItem* getLocateItem(const LocateHelper*, int) const = 0;
	virtual ~HelperVisitor(){}
};

class GetItemVisitor: public HelperVisitor {
public:
	WebItem* getWebItem(const WebHelper* webHelper, int index) const;
	ImageItem* getImageItem(const ImageHelper* imageHelper, int index) const;
	LocateItem* getLocateItem(const LocateHelper* locateHelper, int index) const;
};