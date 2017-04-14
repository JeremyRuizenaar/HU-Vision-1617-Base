#include "StudentLocalization.h"

bool StudentLocalization::stepFindHead(const IntensityImage &image, FeatureMap &features) const {
	//zoek op de x as beginnend vanaf links naar de eerste kolom met pixels 
	// zoek op de x as beginnen vanaf rechts naar de eerste kolom met pixels
	//zoek op de y as beginnen vanaf  boven naar de eerst rij met pixels
	// sla links en rechts op als coordinaat 
	// bereken  de x waarde van het hoofd door het x-coordinaat tussen hoofdlinks en hoofd rechts te nemen
	//ken deze x waarde toe aan het hoofdbovenkant coordinaat 
	//sla de 3 waardes op
	return false;
}

bool StudentLocalization::stepFindNoseMouthAndChin(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindChinContours(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindNoseEndsAndEyes(const IntensityImage &image, FeatureMap &features) const {
	return false;
}

bool StudentLocalization::stepFindExactEyes(const IntensityImage &image, FeatureMap &features) const {
	return false;
}