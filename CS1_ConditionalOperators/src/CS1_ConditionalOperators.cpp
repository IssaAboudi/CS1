//============================================================================
// Name        : CS1_ConditionalOperators.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int var1 = 20;
	int var2 = 30;

	if(var1 < var2){
		cout << "Var 2 is greater than Var 1" << endl;
	}
	else {
		cout << "Var 1 is either greater than or equal to Var 2" << endl;
	}

	//Conditional Operator or Ternary Operator
	var1 < var2 ? cout << "Var 2 is greater than Var 1" << endl :
				  cout << "Var1 is either greater than or equal to Var 2" << endl;


	cout << "Program Ending, Have a nice day!" << endl; // prints Program Ending, Have a nice day!
	return 0;
}
