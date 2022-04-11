//============================================================================
// Name        : CS1_IntArrays.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
#include "UsefulFunctions.hpp"
using namespace std;


int main() {
	//Arrays can never get larger or smaller. A vector is an array that can get bigger/smaller
	//Vector is an array; Uses Array to store data then allocates
	const int DONUT_ARRAY_SIZE = 30;
	int donutCount[DONUT_ARRAY_SIZE] = {1, 2}; //initializes first index to 1 and rest to 0
	int lastDonutIndex = -1;
	int intInput = 0;
	int arraySum = 0;

	for (int i=0; i < DONUT_ARRAY_SIZE; i++){
		cout << i << ": " << donutCount[i] << endl;
	}

	for (int i=0; i < DONUT_ARRAY_SIZE; i++){
		cout << "Please enter the donuts for " << i << " (-999 to quit) ";
		cin >> intInput;
		clearCIN();
		if(intInput == -999){
			break;
		} else {
			donutCount[i] = intInput;
			lastDonutIndex++;
		}
	}

	for (int i=0; i<= lastDonutIndex; i++){
		cout << i << ": " << donutCount[i] << endl;
		arraySum += donutCount[i];
	}
	cout << "Average for this array is: " << static_cast<float>(arraySum/lastDonutIndex+1) << endl;

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
