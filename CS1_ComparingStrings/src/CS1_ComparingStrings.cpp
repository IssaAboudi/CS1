//============================================================================
// Name        : CS1_ComparingStrings.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string string1 = " ";
	string string2 = " ";

	startIt:
		cout << "Hey you, please enter your first string (-999 to quit): ";
		getline(cin, string1);
		if(string1 == "-999"){
			goto endIt;
		} else {
		}
		cout << "Ok, now enter your second string: ";
		getline(cin, string2);
		if(string1 < string2){
			cout << "Your second string is greater than your first string" << endl;
		}
		else if(string1 > string2){
			cout << "Your first string is greater than your second string" << endl;
		}
		else {
			cout << "your two strings are equal" << endl;
		}
		goto startIt;

	endIt:

		cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
		return 0;
}
