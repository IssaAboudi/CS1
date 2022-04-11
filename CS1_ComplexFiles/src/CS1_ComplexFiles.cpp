//============================================================================
// Name        : CS1_ComplexFiles.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main() {

	string studentName;
	float studentGPA;

	//1) Define a file variable
	ofstream outputFile;

	//2) Open the file
	outputFile.open("StudentFile.txt");

	//3) process the file
	while(true) {
		cout << "Please enter the student's name (-999 to quit): ";
		getline(cin, studentName);
		if(studentName == "-999") {
			break;
		}
		else {
			cout << "Please enter student's GPA (0 - 4.0): ";
			cin >> studentGPA;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			outputFile << studentName << " " << studentGPA << endl;
		}
	}


	//4) close the file
	outputFile.close();


	cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
	return 0;
}
