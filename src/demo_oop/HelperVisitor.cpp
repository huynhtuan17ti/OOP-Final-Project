#include "HelperVisitor.h"
#include "Helper.h"

WebItem* GetItemVisitor::getWebItem(const WebHelper* webHelper, int index) const {
	return webHelper->getItemAtIndex(index);
}

ImageItem* GetItemVisitor::getImageItem(const ImageHelper* imageHelper, int index) const {
	return imageHelper->getItemAtIndex(index);
}

LocateItem* GetItemVisitor::getLocateItem(const LocateHelper* locateHelper, int index) const {
	return locateHelper->getItemAtIndex(index);
}