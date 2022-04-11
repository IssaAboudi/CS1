/*
 * myFunctions.hpp
 *
 *  Created on: Oct 6, 2020
 *      Author: ma422
 */

#ifndef MYFUNCTIONS_HPP_
#define MYFUNCTIONS_HPP_

#include <iostream>
#include <climits>
using namespace std;


void clearCIN(void){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}


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




#endif /* MYFUNCTIONS_HPP_ */
