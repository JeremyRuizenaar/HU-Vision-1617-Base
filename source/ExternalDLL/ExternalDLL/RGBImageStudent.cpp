#include "RGBImageStudent.h"
#include <iostream>

RGBImageStudent::RGBImageStudent() : RGBImage() {
}

RGBImageStudent::RGBImageStudent(const RGBImageStudent &other) : RGBImage(other.getWidth(), other.getHeight()) {
	RgbPixelArray = new RGB[getWidth() * getHeight()];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			RgbPixelArray[x * getHeight() + y] = other.getPixel(x * getHeight() + y);
		}
	}
}


RGBImageStudent::RGBImageStudent(const int width, const int height) : RGBImage(width, height) {
	RgbPixelArray = new RGB[getWidth() * getHeight()];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			RgbPixelArray[x * getHeight() + y] = RGB(0, 0, 0);
		}
	}
}

RGBImageStudent::~RGBImageStudent() {
	delete[] RgbPixelArray;
}

void RGBImageStudent::set(const int width, const int height) {
	RGBImage::set(width, height);
	delete[] RgbPixelArray;
	RgbPixelArray = new RGB[width * height];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			RgbPixelArray[x * getHeight() + y ] = RGB(0, 0, 0);
		}
	}
}

void RGBImageStudent::set(const RGBImageStudent &other) {
	RGBImage::set(other.getWidth(), other.getHeight());
	delete[] RgbPixelArray;
	RgbPixelArray = new RGB[getWidth() * getHeight()];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			RgbPixelArray[x * getHeight() + y] = other.getPixel(x * getHeight() + y);
		}
	}
}

void RGBImageStudent::setPixel(int x, int y, RGB pixel) {
	RgbPixelArray[x * getHeight() + y] = pixel;
}

void RGBImageStudent::setPixel(int i, RGB pixel) {
	RgbPixelArray[i] = pixel;
}

RGB RGBImageStudent::getPixel(int x, int y) const {
	return RgbPixelArray[x * getHeight() + y];
}

RGB RGBImageStudent::getPixel(int i) const {
	return RgbPixelArray[i];
}