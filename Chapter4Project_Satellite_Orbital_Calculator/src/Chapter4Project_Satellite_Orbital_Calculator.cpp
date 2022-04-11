//============================================================================
// Name        : Chapter4Project_Satellite_Orbital_Calculator.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Don't steal my program please :( I worked hard for my grade
// Description : Satellite Orbital Calculator with navigational user interface
//============================================================================

#include <iostream>
#include <climits>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

//Define calculateVelocity function
float calculateVelocity(float mass, float distance);

//Initialize Global Variable
float orbitSpeed = 0.0;

void clearCIN(void){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {
	/*
	 * Main Menu
	 * =========
	 * Enter <P>lanet Name
	 * Enter Planet <M>ass
	 * Enter Satellite <D>istance from the Planet
	 * <C>alculate Speed
	 * E<X>it the Program
	 * Please enter a selection:
	 * */

	//Initialize Variables
	float planetMass = 0.0;
	float satelliteDistance = 0.0;
	string planetName = " ";
	char userInput = ' ';

	mainMenu:
	// Print the Main Menu
	cout << "Main Menu" << endl;
	cout << "=========" << endl;
	cout << "Enter <P>lanet Name" << endl;
	cout << "Enter Planet <M>ass" << endl;
	cout << "Enter Satellite <D>istance from the Planet" << endl;
	cout << "<C>alculate Speed" << endl;
	cout << "E<X>it the Program" << endl;
	cout << "Please enter a selection: ";


	//Get User Input
	cin >> userInput;
	clearCIN();

	//change user input to uppercase
	userInput = (char)toupper(userInput);

	//check if user input is a digit or not
	if(isdigit(userInput)==true){
		cout << endl; //spacing to see error
		cout << "Error: You have entered an invalid entry. Please enter P, M, D, C, or X" << endl;
		cout << endl; //spacing to see error
		goto mainMenu;
	}

	//Menu Navigation + User Input Validation

	//Planet Name
	if(userInput == 'P'){
		cout << "Please enter the planet's name: ";
		getline(cin, planetName);

		//Return to Main Menu
		goto mainMenu;
	}
	//Planet Mass
	else if(userInput == 'M'){
		cout << "Please enter the planet's mass: (Must be greater than 0.0)"; //prompt user to enter planet mass
		cin >> planetMass;
		clearCIN();

		//Validate User Input to be greater than 0
		if(planetMass <= 0.0){
			cout << endl; //spacing to see error
			cout << "There was an input error: Error! Planet mass cannot be less than 0.0!" << endl;
			cout << endl; //spacing to see error
			planetMass = 0.0;
			goto mainMenu;
		}

		//Return to Main Menu
		else {
			goto mainMenu;
		}
	}

	//Satellite Distance from the Planet
	else if(userInput == 'D'){
		cout << "Please enter the satellite's distance from the planet: (Must be greater than 0.0)"; //prompt user to enter satellite distance from the planet
		cin >> satelliteDistance;
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		//Validate User Input to be greater than 0
		if(satelliteDistance <= 0.0){
			cout << endl; //spacing to see error
			cout << "There was an input error: Error! Satellite distance from planet cannot be less than 0.0!" << endl;
			cout << endl; //spacing to see error
			satelliteDistance = 0.0;
			goto mainMenu;
		}

		//Return to Main Menu
		else {
			goto mainMenu;
		}
	}

	//Print Report of the details of the speed, and the planet entered
	else if(userInput == 'C'){
		calculateVelocity(planetMass, satelliteDistance); //call calculateVelocity function to calculate orbitSpeed
		//Header of the Report
		cout << setprecision(4);
		cout << setw(20) << "Planet Name" << setw(15) << "Planet Mass" << setw(15) << "Orbit Distance"  << setw(20) << "Orbital speed m/s" << endl;
		cout << setw(20) << "===========" << setw(15) << "===========" << setw(15) << "=============="  << setw(20) << "=================" << endl;
		//Actual Report Values
		cout << setw(20) << planetName    << setw(15) << planetMass    << setw(15) << satelliteDistance << setw(20) << orbitSpeed          << endl;

		//Return to Main Menu
		goto mainMenu;
	}

	//Ends program with exit prompt
	else if(userInput == 'X'){
		cout << endl;
		cout << "Program Ending, Have a nice day!" << endl;
	}

	//Catch invalid entries (other characters than P, M, D, C or X)
	else{
		cout << endl; //spacing to see error
		cout << "You entered an invalid entry. Please enter P, M, D, C, or X" << endl;
		cout << endl; //spacing to see error
		goto mainMenu;
	}
	return 0;
}

float calculateVelocity (float mass, float distance){
	const float G_CONST = 6.673e-11;

	orbitSpeed = sqrt((G_CONST * mass)/distance);
	return orbitSpeed;
}
