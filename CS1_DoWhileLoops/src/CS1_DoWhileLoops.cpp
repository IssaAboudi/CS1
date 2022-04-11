//============================================================================
// Name        : CS1_DoWhileLoops.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {
//	int userInput = -1;
//	while(userInput < 0 || userInput > 100){
//		cout << "Please enter a value between 0 and 100 inclusive: ";
//		cin >> userInput;
//	}
//
//	userInput = 0;
//	do { //Do while for User Input
//		cout << "Please enter a value between 0 and 100 inclusive: ";
//		cin >> userInput;
//	}while(userInput < 0 || userInput > 100);

	/**/
//	char userInput = ' ';
//	do {
//		cout << "Main Menu" << endl;
//		cout << "=========" << endl;
//		cout << "<O>pen file" << endl;
//		cout << "<P>rint file" << endl;
//		cout << "<S>ave file" << endl;
//		cout << "E<x>it Program" << endl;
//		cin >> userInput;
//		cin.clear();
//		cin.ignore(INT_MAX, '\n');
//
//	} while(toupper(userInput) != 'x');
//





//In Class Assignment: Do-While Loop Practice
/*We did these in class.  Nice to practice again.

1) Write a while loop which uses a counter and loops 10 times printing the counter value * 200 each time.
Do not use While(true) or an if statement to leave the loop.

2) Write a do while loop which does the exact same thing as #1

3) Write a while loop which asks the user to type a number between 1 and 50000. Put the condition inside of the
while loop's parenthesis and not in an if statement within the loop.
Don't forget to display an error message if the value entered is invalid.
If the user types -999 in the answer, then leave the loop as well.

4) Write a do while loop which does the exact same thing as #3
*/

	//1)
	cout << "#1: " << endl;
	int counter = 0;
	int total = 0;
	while(counter < 10){
		total = counter * 200;
		cout << total << endl;
		counter++;
	}
	cout << endl;
	//2)
	cout << "#2: " << endl;
	counter = 0;
	total = 0;
	do {
		total = counter * 200;
		cout << total << endl;
		counter++;
	} while (counter < 10);

	//3)
	cout << "#3" << endl;
	int userInput = -1;
	while(userInput < 0 or userInput > 50000){
		cout << "Please enter a integer between the 1 and 50,000 inclusive (Enter -999 to exit the program): ";
		cin >> userInput;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		if(userInput == -999){
			break;
		}
		else if(userInput <= 0 or userInput >= 50000){
			cout << "Error: Invalid Value, please try again" << endl;break;
		}
}

	//4)
	cout << "#4" << endl;
	do{
		cout << "Please enter a integer between the 1 and 50,000 inclusive (Enter -999 to exit the program): ";
		cin >> userInput;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		if(userInput == -999){
			break;
		}
		else if(userInput <= 0 or userInput >= 50000){
			cout << "Error: Invalid Value, please try again" << endl;
		}
	} while(userInput >= 1 or userInput <= 50000);



	cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
	return 0;
}
