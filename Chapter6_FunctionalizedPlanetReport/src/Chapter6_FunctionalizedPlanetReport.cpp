//============================================================================
// Name        : Chapter6_FunctionalizedPlanetReport.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <climits>
#include <iomanip>
#include <cmath>

#include "functions.hpp"

using namespace std;

int main() {


	string fileName = " "; //userInput for file name entry

	//Variables for reading the file
	string planetName = " ";
	double planetMass = 0.0;
	double planetDistance = 0.0;
	double orbitSpeed = 0.0;
	double orbitPeriod = 0.0;


	//create ifstream file
	ifstream planetFile;

	//Ask user to input name of a file they would like the program to open

	cout << "Please enter the name of the file which contains the planetary data: ";
	getline(cin, fileName);

	planetFile.open(fileName);
	if(planetFile.fail()){
		cout << "Error, file could not be opened: " << fileName << endl;
	}
	else {
		cout << right;
		cout << setw(10) << "Planet " << setw(15) << "Mass (kg) " << setw(15) << "Distance (m)" << setw(25) << "Avg. Orbital Speed (m/s)" << setw(20) << "Orbital Period (y) " << endl;
		cout << setw(10) << "====== " << setw(15) << "========= " << setw(15) << "============" << setw(25) << "========================" << setw(20) << "================== " << endl;
		while(!planetFile.eof()){
			cout << right << setprecision(2) << scientific; //sets all numbers except the orbital period to be in scientific form every time it iterates through a loop
			planetFile >> planetName;
			planetFile >> planetDistance;
			planetFile >> planetMass;
			orbitSpeed = calculateVelocity(planetDistance);
			orbitPeriod = calculatePeriod(planetDistance);
			cout << setw(10) << planetName << setw(15) << planetMass << setw(15) << planetDistance << setw(25) << orbitSpeed << setw(20) << setprecision(2) << fixed << orbitPeriod << endl;
		}
	}

	//close file
	planetFile.close();

	cout << endl;
	cout << endl;
	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
