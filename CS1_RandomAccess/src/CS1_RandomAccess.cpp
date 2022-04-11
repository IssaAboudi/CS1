//============================================================================
// Name        : CS1_RandomAccess.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <fstream>
#include <climits>
using namespace std;

struct chicken{
	char name[32];
	float weight = 0.0;
	char gender;
	int age = 0;
};

int main() {
	chicken x;
	int chickenNumber;
	fstream chickenCoop("chickens.bin", ios::binary | ios::in |ios::out); //shortcut to creating variable and opening it
	//fsteram chickenCoop;
	//chickenCoop.open("chickens.bin", ios::binary | ios::in);
	cout << "Size of chicken is: " << sizeof(x) << endl;
	if(chickenCoop.fail()) {
		cout << "Creating new Chicken File" << endl;
		chickenCoop.open("chickens.bin", ios::binary | ios::out);
		if(chickenCoop.fail()){
			cout << "Error: Opening of the file failed. Program aborting" << endl;
			exit(999);
		}//if
		else {
			chickenCoop.close();
			chickenCoop.open("chickens.bin", ios::binary | ios::in |ios::out);
			if (chickenCoop.fail()){
				cout << "Error: Opening of the file failed on second attempt. Program aborting" << endl;
				exit(999);
			}//if
			else{}
		}
	} else {}

	//Writes new entries

//	strcpy(x.name, "Mary");
//	x.gender = 'H';
//	x.age = 30;
//	x.weight = 2.0;
//
//	chickenCoop.write(reinterpret_cast<char*>(&x), sizeof(x));
//
//	strcpy(x.name, "Russ");
//	x.gender = 'R';
//	x.age = 45;
//	x.weight = 4.0;
//
//	chickenCoop.write(reinterpret_cast<char*>(&x), sizeof(x));
//
//	strcpy(x.name, "Little");
//	x.gender = 'H';
//	x.age = 60;
//	x.weight = 2.5;
//
//	chickenCoop.write(reinterpret_cast<char*>(&x), sizeof(x));
//
//	strcpy(x.name, "Poindexter");
//	x.gender = 'R';
//	x.age = 45;
//	x.weight = 4.8;
//
//	chickenCoop.write(reinterpret_cast<char*>(&x), sizeof(x));
//
//	strcpy(x.name, "Patty");
//	x.gender = 'H';
//	x.age = 60;
//	x.weight = 6.0;
//
//	chickenCoop.write(reinterpret_cast<char*>(&x), sizeof(x));

	chickenCoop.seekg(0L, ios::end); //Move our pointer to end of the file
	long int sizeOfFile = chickenCoop.tellg(); //how many bytes am I from the beginning of the file
	cout << "Total Chickens is: " << sizeOfFile/sizeof(chicken) << endl;
	cout << "Total size of the file is: " << sizeOfFile << endl;

	//Prints a list of chickens numbered 1 - however many chickens there are
	chickenCoop.seekg(0L, ios::beg);
	for(unsigned int i = 0; i < sizeOfFile/sizeof(chicken); i++){
		chickenCoop.read(reinterpret_cast<char*>(&x), sizeof(x));
		cout << i+1 << " " << x.name << endl;
	}


	while(true){
		cout << "Please enter a chicken number to read between 1 and " << (sizeOfFile/sizeof(chicken)) << " (-99 to quit):" << endl;
		cin >> chickenNumber;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		if( chickenNumber == -99){
			break;
		} else if(chickenNumber < 1 || chickenNumber > sizeOfFile/sizeof(chicken)){
			cout << "Invalid chicken specified, please try again" << endl;
		} else {
			//position the read pointer to a specific chicken
			//read that chicken
			//print the chicken
			chickenCoop.seekg(sizeof(chicken)*(chickenNumber-1), ios::beg); //move size of chickne * n-1 bytes from the beginning of the file
			chickenCoop.read(reinterpret_cast<char*>(&x), sizeof(x));
			if(chickenCoop.eof()){
				cout << "You picked an incorrect chicken, try again" << endl;
				chickenCoop.clear();
			} else {
				cout << x.name << " was read" << endl;
				cout << "Please enter a new name for " << x.name << " :";
				cin.getline(x.name, 12); //allow to change chicken name
				chickenCoop.seekp(sizeof(chicken)*(chickenNumber-1), ios::beg);
				chickenCoop.write(reinterpret_cast<char*>(&x), sizeof(x));
			}
		}
	}
	//appending the file
//	chickenCoop.seekp(0L, ios::end); //Move 0 bytes from the end of the file //Move write pointer to end of the file
//	strcpy(x.name, "Rosalind");
//	x.gender = 'H';
//	x.age = 90;
//	x.weight = 5.0;
//	chickenCoop.write(reinterpret_cast<char*>(&x), sizeof(x)); //add a chicken to the end of the file
//
//
//	chickenCoop.seekg(sizeof(chicken)*(5), ios::beg); //move our pointer
//	chickenCoop.read(reinterpret_cast<char*>(&x), sizeof(x)); //read our chicken at the pointer
//	cout << x.name << " was read" << endl; //print the chicken




	chickenCoop.close();

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
