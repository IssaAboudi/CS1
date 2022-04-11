/*
 * functions.hpp
 *
 *  Created on: Nov 15, 2020
 *      Author: ma422
 */

#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

//Includes
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;

//Global Constants:
const double G_CONST = 6.673e-11;
const double SECONDS_IN_YEAR = 31536000;
const double MASS_OF_SUN = 1.989e30;
const double PI = 3.14159;

enum planetType{
	Rocky,
	Gaseous,
	Ice,
	Water,
	Molten
};

struct Moon{
	char name[32];
	double mass;
	double distance;
	double radius;
	planetType type;
};

struct Planet{
	char name[32];
	double mass;
	double distance;
	double radius;
	planetType type;
	float orbitalVelocity;
	float orbitalPeriod;
	vector<Moon> moons;
};

double calculateVelocity (double distance);
//Description:  Calculate orbital velocity around the sun using the gravitational equation
//Inputs: 		1 double
//Returns: 		1 double
//Author:		Issa A.
//Example use:	calculateVelocity(planetDistance);
//History:
	// 2020/10/15: (Issa A.) Initial Version
	// 2020/11/19: (Issa A.) Copied over to this new program

double calculatePeriod(double planetDistance);
//Description:  Calculates orbital period based on circumference of each planet's orbit
//Inputs: 		1 double
//Returns: 		1 double
//Author:		Issa A.
//Example use:	calculatePeriod(planetDistance);
//History:
	// 2020/10/15: (Issa A.) Initial Version
	// 2020/11/19: (Issa A.) Copied over to this new program

string typeToString(planetType variable);
//Description:  returns the appropriate string associated with enumartor value passed to function
//Inputs: 		1 planetType
//Returns: 		1 string
//Author:		Issa A.
//Example use:	typeToString(planet.type) - given that planet is a struct with a member of enum planetType type
//History:
	// 2020/11/19: (Issa A.) Initial Version

#endif /* FUNCTIONS_HPP_ */
