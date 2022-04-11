//============================================================================
// Name        : CS1_Chars.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {

	char aChar = '1';
	string userInput;

	cout << isalpha(aChar) << endl;
	cout << isalnum(aChar) << endl;
	cout << isdigit(aChar) << endl;

	cout << "Please type alphabetic characters only: ";
	getline(cin, userInput);
	for(unsigned int i = 0; i < userInput.size(); i++){
		if(isalpha(userInput[i])|| isspace(userInput[i])){
			userInput[i] = toupper(userInput[i]);
			continue;
		} // if
		else {
			cout << "You entered something other than alphabetic characters" << endl;
			break;
		} // else
	}
//	cout << "Please type an integer value: ";
//		getline(cin, userInput);
//		for(unsigned int i = 0; i < userInput.size(); i++){
//			if(isdigit(userInput[i])){
//				continue;
//			} // if
//			else {
//				cout << "You entered something other than a number" << endl;
//				break;
//			} // else
//		}

	cout << "Please enter a comma separated string: ";
	getline(cin, userInput);
	stringstream s_stream(userInput);
	string substring;
	while(s_stream.good()){
		getline(s_stream, substring, ',');
		cout << substring << endl;
	}

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
