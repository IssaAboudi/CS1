/*
 * UsefulFunctions.hpp
 *
 *  Created on: Oct 6, 2020
 *      Author: ma422
 */

#ifndef USEFULFUNCTIONS_HPP_
#define USEFULFUNCTIONS_HPP_

#include <iostream>
#include <climits>
using namespace std;


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
}

string inputString(int minLength, int maxLength, string promptValue){
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
}

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



#endif /* USEFULFUNCTIONS_HPP_ */
