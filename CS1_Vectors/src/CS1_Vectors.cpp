//============================================================================
// Name        : CS1_Vectors.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<float> myGrades;
	float sum = 0;

	myGrades.push_back(89);
	myGrades.push_back(100);
	myGrades.push_back(92);
	myGrades.push_back(56);

	for(int i = 0; i < myGrades.size(); i++){
		sum += 	myGrades[i];

	}
	cout << "Average of grades is: " << sum/myGrades.size() << endl;
	myGrades.clear();


	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
