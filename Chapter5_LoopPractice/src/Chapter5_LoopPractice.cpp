//============================================================================
// Name        : Chapter5_LoopPractice.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string userInput;

	//#1
	cout << "#1: " << endl;
	while(userInput != "End"){
		cout << "Please enter some text (type 'End' to end): " << endl;
		getline(cin, userInput);

	}

	//#2
	cout << "#2: " << endl;
	do {
		cout << "Please enter some text (type 'Hey Studpid' to end): " << endl;
		getline(cin, userInput);
	} while (userInput != "Hey Studpid");


	//#3
	cout << "#3: " << endl;
	int count = 0;
	const int oneHundred = 100;
	while(count <= oneHundred) {
		cout << count << endl;
		count++;
	}

	//#4
	cout << "#4: " << endl;
	count = 0;
	for(; count <= 100; count++){
		cout << count << endl;
	}

	//#5
	cout << "#5: " << endl;
	count = 200;
	for(; count >= 0 ;) {
		cout << count << endl;
		count -= 2;
	}

	//#6
	cout << "#6: " << endl;
	count = 200;
	while(count >= 0) {
		cout << count << endl;
		count -=2;
	}

	//#7
	cout << "#7: " << endl;
	count = 0;
	int numberSevenInput = 0;
	do {
		numberSevenInput = 0;
		cout << "Please enter a number between 0 to 900 (-999 to exit): ";
		cin >> numberSevenInput;
		if(numberSevenInput == -999){
			break;
		}
		if(numberSevenInput >= 0 && numberSevenInput <= 900){
			for(; count < numberSevenInput; count++){
				cout << (count * 6) << endl;
			}
		} else if(numberSevenInput < 0 || numberSevenInput > 900){
			cout << "Error the number should be between 0 and 900!" << endl;
		} else {
			break;
		}
	} while(true);


	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
