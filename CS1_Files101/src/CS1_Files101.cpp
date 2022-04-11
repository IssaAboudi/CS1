//============================================================================
// Name        : CS1_Files101.cpp
// Author      : Issa ABoudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	string employeeName;
	string fileName;
	float employeePay;

	//1) Outputing a file
	//What is a file?
	//A file is a collection of data that are all related in some fashion
	//It's also a collection of data that is saved between computer powerdowns
	//Files are stored on secodnary storage not just memory

	/*
	 * ask name of employee
	 * get name of employee
	 * if -999 break
	 *
	 *output file >> employee endl
	 **/
	ofstream outputFile;

	//2) Open the file
	outputFile.open(fileName);

	//3) Process file

	cout << "Please enter the name of the file to hold employee Names: ";
	getline(cin, fileName);
	while(true) {
		cout << "Please enter an employee's yearly salary (-999 to quit): ";
		cin >> employeePay;
		if( employeePay == "-999" ){
			cout << "Program terminated!" << endl;
			break;
		} else {
			outputFile << setw(8) << employeePay << endl;
		}

	//4) Close file
	outputFile.close();



	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
