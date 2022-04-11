//============================================================================
// Name        : Chapter5_Project_SimpleSalesBarChart.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;

void cinClear(){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

int main() {

	//Initializations


	float salesFiguresInput = 0.0; //userInput initialization
	int whileLoopCounter = 1; //While Loop Counter initialization (initialize 1 not 0 because no 0th month)
	float totalSales = 0.0; //initializes the aggregator which will add up all the sales


	//Initialize each month sales variable
	float monthOneSales = 0;
	float monthTwoSales = 0;
	float monthThreeSales = 0;
	float monthFourSales = 0;
	float monthFiveSales = 0;
	float monthSixSales = 0;

	//While Loop for Months 1-3
	while(whileLoopCounter < 4) {
		cout << "Please enter all sales in month #" << whileLoopCounter << ": " << endl;
		cin >> salesFiguresInput;
		cinClear();

		//input validation
		if(salesFiguresInput < 0 || salesFiguresInput > 1000000){
			cout << "**** Error: Please enter a value between $0 and $1,000,000 (1 million) ****" << endl;
		}

		//Assigns Each Month value
		if(whileLoopCounter == 1){
			monthOneSales = salesFiguresInput;
		}
		if(whileLoopCounter == 2) {
			monthTwoSales = salesFiguresInput;
		}
		if(whileLoopCounter == 3) {
			monthThreeSales = salesFiguresInput;
		}


		whileLoopCounter++; //Increments the counter to get the sales figures for only the first 3 months
		totalSales += salesFiguresInput; //Totals up the sales entered each time the loop is run

	}

	//Do While loop for Months 4-6
	do {
		cout << "Please enter all sales in month #" << whileLoopCounter << ": " << endl;
		cin >> salesFiguresInput;
		cinClear();

		if(whileLoopCounter == 4){
			monthFourSales = salesFiguresInput;
		}
		if(whileLoopCounter == 5) {
			monthFiveSales = salesFiguresInput;
		}
		if(whileLoopCounter == 6) {
			monthSixSales = salesFiguresInput;
		}

		whileLoopCounter++; //Increments the counter (starts at 4 in this loop because of the previous loop)
		totalSales += salesFiguresInput; //Totals up sales entered

		if(salesFiguresInput < 0 || salesFiguresInput > 1000000){
			cout << "**** Error: Please enter a value between $0 and $1,000,000 (1 million) ****" << endl;
		} // if

	} while(whileLoopCounter < 7);


	//Prints total and the Average
	cout << "Total sales for six months: $" << totalSales << endl;
	cout << "Average sales for six months: $" << (totalSales/6) << endl;


	//TODO: print bar chart for each sales month

	cout << fixed << setprecision(2); //adds decimal point to end;
	cout << "Bar Chart by Month" << endl;
	cout << "__________________" << endl;

	//Month 1 Bar
	cout << "Month #1: ";
	for(int i = monthOneSales; i > 0;) {
		cout << "*";
		i -= 100;
	}
	cout << " ($" << monthOneSales << ")" << endl;

	//Month 2 Bar
	cout << "Month #2: ";
	for(int i = monthTwoSales; i > 0;) {
		cout << "*";
		i -= 100;
	}
	cout << " ($" << monthTwoSales << ")" << endl;

	//Month 3 Bar
	cout << "Month #3: ";
	for(int i = monthThreeSales; i > 0;) {
		cout << "*";
		i -= 100;
	}
	cout << " ($" << monthThreeSales << ")" << endl;

	//Month 4 Bar
	cout << "Month #4: ";
	for(int i = monthFourSales; i > 0;) {
		cout << "*";
		i -= 100;
	}
	cout << " ($" << monthFourSales << ")" << endl;

	//Month 2 Bar
	cout << "Month #5: ";
	for(int i = monthFiveSales; i > 0;) {
		cout << "*";
		i -= 100;
	}
	cout << " ($" << monthFiveSales << ")" << endl;

	//Month 3 Bar
	cout << "Month #6: ";
	for(int i = monthSixSales; i > 0;) {
		cout << "*";
		i -= 100;
	}
	cout << " ($" << monthSixSales << ")" << endl;



	cout << "Program Ending, Have a Good Day!" << endl; // prints Program Ending, Have a Good Day!
	return 0;
}
