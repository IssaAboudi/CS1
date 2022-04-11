/*
 * zoofunctions.hpp
 *
 *  Created on: Oct 27, 2020
 *      Author: ma422
 */

#ifndef ZOOFUNCTIONS_HPP_
#define ZOOFUNCTIONS_HPP_
#include <string>
using namespace std;

const int MAXANIMALS = 100;

int inputAnimals(string speciesNameArray[], int populationArray[], float lifeSpanArray[]);
void printAnimalReport(string speciesNameArray[], int populationArray[], float lifeSpanArray[], int arraySize);


#endif /* ZOOFUNCTIONS_HPP_ */
