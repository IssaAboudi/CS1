//============================================================================
// Name        : CS1_Chapter3a.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

void clearCin(void){
	cin.clear(); // ONLY do this after a cin going into numeric
	cin.ignore(INT_MAX, '\n'); //Variable never do this before or after getline
} //clearCIN

int main() {
	//Typecasting
		double double1 = 3.77;
		double double2 = 5.2;
		double double3 = 0;

		double3 = double1 * double2;
		cout << "Double3 has a value of " << double3 <<endl;

		double3 = (int)((double1 * double2)+.5);
		cout << "Double3 has a value of " << double3 <<endl;

//
//	//OVERFLOW & UNDERFLOW
//		int bigInt = INT_MAX;
//		cout << "The value of bigInt is " << bigInt << endl;
//
//		bigInt = bigInt + 1; // OVERFLOW (1 mile north of the north pole)
//		cout << "The value of bigInt is " << bigInt << endl;
//
//		int smallInt = INT_MIN;
//		cout << "The value of smallInt is " << bigInt << endl;
//
//		smallInt = INT_MIN - 1; //UNDERFLOW (1 mile south of south pole)
//		cout << "The value of smallInt is " << smallInt << endl;

		int ageInYears = 0;
		string userName = " ";
		int userWeight = 0;
		int userIQ, userHeight;

		cout << "Welcome to my program" << endl; //used to display data to the user

		cout << "What is your name please (You may include spaces)? " << endl;
		//cin >> userName;		//cin into a string string will not allow for spaces so we're not going to use it
		getline(cin, userName); //Should be used for all strings with spaces

		cout << "Please enter your age in years (choose a number from 0 to 110): " << endl;
		cin >> ageInYears;
		clearCin();

		cout << "Ok, what is your weight in pounds (choose a number between 10 pounds to 350 pounds): " << endl;
		cin >> userWeight;
		//clearCin(); //With this commented out, it still functions as it wasn't commented out..? Why is that the case?

		cout << "Please enter your IQ and your height: " << endl;
		cin >> userIQ >> userHeight;
		clearCin();

		cout << "Ahhhh! " << userName << ", you're " << ageInYears << " years old and weigh "<< userWeight << " pounds!" << endl;
		cout << userIQ << ", " << userHeight << endl;

		cout << "the power of 10 to the 5th is " << pow(10, 5) << endl;

		cout << "Program ending, have a nice day!" << endl;
		return 0; // zero means all is well
}
