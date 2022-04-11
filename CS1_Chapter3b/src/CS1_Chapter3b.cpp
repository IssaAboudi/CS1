//============================================================================
// Name        : CS1_Chapter3b.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {

//	int x = 4;
//	x %= 2;
//
//	cout << "Number: " << x << endl;

//	cout << fixed << setprecision(2) << "$" << 123.4 << endl;
//	cout << "$" << 123.45 << endl;

	// column width << data

	/*
	Monthly Donut Sales Report:
	===========================
	Month            Flavor             Avg. Price ($)          Total Sold
	------           ---------           -------------          ----------
	August           Chocolate                  1.20                 345
	August           Vanilla                    2.00                   5
	August           Bear Claw                  1.50                  12
	August           Carmel Cake                0.99                1234
	*/

	//Page Header
	cout << "Monthly Donut Sales Report:" << endl;
	cout << "===========================" << endl;
	cout << setw(17) << left << "Month" << setw(17) << left << "Flavor" << setw(16) << right << "Avg. Price ($)" << setw(20) << right << "Total Sold" << endl;// set widths of the column Month
	cout << setw(17) << left << "------" << setw(17) << left << "---------" <<setw(16) << right << "-------------" <<  setw(20) << right << "----------" << endl;// set widths of the column Month

	//Page Details (Would normally loop)
	cout << fixed << setprecision(2);
	cout << setw(17) << left << "August" << setw(17) << left << "Chocolate"   << setw(14) << right << 1.20 << setw(20) << "345" << endl;
	cout << setw(17) << left << "August" << setw(17) << left << "Vanilla"     << setw(14) << right << 2.00 << setw(20) << "5" << endl;
	cout << setw(17) << left << "August" << setw(17) << left << "Bear Claw"   << setw(14) << right << 1.50 << setw(20) << "12" << endl;
	cout << setw(17) << left << "August" << setw(17) << left << "Carmel Cake" << setw(14) << right << 0.99 << setw(20) << "1234" << endl;

	int myAge;
	string myName;
	char userInput;
	cout << "Please enter your age in years" << endl;
	cin >> myAge;
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	myAge += 1;
	cout << "Your age is: " << myAge << endl;

	cout << "Please press enter to continue..." << endl;
	//cin >> userInput; //This doesn't allow for blanks
	cin.get(userInput); //This now allows for blanks

	cout << "Please enter your name: ";
	getline(cin, myName);
	cout << "Thanks " << myName << "!" <<  endl;

	//cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, have a nice day!
	return 0;
}
