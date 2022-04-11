//============================================================================
// Name        : CS1_Sentinals.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int sentinal(){
	//What is a sentinal?
	// A sentinal is a value used  to "tell you" that something needs to happen

	float userInput = 0;
	float totalGrades = 0;
	float averageGrades = 0;
	int gradeCount = 0;
	do {
		cout << "Please enter your test score between 0 and 100 (-999 when finished, -888 to cancel, -777 to start over)" << endl;
		cin >> userInput;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		if(userInput == -777){
			gradeCount = 0;
			totalGrades = 0;
			cout << "starting over..." << endl;
			continue;
		}
		if(userInput == -888){
			gradeCount = 0;
			totalGrades = 0;
			cout << "cancelling..." << endl;
			break;
		}
		if(userInput == -999) {
			if(userInput < 0 or userInput > 100){
				cout << "Invalid Value, please try again" << endl;
			}
		}
		totalGrades += userInput;
		gradeCount++;
	}
	while (userInput != -999);
	if(userInput != -888){
	averageGrades = totalGrades / gradeCount;
	cout << "Your average is: " << averageGrades << endl;
	}
	return 0;

}


int main() {
	sentinal();
	cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
	return 0;
}
