/*
 * functions.hpp
 *
 *  Created on: Oct 15, 2020
 *      Author: ma422
 */

#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

//Global Constants:
const double G_CONST = 6.673e-11;
const double SECONDS_IN_YEAR = 31536000;
const double MASS_OF_SUN = 1.989e30;
const double PI = 3.14159;


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


#endif /* FUNCTIONS_HPP_ */
