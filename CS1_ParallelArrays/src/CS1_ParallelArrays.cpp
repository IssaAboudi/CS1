//============================================================================
// Name        : CS1_ParallelArrays.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <climits>
#include "zoofunctions.hpp"
using namespace std;


int main() {
	string animalSpecies[MAXANIMALS];
	int animalPop[MAXANIMALS];
	float animalLifeSpan[MAXANIMALS];


//
//	animalSpecies[0] = "Squirrel";
//	animalCounter++;
//	animalSpecies[1] = "Tiger";
//	animalCounter++;
//	animalSpecies[2] = "Giraffe";
//	animalCounter++;
//	animalSpecies[3] = "Chimpanzee";
//	animalCounter++;
//	animalSpecies[4] = "Lion";
//	animalCounter++;
//	animalSpecies[5] = "Lemur";
//	animalCounter++;
//
//	animalPop[0] = 14;
//	animalPop[1] = 6;
//	animalPop[2] = 8;
//	animalPop[3] = 14;
//	animalPop[4] = 8;
//	animalPop[5] = 14;
//
//	animalLifeSpan[0] = 2.5;
//	animalLifeSpan[1] = 32;
//	animalLifeSpan[2] = 18.5;
//	animalLifeSpan[3] = 45;
//	animalLifeSpan[4] = 27;
//	animalLifeSpan[5] = 8;


	int animalsInput = inputAnimals(animalSpecies, animalPop, animalLifeSpan);
	printAnimalReport(animalSpecies, animalPop, animalLifeSpan, animalsInput);

	cout << "Program Ending, Have a nice Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
