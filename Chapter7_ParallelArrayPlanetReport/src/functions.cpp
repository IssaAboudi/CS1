//============================================================================
// Name        : functions.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

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

int readPlanets(string planetNames[], double planetMasses[], double planetDistance[], string fileName){
	int x  = 0; //counter for number of planets - is returned by the function
	string planetName = " ";
	double planetMass = 0.0;
	double planetDist = 0.0;

	//Create ifstream file
	ifstream planetFile;

	//Open file using fileName variable - which contains userinput already
	planetFile.open(fileName);
	while(!planetFile.eof()){
		planetFile >> planetName;
		planetFile >> planetDist;
		planetFile >> planetMass;
		planetNames[x] = planetName;
		planetDistance[x] = planetDist;
		planetMasses[x] = planetMass;
		x++;
	}

	//closes ifstream file
	planetFile.close();

	return x; //Returns number of planets read from file
}

void calcPlanets(string planetNames[], double planetMasses[], double planetDistance[], double planetVelocity[], float planetPeriod[], int totalPlanets){
	for(int i = 0; i < totalPlanets; i++){
		planetVelocity[i] = calculateVelocity(planetDistance[i]);
		planetPeriod[i] = calculatePeriod(planetDistance[i]);
	}
}

void printPlanets(string planetNames[], double planetMasses[], double planetDistance[], double planetVelocity[], float planetPeriod[], int totalPlanets){
	cout << right;
	cout << setw(10) << "Planet " << setw(15) << "Mass (kg) " << setw(15) << "Distance (m)" << setw(25) << "Avg. Orbital Speed (m/s)" << setw(20) << "Orbital Period (y) " << endl;
	cout << setw(10) << "====== " << setw(15) << "========= " << setw(15) << "============" << setw(25) << "========================" << setw(20) << "================== " << endl;
	for(int i = 0; i < totalPlanets; i++){
		cout << right << setprecision(2) << scientific; //sets all numbers except the orbital period to be in scientific form every time it iterates through a loop
		cout << setw(10) << planetNames[i] << setw(15) << planetMasses[i] << setw(15) << planetDistance[i] << setw(25) << planetVelocity[i] << setw(20) << setprecision(2) << fixed << planetPeriod[i] << endl;
	}
}
