//============================================================================
// Name        : CS1_EnumDataTypes.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum day{
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
};

string PrintDay(day x){
	switch(x){
	case MONDAY:
		return "Monday";
		break;
	case TUESDAY:
		return "Tuesday";
		break;
	case WEDNESDAY:
		return "Wednesday";
		break;
	case THURSDAY:
		return "Thursday";
		break;
	case FRIDAY:
		return "Friday";
		break;
	default:
		return "Unknown Day";
		break;
	}
}

enum atmosType {
	NONE,
	NITOXY,
	CO2,
	HE
};

struct Planet {
	atmosType atmosphere;
	double mass;
	char name[32];
}

enum color {
	RED,
	GREEN,
	BLUE,
	CYAN,
	BLACK,
	YELLOW,
	PURPLE
};

string getColor(color x){
	switch(x){
	case RED:
		return "Red";
		break;
	case GREEN:
		return "Green";
		break;
	case BLUE:
		return "Blue";
		break;
	case CYAN:
		return "Cyan";
		break;
	case BLACK:
		return "Black";
		break;
	case YELLOW:
		return "Yellow";
		break;
	case PURPLE:
		return "Purple";
		break;
	default:
		return "Unknown Day";
		break;
	}
}

int main() {

	day theDay = TUESDAY;

	for(int i = MONDAY; i <= FRIDAY; i++){
		cout << i << endl;
	}

	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
