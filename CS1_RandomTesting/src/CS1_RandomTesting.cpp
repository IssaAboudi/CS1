//============================================================================
// Name        : CS1_RandomTesting.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;
#include <time.h>
int main() {

	srand(time(0));
	//regular random number generator
	cout << rand()%100 << endl;
	cout << rand()%100 << endl;
	cout << rand()%100 << endl;
	cout << rand()%100 << endl;
	cout << rand()%100 << endl;
	//random number generator between 50 and 100
	cout << (rand()%50 + 50) << endl;
	cout << (rand()%50 + 50) << endl;
	cout << (rand()%50 + 50) << endl;
	cout << (rand()%50 + 50) << endl;
	cout << (rand()%50 + 50) << endl;
	cout << (rand()%50 + 50) << endl;
	cout << (rand()%50 + 50) << endl;


	//random number generator float
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;
	cout << ((rand()%10000)/100.00) << endl;



	cout << "Program Ending, have a nice day!" << endl; // prints Program Ending, have a nice day!
	return 0;
}
