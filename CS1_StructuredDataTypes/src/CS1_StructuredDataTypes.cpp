//============================================================================
// Name        : CS1_StructuredDataTypes.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <vector>
#include "planets.hpp"
using namespace std;

const unsigned int ARRAY_SIZE = 12;

int main() {

	planet thePlanet, thePlanet2;
	thePlanet.mass = 3.3011e23;
	strcpy(thePlanet.name, "Mercury");
	thePlanet.distanceFromSun = 4.6001200e7;
	thePlanet.diameter = 10;
	thePlanet.numMoons = 0;
	thePlanet.numRings = 0;
	thePlanet.planetClass = 'A';

	cout << "thePlanet Details:" << endl;
	cout << "================" << endl;
	cout << "\tMass: " << thePlanet.mass << endl;
	cout << "\tDistance: " << thePlanet.distanceFromSun << endl;
	cout << "Size of thePlanet is " << sizeof(thePlanet) << endl;

	thePlanet2 = thePlanet; //copies thePlanet stuff to thePlanet2

	planet theSolarSystem[ARRAY_SIZE]; //Array
	vector<planet> theSolarSystem2; //Vector

	theSolarSystem[0] = thePlanet; //First Index of Array - adding a copy of thePlanet into first index
	theSolarSystem2.push_back(thePlanet); //Add to the first position of Vector - adding a copy of thePlanet

	thePlanet.mass = 3.3011e23;
	strcpy(thePlanet.name, "Venus");
	thePlanet.distanceFromSun = 4.6001200e7;
	thePlanet.diameter = 10;
	thePlanet.numMoons = 0;
	thePlanet.numRings = 0;
	thePlanet.planetClass = 'A';

	theSolarSystem[1] = thePlanet;
	theSolarSystem2.push_back(thePlanet);

	strcpy(thePlanet.name, "Earth");
	thePlanet.distanceFromSun = 4.6001200e7;
	thePlanet.diameter = 10;
	thePlanet.numMoons = 1;
	thePlanet.numRings = 0;
	thePlanet.planetClass = 'A';
	thePlanet.mass = 3.3011e23;
	strcpy(thePlanet.planetMoons[0].name, "The Moon");

	theSolarSystem[2] = thePlanet; //First Index of Array - adding a copy of thePlanet into first index
	theSolarSystem2.push_back(thePlanet); //Add to the first position of Vector - adding a copy of thePlanet



	for(unsigned int i = 0; i < theSolarSystem2.size(); i++){
		cout << theSolarSystem[i].name << " is in the array" << endl;
		if(theSolarSystem[i].numMoons > 0){
			for(int j = 0; j < theSolarSystem[i].numMoons; j++){
				cout  << "\t Has Moon: " << theSolarSystem[i].planetMoons[j].name << endl;
			}//for
		}//if
		cout << theSolarSystem2[i].name << " is in the vector" << endl;
		if(theSolarSystem2[i].numMoons > 0){
			for(int j=0; j < theSolarSystem2[i].numMoons; j++) {
				cout << "\t Has Moon: " << theSolarSystem2[i].planetMoons[j].name << endl;
			}//for
		}//if
	}

	//	planet2 reallyBigNamedPlanet;
	//	reallyBigNamedPlanet.name = "Some ridiculous name for this planet";
	//
	//	planet2 reallySmallNamedPlanet;
	//	reallySmallNamedPlanet.name = "duh";
	//
	//	cout << "ReallyBigNamedPlanet : " << sizeof(reallyBigNamedPlanet) << endl;
	//	cout << "ReallySmallNamedPlanet : " << sizeof(reallySmallNamedPlanet) << endl;



	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
