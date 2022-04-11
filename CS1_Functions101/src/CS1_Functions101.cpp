//============================================================================
// Name        : CS1_Functions101.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "myFunctions.hpp"

//YOU NEVER #include A CPP FILE
using namespace std;


int main() {

	/*
	 * Exercise 1:
	 * Create a function called imHappy
	 * this function should contain a for loop that prints "I'm happy" 10 times
	 * in your main, call imHappy
	 *
	 *Modify im happy and pass an int as argument
	 *for loop prints im happy int many times
	 *
	 *Exercise 2:
	 *Create a function called printString
	 *This function will recieve two arguments; 1 string 1 int
	 *Inside thi sfunction print the string int # of times
	 *Now in your main call printString
	 *
	 *
	 *
	 *Exercise 3:
	 *Create a function named inputInt
	 *It will recieve these arguments:
	 * -minValue -Minimum value
	 * -maxValue - maximum value
	 * -promptValue - String that will be displayed prompting the user
	 *
	 *it will return integer entered by teh user
	 *how will it work
	 *how create a while loop
	 *how use promptvalue argument, display it to user
	 *how allow user to input an integer
	 *if input integer is less than min value display error and try again
	 *if integer is greater than max value display an error
	 *if if everything is okay break out of the while loop
	 *
	 *
	 * */

	printHello();
//	imHappy(2);
//	printString(3, "Hello");
//	int returnValue =  inputInt(0, 100, "Please enter a test grade: ");
//	inputString(0, 5, "Please enter a string: ");


	//cout << "Returned is: " << returnValue << endl;
//
//	printHello();
//	//Call to the function:
//	int x = getFive();
//	string theString = getPamela();
//	float aFloat = getAFloat();
//
//	int theLength = lengthOfString("Hello there");
//
//	cout << "This is what I got from getFive(): " << x << endl;
//	cout << "This is what I got from getPamela(): " << theString << endl;
//	cout << "This is what I got from getAFloat(): " << aFloat << endl;
//
//	cout << "The length of 'hello there' is: " << theLength << endl;
//
//	cout << "Please enter a value for x: " << endl;
//	cin >> x;
//	clearCIN();
//
//	int theSum = addTwo(10, 20);
//	cout << "The Sum is: " << theSum << endl;

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
