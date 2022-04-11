//============================================================================
// Name        : Chapter7_ParallelArrayPlanetReport.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "functions.hpp"
using namespace std;

int main() {


	string fileName = " "; //userInput for file name entry


	//Define Arrays to store data from the file
	string planetNames[NUMBEROFPLANETS] = {" "};
	double planetMasses[NUMBEROFPLANETS] = {0};
	double planetDistance[NUMBEROFPLANETS] = {0};
	double planetVelocity[NUMBEROFPLANETS] = {0};
	float planetPeriod[NUMBEROFPLANETS] = {0};


	//create ifstream file
	ifstream planetFile;

	//Ask user to input name of a file they would like the program to open

	cout << "Please enter the name of the file which contains the planetary data: ";
	getline(cin, fileName);

	cout << endl;
	cout << endl;

	planetFile.open(fileName);
	if(planetFile.fail()){
		cout << "Error, file could not be opened: " << fileName << endl;
	}
	else {
		unsigned int planetCount = readPlanets(planetNames, planetMasses, planetDistance, fileName);
		calcPlanets(planetNames, planetMasses, planetDistance, planetVelocity, planetPeriod, planetCount);
		printPlanets(planetNames, planetMasses, planetDistance, planetVelocity, planetPeriod, planetCount);
	}

	//close file
	planetFile.close();

	cout << endl;
	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
