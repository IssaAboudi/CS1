//============================================================================
// Name        : CS1_FilesInput.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	string employeeName;
	float employeePay;

	//~Read in the file

	//1) Create a file variable (input)
	//ifstream = input variable
	ifstream empInputFile;
	ifstream payInputFile;

	//2) Open the file
	empInputFile.open("EmployeeFile.txt");
	if (empInputFile.fail()){
		cout << "Error opening EmployeeFile.txt, leaving the program" << endl;
		return 9;
	}

	payInputFile.open("EmployeePay.txt");
	if (payInputFile.fail()){
		cout << "Error opening EmployeePay.txt, leaving the program" << endl;
		empInputFile.close();
		return 9;
	}

	//3) Process the file

	while(!empInputFile.eof()){
		getline(empInputFile, employeeName);
		payInputFile >> employeePay;
		cout << employeeName << " makes " << employeePay << " per year" << endl;
	}

	//4) close the file
	empInputFile.close();
	payInputFile.close();

	cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
	return 0;
}
