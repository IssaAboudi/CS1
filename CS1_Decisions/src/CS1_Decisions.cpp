//============================================================================
// Name        : CS1_Decisions.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {


//	float percentGrade = 0.0;
//	const float A_SCORE = 90.0;
//	const float B_SCORE = 80.0;
//	const float C_SCORE = 70.0;
//	const float D_SCORE = 60.0;
//
//
//	bool lowIncomeStudent = false;
//	char userAnswer = 'N';
//	char userGender;
//
//	cout << "Welcome to my letter Grade Calculator!" << endl;
//
//	tryAgain:
//	cout << "Please enter your percentage grade: ";
//	cin >> percentGrade;
//	cin.clear();
//	cin.ignore(INT_MAX, '\n');
//
//	if(percentGrade < 0.0 || percentGrade > 100.0){
//		cout << "Invalid grade entered" << endl;
//		goto tryAgain;
//	}
//	if(percentGrade >= 0.0 && percentGrade <= 100.0){
//		cout << "invalid grade entered" << endl;
//		goto tryAgain;
//	}
//
//	cout << "Are you a low-income student? (Y/N)";
//	cin >> userAnswer;
//	if(not'N'){
//		lowIncomeStudent = true;
//	} else {
//		lowIncomeStudent = false;
//	}
//
//
//	cout << "Please enter your percent grade: ";
//	cin >> percentGrade;
//	cin.clear();
//	cin.ignore(INT_MAX, '\n');
//
//
//	if(percentGrade >= A_SCORE) {
//		cout << "Your grade is an A" << endl;
//	} else if(percentGrade >= B_SCORE) {
//		cout << "Your grade is an B" << endl;
//	} else if(percentGrade >= C_SCORE) {
//		cout << "Your grade is an C" << endl;
//	} else if(percentGrade >= D_SCORE) {
//		cout << "Your grade is an D" << endl;
//	} else {
//		cout << "Your grade is an F" << endl;
//	}
//
//	tryGender:
//	cout << "Please enter your gender (M, F, O): ";
//	cin >> userGender;
//	if (userGender == 'M' || userGender == 'F' || userGender == 'O'){
//		//valid gender entered
//	} else {
//		cout << "Invalid gender entered, please try again" << endl;
//		goto tryGender;
//	}

	/*
	 * Main Menu
	 * ---------
	 * <1>   Read File
	 * <2>   Write File
	 * <3>   Enter Data
	 * <4>   Print Data
	 * <999> Exit Program
	 * Please select from the menu above ==>
	 */
	//
//	cout << "Main Menu" << endl;
//	cout << "---------" << endl;
//	cout << "<R>ead File" << endl;
//	cout << "<W>rite File" << endl;
//	cout << "<E>nter Data" << endl;
//	cout << "<P>rint Data" << endl;
//	cout << "E<x>it the Program" << endl;
//	cout << "Please select from the menu above ==>";

	mainMenu:
	cout << "Main Menu" << endl;
	cout << "---------" << endl;
	cout << "<1>   Read File" << endl;
	cout << "<2>   Write File" << endl;
	cout << "<3>   Enter Data" << endl;
	cout << "<4>   Print Data" << endl;
	cout << "<999> Exit the Program" << endl;
	cout << "Please select from the menu above ==>";

	unsigned int menuInput = 0;


	if(menuInput == 1){
		//do something
	} else if(menuInput == 2){
		//do something
	} else if(menuInput == 3){
		//do something
	} else if(menuInput == 4){
		//do something
	} else if(menuInput == 999){
		//do something
	} else {
		cout << "Error, invalid menu item selected" << endl;
		goto mainMenu;
	}



	cout << "Program Ending, have a nice day!" << endl; // prints Program Ending, have a nice day!
	return 0;
}
