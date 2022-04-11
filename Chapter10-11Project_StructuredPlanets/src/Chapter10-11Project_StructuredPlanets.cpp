//============================================================================
// Name        : Chapter10-11Project_StructuredPlanets.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "functions.hpp" //includes iostream and uses namespace std.

int main() {

	string fileName = " "; //userInput for file name entry
	vector<Planet> planet; //creates planet vector
	int whatIsIt = 0; //initializes a integer variable stores whether the entry
					  //is a planet or a moon
	string nameOfPlanet = " "; //initializes a string variable which stores planet name
								//to be converted into a c-string later
	//create ifstream file
	ifstream planetFile;

	//Header of the program
	cout << "Solar System Planetary Summary/Motion Report" << endl;
	cout << "============================================" << endl;
	cout << endl;

	//user inputs file name
	cout << "Please enter the name of the file which contains the planetary data: ";
	getline(cin, fileName);

	//Test Open File
	planetFile.open(fileName); //opens ifstream file
/*	planetFile.ignore(10000, '\n'); // Ignores the first line of the text file
	planetFile.ignore(10000, '\n'); // I included this just in case we wanted -
	planetFile.ignore(10000, '\n'); // -to make this program more sophisticated
  	planetFile.ignore(10000, '\n'); // >:)
*/	if(planetFile.fail()){ //error if failed
		cout << "Error, file could not be opened: " << fileName << endl;
	} else {
		while(!planetFile.eof()){
			planetFile >> whatIsIt; //store if a planet or a moon
			int type; //int variable used to recieve data to store in readPlanet.type and readMoon.type
			if(whatIsIt == 1){
				Planet readPlanet; //create planet variable
				string planetName = " "; //string variable to receive data to copy to cstring

				//Stores information about planet in the Planet struct
				planetFile >> planetName; //receives name in a string
				strcpy(readPlanet.name, planetName.c_str()); //copies string to c string
				planetFile >> type; //stores type into a int
				readPlanet.type = static_cast<planetType>(type); //static casts int to planetType enum
				planetFile >> readPlanet.distance; //stores distance
				planetFile >> readPlanet.mass; //stores mass

				//adds planet information to end of planet vector
				planet.push_back(readPlanet); //appends to back of vector
			} else if(whatIsIt == 2){
				Moon readMoon; //creates moon variable
				string moonName = " "; //string variable to receive data to copy to cstring

				//Stores information about the moon into the Moon struct.
				planetFile >> moonName; //receives name in a string
				strcpy(readMoon.name, moonName.c_str()); //copies string to c string
				planetFile >> type; //stores type into int
				readMoon.type = static_cast<planetType>(type); //static casts int to planetType enum
				planetFile >> readMoon.distance; //stores distance
				planetFile >> readMoon.mass; //stores mass

				//adds the moon information to the end of vector stored in Planet struct
				planet[planet.size()-1].moons.push_back(readMoon);
			} else{
				//Error if not a planet or moon
				cout << "Error: Not a planet or a moon" << endl;
				planetFile.close();
				break;
			}//else
		}//while

		//"Calculating" For Loop
		for(unsigned int i = 0; i < planet.size(); i++){
			planet[i].orbitalVelocity = calculateVelocity(planet[i].distance);
			planet[i].orbitalPeriod = calculatePeriod(planet[i].distance);
		}//for

		//"Printing" For Loop
		cout << endl;
		cout << "Total Planets read is: " << planet.size() << endl;
		cout << endl;
		cout << right;
		cout << setw(15) << "Planet " << setw(10) << "Type" << setw(15) << "Mass (kg) " << setw(15) << "Distance (m)" << setw(25) << "Avg. Orbital Speed (m/s)" << setw(20) << "Orbital Period (y) " << endl;
		cout << setw(15) << "=======" << setw(10) << "====" << setw(15) << "========= " << setw(15) << "============" << setw(25) << "========================" << setw(20) << "================== " << endl;
		for(unsigned int i = 0; i < planet.size(); i++){
			cout << right << setprecision(4) << scientific; //sets all numbers except the orbital period to be in scientific form every time it iterates through a loop
			cout << setw(15) << planet[i].name << setw(10) << typeToString(planet[i].type) << setw(15)  << planet[i].mass << setw(15) << planet[i].distance << setw(25) << planet[i].orbitalVelocity << setw(20) << setprecision(2) << fixed << planet[i].orbitalPeriod << endl;

			//handles printing and formatting of moon subsection of report
			cout << setw(20) <<"Moons: " << endl;
			if(planet[i].moons.size() == 0){
				cout << "\t\t  No moons orbit this planet" << endl;
			} else if(planet[i].moons.size() > 0) {
				for(unsigned int j = 0; j < planet[i].moons.size(); j++){
					cout << setw(27) << planet[i].moons[j].name << setw(14) << typeToString(planet[i].moons[j].type) << endl;
				}
			} else{}
			cout <<"     ----------------" << endl;
		}
	}//else

	//close ifstream file
	planetFile.close();

	cout << endl;
	cout << endl;
	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
