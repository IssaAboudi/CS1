/*
 * planets.hpp
 *
 *  Created on: Nov 10, 2020
 *      Author: ma422
 */

#ifndef PLANETS_HPP_
#define PLANETS_HPP_
#include <string>
using namespace std;


struct moon {
	char name[32];
	double mass;
	long diameter;
};
//Abstract Data type which defines characteristics (attributes) of a planet

struct planet {
	char name[32];
	double mass;
	double distanceFromSun;
	float rotationalPeriod;
	double diameter;
	int numMoons;
	int numRings;
	char planetClass; 				//M,N,O, etc.
	moon planetMoons[100];
};



struct planet2 {
	char name[32];
	double mass;
	double distanceFromSun;
	float rotationalPeriod;
	double diameter;
	int numMoons;
	int numRings;
	char planetClass; 				//M,N,O, etc.
};

#endif /* PLANETS_HPP_ */
