/*
 * myFunctions.hpp
 *
 *  Created on: Oct 6, 2020
 *      Author: ma422
 */


#include <climits>
using namespace std;

#include "myFunctions.hpp"



void printHello(void){
	cout << "Hello there!" << endl;
	return;
}

int getFive(void){
	cout << "I'm sending you a five" << endl;
	return 5;
}

string getPamela(void){
	cout << "I'm sending you a string" << endl;
	return "Pamela";
}

float getAFloat(void){
	return 3.14159;
}

int lengthOfString(string x){
	return x.size();
}

int addTwo(int x, int y){
	return (x + y);
}

int imHappy(int x){
	for(int i = 1; i <= x; i++){
		cout << "I am happy" << endl;
	}
	return 0;
}

string printString(int x, string y){
	for(int i = 1; i <= x; i++){
		cout << y << endl;
	}
	return 0;
}

void clearCIN(void){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}


int inputInt(int minValue, int maxValue, string promptValue){
	int userInput = 0;

	while(true){
		cout << promptValue << endl;
		cin >> userInput;
		clearCIN();

		if(userInput < minValue){
		cout << "Error: your input is not between " << minValue << " and " << maxValue << endl;
		} else if(userInput > maxValue){
		cout << "Error: your input is not between " << minValue << " and " << maxValue << endl;
		}
		else {
			break;
		}
	}
	return 0;
}

float inputFloat(float minValue, float maxValue, string promptValue){
	float userInput = 0;

	while(true){
		cout << promptValue << endl;
		cin >> userInput;
		clearCIN();

		if(userInput < minValue){
		cout << "Error: your input is not between " << minValue << " and " << maxValue << endl;
		} else if(userInput > maxValue){
		cout << "Error: your input is not between " << minValue << " and " << maxValue << endl;
		}
		else {
			break;
		}
	}
	return 0;
}

double inputDouble(double minValue, double maxValue, string promptValue){
	double userInput = 0;

	while(true){
		cout << promptValue << endl;
		cin >> userInput;
		clearCIN();

		if(userInput < minValue){
		cout << "Error: your input is not between " << minValue << " and " << maxValue << endl;
		} else if(userInput > maxValue){
		cout << "Error: your input is not between " << minValue << " and " << maxValue << endl;
		}
		else {
			break;
		}
	}
	return 0;
}

string inputString(unsigned int minLength, unsigned int maxLength, string promptValue){
	string userInput = " ";

	while(true){
		cout << promptValue << endl;
		getline(cin, userInput);

		if(userInput.size() < minLength){
			cout << "Error: your input is not between " << minLength << " and " << maxLength << endl;
		} else if(userInput.size() > maxLength) {
			cout << "Error: your input is not between " << minLength << " and " << maxLength << endl;
		} else {
			break;
		}
	}
	return " ";
}



