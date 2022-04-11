//============================================================================
// Name        : Chapter10_PasswordVerifier.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;
const unsigned int LENGTH = 100;



int main() {

	/*Imagine you are developing a software package that requires users to enter their own passwords.  Your software requires that users' passwords meet the following criteria:

	The password should be at least six characters long <check>
	The password should contain at least one uppercase and at lease one lowercase letter
	The password should have at least one digit <check>
	The password should have at least one of the following characters:  $, %, !, #, @
	Put this validation into a function.  Pass to the function the C-String variable and the maximum size of the C-String.  The function should check for '\0' for the end of the c-string not the length of the c-string.

	Write a program that asks the user for a password then verify it using the function.  If  it doesn't, display an error message and have them enter it again until it is correct

	Turn this in as a single .cpp file, no .hpp, .h or eclipse project files*/

	//Initialize Variables
	bool acceptablePassword = false;
	bool hasDigit = false;
	bool hasUpper = false;
	bool hasLower = false;

	char userInput[LENGTH];

	//Prompt and user input
	do {
		cout << "Please enter a password (Must be at least 6 characters long, include at least 1 uppercase and 1 lowercase letter, have 1 digit and at least 1 of the following characters - $ % ! # @):" << endl;
		cin.getline(userInput, LENGTH);

		if(strlen(userInput) >= 6){
			cout << "Length is greater than or equal to 6" << endl;
			for(unsigned int i = 0; i < strlen(userInput); i++){
				cout << isdigit(userInput[i]) << endl; //For some reason isdigit(userInput[i] is setting to true but I have no clue
				if(isdigit(userInput[i]) == 1){
					hasDigit = true;
				}
//				if(hasUpper == false){
//					if(isupper(userInput[i]) == true) {
//						hasUpper = true;
//					}
//				}
//				if(hasLower == false){
//					if(islower(userInput[i]) == true){
//						hasLower = true;
//					}
//				}
//				if(hasDigit == true && hasUpper == true && hasLower == true){
//					acceptablePassword = true;
//				}
			}
		} else {
			cout << "ERROR: Length is less than 6 characters" << endl;
		}

	} while(acceptablePassword == false);

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
