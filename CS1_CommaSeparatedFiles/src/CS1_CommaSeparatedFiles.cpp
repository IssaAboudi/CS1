//============================================================================
// Name        : CS1_CommaSeparatedFiles.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;


void readToCommas(string fileName){
	string valueString;
	char charRead = ' ';
	ifstream inputFile;
	inputFile.open(fileName);

	while(!inputFile.eof()){
		valueString = "";
		while(charRead != ',' && !inputFile.eof()){
			charRead = inputFile.get();
			if(charRead != ',' && static_cast<int>(charRead) != -1 && charRead != ' ') {
				valueString += charRead;
			}//if
			else {}
		}//while
		cout << valueString << endl;
		charRead = ' ';
	}//while

}


int main() {

	readToCommas("commaFile.txt");
//	string valueString;
//	char charRead = ' ';
//	ifstream inputFile;
//	inputFile.open("commaFile.txt");
//
//	while(!inputFile.eof()){
//		valueString = "";
//		while(charRead != ',' && !inputFile.eof()){
//			charRead = inputFile.get();
//			//cout << static_cast<int>(charRead) << endl;
//			if(charRead != ',' && static_cast<int>(charRead) != -1 && charRead != ' ') {
//				valueString += charRead;
//			}//if
//			else {}
//		}//while
//		cout << valueString << endl;
//		//cout << "Please press enter to continue" << endl;
//		//charRead = cin.get();
//		charRead = ' ';
//	}//while
//


	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
