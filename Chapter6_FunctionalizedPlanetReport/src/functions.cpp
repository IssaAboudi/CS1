//============================================================================
// Name        : functions.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <climits>
#include <cmath>
#include "functions.hpp"
using namespace std;

double calculateVelocity (double distance){
	double orbitSpeed = 0.0;

	orbitSpeed = sqrt((G_CONST * MASS_OF_SUN)/distance);
	return orbitSpeed;
}

double calculatePeriod(double planetDistance){

	double orbitSpeed = calculateVelocity(planetDistance);
	double orbitPeriod = ((2 * PI * planetDistance)/orbitSpeed)/SECONDS_IN_YEAR;
	return orbitPeriod;
}
