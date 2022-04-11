//============================================================================
// Name        : CS1_Boolean.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool yesOrNo;
	long longVar = 0;
	long long longLongVar = 0;
	double doubleVar = 0.0;
/*
	const double gravConst = 6.45;
	const int monthsInYear = 12;
	const double hoursInADay = 23.54;
	const double ValueOfPi = 3.1415926;
*/
	yesOrNo = false;

	if(yesOrNo){
		cout << "The value of yesOrNo is true" << endl;
	} //if
	else {
		cout << "The value of yesOrNo is false" << endl;
	} //else

	cout << "Program ending, Have a nice day!" << endl;

	cout << "yesOrNo is " << sizeof(yesOrNo) << endl;
	cout <<"longVar is " << sizeof(longVar) << endl;
	cout <<"longLongVar is " << sizeof(longLongVar) << endl;
	cout << "doubleVar is " << sizeof(doubleVar) << endl;

	int myStrangeIntVariable = 99;
	//scope = what can be seen from where
	{
		myStrangeIntVariable = 99;
	}
	myStrangeIntVariable = 400;

	cout << myStrangeIntVariable << endl;

	cout << 12.0/2.0 << endl;

	int onceADouble = 0;
	double iAmADouble = 99.9999;

	onceADouble = iAmADouble + 0.5; //rounds up the double
	cout << onceADouble << endl;
}
