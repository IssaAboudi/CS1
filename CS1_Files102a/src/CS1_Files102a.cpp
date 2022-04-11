//============================================================================
// Name        : CS1_Files102a.cpp
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


	ifstream donutFile;

	donutFile.open("DonutFile.txt");
	if(donutFile.fail()){
		cout << "File could not be opened, program ending" << endl;
 	}

	float donutPrice; //the price of a donut to a donut eater
	string donutName; //the name/flavor of a donut
	float donutCost; //How much it costs to make a donut
	int donutInventory; //Number of donuts we have on hand of this flavor type;
	int numberOfDonutsRead = 0; //Keeps track of how many donuts entered by the user;



	cout << "Donut Name " << "Donut Cost " << "Donut Price " << "Donut Inventory " << endl;
	cout << "========== " << "========== " << "=========== " << "=============== " << endl;
	while(!donutFile.eof()){
		donutFile >> donutName >> donutCost >> donutPrice >> donutInventory;
		numberOfDonutsRead++;

		cout << setw(10) << donutName << setw(2) << " " << setw(2) << donutCost << " " << setw(8) << donutPrice << " " << setw(12) << donutInventory << endl;
	}
	donutFile.close();

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
