/*
 * functions.hpp
 *
 *  Created on: Nov 28, 2020
 *      Author: ma422
 */

#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
#include <iomanip>
#include <fstream>
using namespace std;

//Declares struct cookie
struct cookie{
	char CookieName[32];
	int CookieCalories = 0.0;
	float CookieCost = 0.0;
	float CookiePrice = 0.0;
	int TotalCookiesInStock = 0;
};

void clearCIN(void);
//Description:  Clear cin
//Inputs: 		void
//Returns: 		void
//Author:		Issa A.
//Example use:	clearCIN();
//History:
	// 2020/12/2: (Issa A.) Initial Version

void printMenu(vector<cookie>&cookies);
//Description:  Prints a menu to select what function the program should run next
//Inputs: 		vector of type cookie
//Returns: 		void
//Author:		Issa A.
//Example use:	printMenu(cookies);
//History:
	// 2020/12/2: (Issa A.) Initial Version

void inputCookie(vector<cookie>&cookies);
//Description:  User inputs cookie attributes into an vector
//Inputs: 		vector of type cookies
//Returns: 		void
//Author:		Issa A.
//Example use:	inputCookie(cookies);
//History:
	// 2020/12/2: (Issa A.) Initial Version

void printCookies(vector<cookie>&cookies);
//Description:  prints out the content of vector
//Inputs: 		vector of type cookies
//Returns: 		void
//Author:		Issa A.
//Example use:	printCookies(cookies);
//History:
	// 2020/12/2: (Issa A.) Initial Version

void readCookies(vector<cookie>&cookies);
//Description:  reads data stored in bin file
//Inputs: 		vector of type cookies
//Returns: 		void
//Author:		Issa A.
//Example use:	readCookies(cookies);
//History:
	// 2020/12/2: (Issa A.) Initial Version

void writeCookies(vector<cookie>&cookies);
//Description:  writes data in vector out to a file
//Inputs: 		vector of type cookies
//Returns: 		void
//Author:		Issa A.
//Example use:	writeCookies(cookies);
//History:
	// 2020/12/2: (Issa A.) Initial Version

void updateCookies(void);
//Description:  updates cookies price and cost by user specified percentage
//Inputs: 		void
//Returns: 		void
//Author:		Issa A.
//Example use:	updateCookies(void);
//History:
	// 2020/12/2: (Issa A.) Initial Version

void readRandomCookie(void);
//Description:  Gives user ability to update calories of a cookie in file
//Inputs: 		void
//Returns: 		void
//Author:		Issa A.
//Example use:	readRandomCookies(void);
//History:
	// 2020/12/2: (Issa A.) Initial Version

void printUpdatedCookies(void);
//Description:  prints out a report of the updated price and costs
//Inputs: 		void
//Returns: 		void
//Author:		Issa A.
//Example use:	printUpdatedCookies(void);
//History:
	// 2020/12/2: (Issa A.) Initial Version

#endif /* FUNCTIONS_HPP_ */
