//============================================================================
// Name        : CS1_Files1and2.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <climits>
#include <iomanip>
using namespace std;

void clearCIN(){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {

	//Each row is a file record
	//Each column is called a field
	//space delimited file (each field is surrounded by spaces)
	//comma delimited file (each field begins after the comma)

	ofstream donutFile;

	donutFile.open("DonutFile.txt");

	float donutPrice; //the price of a donut to a donut eater
	string donutName; //the name/flavor of a donut
	float donutCost; //How much it costs to make a donut
	int donutInventory; //Number of donuts we have on hand of this flavor type;
	int numberOfDonutsEntered = 0; //Keeps track of how many donuts entered by the user;

	while(true){
		while(true){
			cout << "Please enter the name/flavor of a donut (-999 to quit): " << endl;
			getline(cin, donutName);
			if(donutName.size() == 0){
				cout << "*** Donut name cannot be blank, try again ***" << endl;
			} else {
				break;
			}
		}
		if(donutName == "-999"){
			break;
		}
		cout << "Please enter the cost to make a donut (-999 to quit): " << endl;
		cin >> donutCost;
		clearCIN();
		cout << "Please enter the price to buy this donut (-999 to quit): " << endl;
		cin >> donutPrice;
		clearCIN();
		cout << "Please enter the number of donuts you have on hand (-999 to quit): " << endl;
		cin >> donutInventory;
		clearCIN();

		if(numberOfDonutsEntered == 0){
		donutFile << setw(20) << donutName << " " << setw(12) << donutCost << " "  << setw(12) << donutPrice << " " << setw(12) << donutInventory;
		}
		else {
			donutFile <<endl << setw(20) << donutName << " " << setw(12) << donutCost << " "  << setw(12) << donutPrice << " " << setw(12) << donutInventory;
		}
		numberOfDonutsEntered++;
	}
	donutFile.close();

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
