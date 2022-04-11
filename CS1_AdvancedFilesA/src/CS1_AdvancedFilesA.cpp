//============================================================================
// Name        : CS1_AdvancedFilesA.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <climits>
using namespace std;

int main() {

	bool keepGoing = true;
	char courseName[32];
	int courseUnits;
	fstream inputOutputFile;


	//open filename, and defines what kind of file.
	inputOutputFile.open("class.txt", ios::in | ios::out); //name and what type of file
	if(inputOutputFile.fail()){
		//since it failed, lets try and create the file as output only
		cout << "Failed to open 'class.txt' file, maybe first time you have run this program" << endl;
		inputOutputFile.open("class.txt", ios::out);
		if(inputOutputFile.fail()){
			cout << "There is something really wrong here, couldn't open it for output" << endl;
			exit(99);
		} else {
			//it was created okay, so close it and reopen it as input and output
			inputOutputFile.close(); //close it because it was just output, not both.
			inputOutputFile.open("class.txt", ios::in | ios::out); //open it as both input and output again.
			if(inputOutputFile.fail()){
				cout << "There is somethign really wrong here, couldn't open it for input/output" << endl;
				exit(99);
			} else {}
		}
	} else {}

	while(keepGoing) {
		cout << "Please enter a course name: (-999 to quit)";
		cin.getline(courseName, 32);
		if(strcmp(courseName, "-999") == 0){
			break;
		}
		cout << "Please enter units for this course: ";
		cin >> courseUnits;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		inputOutputFile << setw(40) << courseName << setw(8) << courseUnits << endl;
	}//while

	//to move pointer, use seekg (seek get)
	inputOutputFile.seekg(0, ios::beg); //moves the read pointer to the top of the file
	// relative to what position in the file, move the pointer
	// Relative to the beginning, I want to move the pointer 0 bytes

	string tempName;
	int tempUnits;
	inputOutputFile >> tempName;
	inputOutputFile >> tempUnits;
	cout << "I read " << tempName << ", " << tempUnits << " from the file" << endl;

	inputOutputFile.close();



	/*fstream inputFile;
	inputFile.open("class2.txt", ios::in);
	//inputFile.open("class2.txt"); - if inputFile was ifstream
	fstream outputFile;
	inputFile.open("class3.txt", ios::out);
	//outputFile.open(class3.txt"); - if outputFile was ofstream*/




	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
