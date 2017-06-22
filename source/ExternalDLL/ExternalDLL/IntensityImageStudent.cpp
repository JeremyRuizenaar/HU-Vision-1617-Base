#include "IntensityImageStudent.h"
#include <iostream>

IntensityImageStudent::IntensityImageStudent() : IntensityImage() {
}

IntensityImageStudent::IntensityImageStudent(const IntensityImageStudent &other) : IntensityImage(other.getWidth(), other.getHeight()) {
	IntensityPixelArray = new Intensity[getWidth() * getHeight()];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			IntensityPixelArray[x * getHeight() + y] = other.getPixel(x * getHeight() + y);
		}
	}
}

IntensityImageStudent::IntensityImageStudent(const int width, const int height) : IntensityImage(width, height) {
	IntensityPixelArray = new Intensity[width * height];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			IntensityPixelArray[x * getHeight() + y] = Intensity(0);
		}
	}
}

IntensityImageStudent::~IntensityImageStudent() {
	delete[] IntensityPixelArray;
	
}

void IntensityImageStudent::set(const int width, const int height) {
	IntensityImage::set(width, height);
	delete[] IntensityPixelArray;
	IntensityPixelArray = new Intensity[width * height];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			IntensityPixelArray[x * getHeight() + y] = Intensity(0);
		}
	}
}

void IntensityImageStudent::set(const IntensityImageStudent &other) {
	IntensityImage::set(other.getWidth(), other.getHeight());
	delete[] IntensityPixelArray;
	IntensityPixelArray = new Intensity[getWidth() * getHeight()];
	for (int x = 0; x < getWidth(); x++) {
		for (int y = 0; y < getHeight(); y++) {
			IntensityPixelArray[x * getHeight() + y] = other.getPixel(x * getHeight() + y);
		}
	}
}

void IntensityImageStudent::setPixel(int x, int y, Intensity pixel) {
	IntensityPixelArray[x * getHeight() + y] = pixel;
}

void IntensityImageStudent::setPixel(int i, Intensity pixel) {
	IntensityPixelArray[i] = pixel;
}

Intensity IntensityImageStudent::getPixel(int x, int y) const {
	return IntensityPixelArray[x * getHeight() + y];
}

Intensity IntensityImageStudent::getPixel(int i) const {
	return IntensityPixelArray[i];
}