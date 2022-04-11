//============================================================================
// Name        : CS1_BinaryFile.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct cookie{			//56 bytes
	char name[32];		//32
	double cost;		//8
	double price;		//8
	int calories;		//8
};

int main() {

	//cout << sizeof(cookie) << endl;

	fstream outputFile;
	fstream inputFile;
	outputFile.open("cookiefile.bin", ios::out | ios::binary);

	cookie aCookie;
	strcpy(aCookie.name, "Chocolate Chip");
	aCookie.cost = .20;
	aCookie.price = 1.29;
	aCookie.calories = 380;

	//how to write out to a binary file
	outputFile.write(reinterpret_cast<char *>(&aCookie), sizeof(aCookie));
	//reinterpret_cast means cast data into another type of data - specifically for chars
	//sizeof(aCookie) means telling how much we are writing to binary file

	strcpy(aCookie.name, "Sugar");
	aCookie.cost = .12;
	aCookie.price = 1.9;
	aCookie.calories = 290;
	outputFile.write(reinterpret_cast<char *>(&aCookie), sizeof(aCookie));

	strcpy(aCookie.name, "Peanut Butter");
	aCookie.cost = .35;
	aCookie.price = 1.19;
	aCookie.calories = 340;
	outputFile.write(reinterpret_cast<char *>(&aCookie), sizeof(aCookie));

	outputFile.close();

	inputFile.open("cookiefile.bin", ios::in | ios::binary);
	while(!inputFile.eof()){
		inputFile.read(reinterpret_cast<char *>(&aCookie), sizeof(aCookie));
		if(inputFile.eof()){
			break;
		}else{
			cout << aCookie.name << '\t' << aCookie.price << endl;
		}//else
	}//while
	inputFile.close();
	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
