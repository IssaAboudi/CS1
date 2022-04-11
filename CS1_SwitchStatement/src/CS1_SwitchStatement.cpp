//============================================================================
// Name        : CS1_SwitchStatement.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

void clearCin(void){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {
//
//	int aNumber = 0;
//	theBegin:
//	cout << "Please enter a positive integer not greater than 5: " << endl;
//	cin >> aNumber;
//	clearCin();
////	if( aNumber < 0 || aNumber > 50 ) {
////		cout << "Invalid number, please try again" << endl;
////		goto theBegin;
////	}
//	switch(aNumber){
//		case 0:
//			cout << "You entered a zero" << endl;
//			break;
//		case 1: {
//			cout << "You entered a one" << endl;
//			break;
//		}
//		case 2: {
//			cout << "You entered a two" << endl;
//			break;
//		}
//		case 3: {
//			cout << "You entered a three" << endl;
//			break;
//		}
//		case 4: {
//			cout << "You entered a four" << endl;
//			break;
//		}
//		case 5: {
//			cout << "You entered a five" << endl;
//			break;
//		}
//		default: { //Does same thing as line 25-28
//			cout << "Invalid number, please try again" << endl;
//		}
//	}
//		char menuOption = 'N';
//		switch(menuOption){
////			case 'E':
////				cout << "You entered a zero" << endl;
////				break;
////			case 'F': {
////				cout << "You entered a one" << endl;
////				break;
////			}
////			case 'G': {
////				cout << "You entered a two" << endl;
////				break;
////			}
//			case 'E':
//			case 'F':
//			case 'G': {
//				cout << "Not yet implemented" << endl;
//			}
//			case 'N': {
//				cout << "You entered a three" << endl;
//				break;
//			}
//		}
//
//	goto theBegin;
//

//	switch (10 > 100){
//	case true:
//		cout << "ten is greater than 100" << endl;
//		break;
//	case false:
//		cout << "ten is not greater than 100" << endl;
//		break;
//	case default:
//		cout << "I don't know what is going on" << endl;
//	}

	int x = 10;
	int y = 30;
	cout << x << endl;
	{
		int y = 20;
		cout << x << ", " << y << endl;
	}
	cout << y << endl;

	/*
	 * 1) Create meaningful variable names
	 * 2) Do not create or use global variables
	 * 3)
	 * */

	cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
	return 0;
}
