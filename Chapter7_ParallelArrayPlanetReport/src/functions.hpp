/*
 * functions.hpp
 *
 *  Created on: Oct 15, 2020
 *      Author: ma422
 */

#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

//#INCLUDES
#include <iostream>
#include <fstream>
#include <climits>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;


//Global Constants:
const double G_CONST = 6.673e-11;
const double SECONDS_IN_YEAR = 31536000;
const double MASS_OF_SUN = 1.989e30;
const double PI = 3.14159;
const int NUMBEROFPLANETS = 50;


double calculateVelocity (double distance);
//Description:  Calculate orbital velocity around the sun using the gravitational equation
//Inputs: 		1 double
//Returns: 		1 double
//Author:		Issa A.
//Example use:	calculateVelocity(planetDistance);
//History:
	// 2020/10/15: (Issa A.) Initial Version
	// 2020/10/15: (Issa A.) Created prototype in hpp file,
							//moved function to another cpp file


double calculatePeriod(double planetDistance);
//Description:  Calculates orbital period based on circumference of each planet's orbit
//Inputs: 		1 double
//Returns: 		1 double
//Author:		Issa A.
//Example use:	calculatePeriod(planetDistance);
//History:
	// 2020/10/15: (Issa A.) Initial Version
	// 2020/10/15: (Issa A.) Created prototype in hpp file,
							//moved function to another cpp file

int readPlanets(string planetNames[], double planetMass[], double planetDistance[], string fileName);
//Description:  Returns number of planets and sorts planets from a file into three
					//different arrays at the same positions
//Inputs: 		1 string array, 2 double arrays, 1 string
//Returns: 		1 integer
//Author:		Issa A.
//Example use:	readPlanet(planetName, planetMass, planetDistance, fileName);
//History:
	// 2020/10/29: (Issa A.) Initial Version
	// 2020/10/29: (Issa A.) Created prototype in hpp file & function in another cpp file

void calcPlanets(string planetNames[], double planetMasses[], double planetDistance[], double planetVelocity[], float planetPeriod[], int totalPlanets);
//Description:  Calls the calculateVelocity() function and the calculatePeriod() function
					// for each planet in the arrays
//Inputs: 		1 string array, 3 double arrays, 1 float array, 1 int
//Returns: 		None
//Author:		Issa A.
//Example use:	calcPlanet(planetName, planetMass, planetDistance, planetVelocity, planetPeriod, totalPlanets);
//History:
	// 2020/10/29: (Issa A.) Initial Version
	// 2020/10/29: (Issa A.) Created prototype in hpp file & function in another cpp file

void printPlanets(string planetNames[], double planetMasses[], double planetDistance[], double planetVelocity[], float planetPeriod[], int totalPlanets);
//Description:  Prints a pretty report of all the calculations for calculating velocity and orbit speed
					// for each planet in the arrays
//Inputs: 		1 string array, 3 double arrays, 1 float array, 1 int
//Returns: 		None
//Author:		Issa A.
//Example use:	calcPlanet(planetName, planetMass, planetDistance, planetVelocity, planetPeriod, totalPlanets);
//History:
	// 2020/10/29: (Issa A.) Initial Version
	// 2020/10/29: (Issa A.) Created prototype in hpp file & function in another cpp file
#endif /* FUNCTIONS_HPP_ */
