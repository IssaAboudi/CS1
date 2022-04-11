	//============================================================================
// Name        : CS1_StringArrays.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {


	const int ARRAY_SIZE = 10;
	string names[ARRAY_SIZE]; //Index range 0 - 9
	string userInput;
	int lastIndex = -1;

	for(int i=0; i < ARRAY_SIZE; i++){
		cout << "Please enter a name: (-999 to quit)";
		getline(cin, userInput);
		if(userInput == "-999"){ //user wants to leave so leave;
			break;
		}
		else {
			names[i] = userInput;
			lastIndex++; //we added an item, lets increment
		}
//		getline(cin, names[i]); //Includes -999 in the array
//		if(names[i] == "-999"){
//			break;
//		}

	}

	cout << "Here is the array: " << endl;
	for(int i=0; i <=lastIndex; i++){
		cout << i << ": " << names[i] << endl;
	}

	lastIndex = -1;

	cout << "Here is the array after setting lastIndex to -1: " << endl;
		for(int i=0; i <=lastIndex; i++){
			cout << i << ": " << names[i] << endl;
		}


	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
