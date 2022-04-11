//============================================================================
// Name        : PassByValue.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int addInts(int, int, int);

bool didTheyAnswerYes(void){
	string userInput;
	cout << "Answer Yes or No" << endl;
	getline(cin, userInput);
	if(userInput == "Yes" || userInput == "yes"){
		return true;
	} else {
		return false;
	}
}

int main() {
/*
 * Pass by reference
 * */
	cout << "Would you marry me? " << endl;
	if(didTheyAnswerYes()){
		cout << "They said Yes!" << endl;
	} else {
		cout << "They didn't say yes - Loosers!" << endl;
	}


	int send1 = 1;
	int send2 = 2;
	int send3 = 3;

	cout << "The sum is: " << addInts(send1, send2, send3) << endl;
	cout << "Original values were: " << send1 << ", "<< send2 << ", " << send3 << endl;


	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}

int addInts(int int1, int int2, int int3){ //& makes int1 point to send1
	int returnValue = int1 + int2 + int3;

	int1 = 0; int2 = 0; int3 = 0;

	return returnValue;
}

void multiplyByTwo(int &int1, int &int2){
	int1 *= 2;
	int2 *= 2;
}
