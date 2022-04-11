//============================================================================
// Name        : functions.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "functions.hpp"

string typeToString(planetType variable){
	switch(variable){
	case 0:
		return "Rocky";
		break;
	case 1:
		return "Gaseous";
		break;
	case 2:
		return "Ice";
		break;
	case 3:
		return "Water";
		break;
	case 4:
		return "Molten";
		break;
	default:
		return "Error: No type specified";
		break;
	}
}

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
