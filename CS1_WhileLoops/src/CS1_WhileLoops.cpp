//============================================================================
// Name        : CS1_WhileLoops.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;



int doWhile(){
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

		return 0;
}

int whileLoop(){
// NOTES/PRESENTATION THINGS
//	int counter1 = 10;
//	//int userInput = 0; //forgot what this is used for
//
//	firstLoop:
//		cout << counter1 << endl;
//		counter1--;
//		if(counter1 > 0) {
//			goto firstLoop;
//		} else {
//			cout << "Blast OFF!!!!" << endl;
//		}//else
//
//	counter1 = 5;
//	while (counter1){ //int = 0: false... int != 0: true
//		cout << counter1 << endl;
//		counter1--;
//	}//while
//	cout << "BLAST OFF!!!!!!" << endl;
//
//	while (true){
//		if(counter1 > 0){
//			cout << counter1 << endl;
//			counter1--;
//		}
//		else {
//			cout << "BLAST OFF!!!!!!" << endl;
//			break;
//		}
//	}//while
//	int total = 0;
//	int userInput = 0;
//	while(userInput != -999){
//		total += userInput; //So -999 doesn't be added to total
//		cout << "Please enter an integer, -999 to quit: ";
//		cin >> userInput;
//		cout << "You typed: " << userInput << endl;
//	}
//	cout << "The total of all the numbers you entered is: " << total << endl;
//
//
//	int x = 99;
//	counter1 = 5;
//	while (x > 0) { //infinite loop because we are testing something that never changes inside of the loop
//		cout << "X is greater than zero " << x << endl;
//		//counter1--; //makes infinite loop
//		x--;
//	}
//
//	userInput = 0;
//	while(true) { //No idea why this doesn't work... -_-
//		cout << "Please enter a integer between 0-100 inclusive: " << endl;
//		cin >> userInput;
//		if(userInput < 0 || userInput > 100){
//			cout << "Invalid value, please try again" << endl;
//		}
//		else {
//			break;
//	}
//}
//
//		int userInput = -1;
//		while(userInput < 0 || userInput > 100){
//			cout << "Please enter a value between 0 and 100 inclusive: ";
//			cin >> userInput;
//		}
//
//		userInput = 0;
//		do { //Do while for User Input
//			cout << "Please enter a value between 0 and 100 inclusive: ";
//			cin >> userInput;
//		}while(userInput < 0 || userInput > 100);

		char userInput = ' ';
		do {
			cout << "Main Menu" << endl;
			cout << "=========" << endl;
			cout << "<O>pen file" << endl;
			cout << "<P>rint file" << endl;
			cout << "<S>ave file" << endl;
			cout << "E<x>it Program" << endl;
			cin >> userInput;
			cin.clear();
			cin.ignore(INT_MAX, '\n');

		} while(toupper(userInput) != 'x');

	return 0;

}

int forLoop(){
	//Always good to use unsigned ints with counters (will never be negative)
	const unsigned int STARTING_VALUE = 0;
	const unsigned int ENDING_VALUE = 999;
	unsigned int userInput = 0;

	unsigned int i = 0;
	for(i = STARTING_VALUE; i <= ENDING_VALUE; i++){
		cout << "The value of i is: " << i << endl;
		cout << "The value of i raised to the power of 2 is: " << (i*i) << endl;
	}

	cout << "Please enter the number of times you want the loop to execute: " << endl;
	cin >> userInput;
	for (unsigned int j = 0;  j < userInput; j++){
		cout << "I have incremented " << j+1 << endl;
	}

	char userGender;
	cout << "Please enter your gender (F = Female, M = Male, O = Other): " << endl;
	cin >> userGender;
	userGender = toupper(userGender);
	for(unsigned int j = 0; j < 5 && userGender == 'F'; j++){
		cout << "Congratulations!" << endl;
	}


	return 0;
}

int forLoopPractice(){
	/*
	1) Write a for loop which starts at 10 and iterates 50 times
	Print the counter to the screen along with an endl

	2) Write a for loop which starts at 10 and iterates to 50 in increments of 2
	Print the counter to the screen along with an endl

	3) Write a for loop which starts at zero and goes to 100.
	It should print 1/2 of the counter value each time the loop iterates
	Outside of the loop, print the final value of the counter used inside
	of the for loop

	4) Create a for loop which iterates three times
	Ask the user for the calories they ate each time the loop
	iterates
	Add this number to a running total
	Outside of the loop, tell the user how many more calories they
	can eat, assuming a 2,000/day calorie diet


	5) Create a for loop which counts from 0 to 100
	Have the user type in a number
	If the user types -999, break out of the for loop
	If it isn't -999, add that number to a running total
	Outside of the for loop, divide the running total by the loop
	counter and display it as the average of numbers input.
	hint: You need to define the loop counter inside or outside
	of the for loop to do this?

	6) Create a for loop which iterates though 5 amazon.com orders
	Create an inner for loop 3 items ordered
	- Ask the user type the cost of each item ordered
	- Total up each item ordered into a running total variable
	When the inner loop is finished, print the total of that order
	Add the total for each order into a different running total variable
	Outside of the first for loop, print off the total of all 5 orders

	Outside of the first for loop, print off the total of all 5 orders
*/

	unsigned int start = 10;
	unsigned int end = 60;

	//1)
	cout << "#1" << endl;
	for(unsigned int i = start; i <= end; i++){
		cout << "The value of i is: " << i << endl;
	}

	//2)
	start = 10;
	end = 60;
	cout << "#2" << endl;
		for(unsigned int i = start; i <= end; i += 2){
			cout << "The value of i is: " << i << endl;
		}
	//3)
	cout << "#3" << endl;
	unsigned int j = 0;
	for(j = 0; j < 100; j++){
		cout << "The value of 1/2 of j is: " << ((j+1)/2) << endl;
	}
	cout << "The full value of j is: " << j << endl;

	//4)
	cout << "#4" << endl;
	j = 0;
	unsigned int total = 0;
	int userInput = 0;
	for(j = 0; j < 3; j++){
		cout << "How many calories did you eat: " << endl;
		cin >> userInput;
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		total += userInput;
	}
	cout << "You need to eat " << 2000 - total << " more calories" << endl;


	//5)
	cout << "#5" << endl;
	j = 0;
	total = 0;
	userInput = 0;
	for(j = 0; j < 100; j++){
		cout << "Please enter an integer: " << endl;
		cin >> userInput;
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		if(userInput == -999){
			break;
		} else {
			total += userInput;
		}
	}
		cout << "Average of numbers input is " << (total/j) << endl;


	return 0;
}

int main() {

	//I broke down each section into different functions because I wanted it to be neater
	//and I didn't want to worry about dealing with long main codes - this is much simpler
	//to deal with since I can just turn off things I don't want to use by commenting the
	//function call out. Feel free to test each part by uncommenting.

	//doWhile();
	//whileLoop();
	//forLoop();
	forLoopPractice();

	cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
	return 0;
}
