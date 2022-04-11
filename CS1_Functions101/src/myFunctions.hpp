/*
 * myFunctions.hpp
 *
 *  Created on: Oct 8, 2020
 *      Author: ma422
 */

#ifndef MYFUNCTIONS_HPP_
#define MYFUNCTIONS_HPP_
#include <iostream>
#include <climits>
using namespace std;

//Prototypes

void printHello(void);
//Description:  Outputs "Hello" to cout
//Inputs: 		None
//Returns: 		None
//Author:		Issa A.
//Example use:	printHello();
//History:
	//2020/10/6: (Issa A.) Initial Version
	//2020/10/6: (Issa A.) Moved prototypes into hpp file and created new cpp file

int getFive(void); //Prototype for getFive
//Description:  returns a 5
//Inputs: 		None
//Returns: 		None
//Author:		Issa A.
//History:
	//2020/10/6: (Issa A.) Initial Version
	//2020/10/6: (Issa A.) Moved prototypes into hpp file and created new cpp file


string getPamela(void);
float getAFloat(void);
int lengthOfString(string x);
int addTwo(int x, int y);




#endif /* MYFUNCTIONS_HPP_ */
