//============================================================================
// Name        : CS1_FunctionOverload.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int addEmUp(int int1, int int2, int int3) {
	cout << "You're in three integers addEmUp()" << endl;
	return int1+int2+int3;
}

int addEmUp(int int1, int int2){
	cout << "You're in two integers addEmUp()" << endl;
	return int1+int2;
}

float addEmUp(int int1, double float1){
	cout << "You're in one integer one float addEmUp()" << endl;
	return int1 + float1;
}

int subtractEm(int x, int y){
	return 0;
}

double subtractEm(double x, double y){ //shows that return type has nothing to do with overload of function name
	return 0;
}

int main() {

	cout << "addEmUp: " << addEmUp(10,20,30) << endl;
	cout << "addEmUp: " << addEmUp(10,20) << endl;
	cout << "addEmUp: " << addEmUp(10, 5.24) << endl;


	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
