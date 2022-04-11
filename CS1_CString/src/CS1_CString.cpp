//============================================================================
// Name        : CS1_CString.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

const int STRINGLENGTH = 32;

void clearCIN(){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int getSize(char cString[]) {
	int i  = 0;
	while(cString[i] != '\0') {
		i++;
	}
	return i;
}

void copyCString(char dest[], char source[]){
	int i  = 0;
	while(source[i] != '\0') {
		dest[i] = source[i];
	}
	dest[i] = '\0';
}

void makeUpperCase(char source[]) {
	int i  = 0;
	while(source[i] != '\0') {
		source[i] = toupper(source[i]);
		i++;
	}
}
void makeLowerCase(char source[]) {
	int i  = 0;
	while(source[i] != '\0') {
		source[i] = tolower(source[i]);
		i++;
	}
}

int main() {

	char presidentialCandidate[STRINGLENGTH] = "Keoni Federico";
	char string2[STRINGLENGTH];
	char searchString[STRINGLENGTH] = "eon";
	char searchString2[STRINGLENGTH] = "Bill";
	cout << "Length:" << strlen(presidentialCandidate) << endl; //Prints length of string with function

	string worstCandidate = "Bill Komanetsky";
	cout << "Length of Worst Candidate: " << worstCandidate.size() << endl; //prints length of string with Method
	//CStrings use functions not methods

	//copy one cString to another. for 2 strings; string1 = string2;
	//for cstring:strcpy(string2, string1)
	strcpy(string2, presidentialCandidate);
	cout << "Our copied string is: " << string2 << endl;

	//concat one string to another. for 2 strings; string2 += string1
	//for cstring: strcat(string2, presidentialCandidate)
	strcat(string2, presidentialCandidate);
	cout << "our concatenated string is: " << string2 << endl;


	if(strstr(string2, searchString2) == NULL){
		cout << "Cannot find!" << endl;
	} else {
		cout << "Found!" << endl;
	}

	//To find a string inside another string
	//cout << strstr(string2, searchString) << endl;
	//cout << strstr(string2, searchString2) << endl;

	//Regular String
	string x = "Christian Chan";
	string y = "Christian Chen";
	if(x > y) {
		cout << "X is greater than Y" << endl;
	} else {
		cout << "Y is greater than X" << endl;
	}

	//C-String
	char compareStr1[STRINGLENGTH] = "Christian chan";
	char compareStr2[STRINGLENGTH] = "Christian chen";

	//strcmp(compareStr1, compareStr2);
	//				   > 0 				- Left must be greater then
	//				   < 0				- Right must be greater then
	//				   = 0				- Both must be equal

	if(strcmp(compareStr1, compareStr2) > 0){
		cout << "Str1 is greater than Str2" << endl;
	} else if(strcmp(compareStr1, compareStr2) < 0){
		cout << "Str1 is less than Str2" << endl;
	} else {
		cout << "Str1 is equal to Str2" << endl;
	}

	//atoi function - pulls numbers out and
	char integerCstring[10];
	cout << "Please input an integer: ";
	cin.getline(integerCstring, 10);
	cout << "If I add 5 to your number, I get this: " << (atoi(integerCstring) + 5) << endl;


	int cStringSize = getSize(presidentialCandidate);
	cout << "The size of presidentialCandidate is: " << cStringSize << endl;

	char copyString1[10] = "Hello";
	char copyString2[10];

	copyCString(copyString2, copyString1);
	cout << "The string copied is: " << copyString2 << endl;

	makeUpperCase(copyString2);
	cout << "The string- upper cased is: " << copyString2 << endl;


	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
