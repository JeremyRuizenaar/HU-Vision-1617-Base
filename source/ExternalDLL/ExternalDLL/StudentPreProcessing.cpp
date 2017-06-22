#include "StudentPreProcessing.h"
#include<iostream>
//#include "C:\GitReposit-Jer\HU-Vision-1617-Base\timer\microtimer.h"

/*
*for testing purposes uncomment the included file
* uncomment everything above the for loops
* uncomment RGB pixel line
* select an algoritm by uncommenting one int = ...... line
* uncomment intentsityImg->setpixel(...   line
* comment out the last line in the inner for loop
* uncomment everything below the for loops
* set the number of iterations with the its variable
*/

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
				//RGB pixel = image.getPixel(x, y);
				//int grayValue = (pixel.r + pixel.g + pixel.b) / 3;				  // average algoritm
				//int grayValue = (0.3*pixel.r + 0.59*pixel.g + 0.11*pixel.b);       //luminance correction algoritm
				//int grayValue = pixel.g;											 //single color channel algoritm
				//IntensityImg->setPixel(x*image.getHeight() + y, Intensity(grayValue));
				IntensityImg->setPixel(x*image.getHeight() + y, Intensity(image.getPixel(x*image.getHeight() + y).g)); // the final chosen solution (single color channel)

			}
		}
	//}
	//end = microtime();
	//avg = (end - start) / its;
	//std::cout << avg << " avg microseconds\n";
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