#include "StudentPreProcessing.h"
#include<iostream>
//#include "C:\GitReposit-Jer\HU-Vision-1617-Base\timer\microtimer.h"

IntensityImage * StudentPreProcessing::stepToIntensityImage(const RGBImage &image) const {
	IntensityImage * IntensityImg = ImageFactory::newIntensityImage(image.getWidth(), image.getHeight());
	//microtimer microtime;
	//microtimer::size_type start, end, avg;
	//int its = 1;
	//std::cout << " starting algoritme exe time\n";
	//start = microtime();
	//for (int i = 0; i < its; i++) {
		for (int x = 0; x < image.getWidth(); x++) {
			for (int y = 0; y < image.getHeight(); y++) {
				RGB pixel = image.getPixel(x, y);
				//int grayValue = (pixel.r + pixel.g + pixel.b) / 3;
				//int grayValue = (0.3*pixel.r + 0.59*pixel.g + 0.11*pixel.b);     //works
				int grayValue = pixel.g;                                       //green works
				IntensityImg->setPixel(x*image.getHeight() + y, Intensity(grayValue));
			}
		}
	//}
	//end = microtime();
	//avg = (end - start) / its;
	//std::cout << avg << " avg microseconds\n";
	//Luminance correction = 13497 ms at 100000		single color channel = 12144 ms at 100000 its  avarige = 13352  ms at 100000
	return IntensityImg;
}

IntensityImage * StudentPreProcessing::stepScaleImage(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepEdgeDetection(const IntensityImage &image) const {
	return nullptr;
}

IntensityImage * StudentPreProcessing::stepThresholding(const IntensityImage &image) const {
	return nullptr;
}