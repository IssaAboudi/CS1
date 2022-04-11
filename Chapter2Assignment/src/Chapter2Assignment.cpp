//============================================================================
// Name        : Chapter2Assignment.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	/*
	The amount paid for the stock alone (without the commission)
The amount of the commission
The total amount paid (for the stock plus the commission)
Make sure that you display the data with a message before each value
Make sure your output is easily readable and understandable
Make sure you indicate when the program is ending
	 */

			int sharesOfStock = 750; //initializes how many shares of stock Kathryn bought
			double pricePerShare = 35.22; //initializes the price of 1 share of stock

			double totalPriceOfStock = sharesOfStock * pricePerShare; //calculates the total price of buying 750 stocks
			double comissionOfPurchase = .02 * totalPriceOfStock; //calculates how much Kathryn has to pay to her stockbroker for comission
			double totalPrice = totalPriceOfStock + comissionOfPurchase; //calculates the total of the 750 stocks plus the 2% comission

			cout << "Amount of Shares Purchased: " << sharesOfStock << endl; //Prints out how much stock Kathryn bought
			cout << "Price per Share: $" << pricePerShare <<endl; //Prints out the price of one share of stock
			cout << "Comission owed: $" << comissionOfPurchase << endl; //Prints out the amount Kathryn has to pay Stockbroker
			cout << "Total Amount Owed: $" << totalPrice << endl; //Prints out the total (

			cout << endl;
			cout << "Program ending. Have a nice day!" << endl; // prints Program ending. Have a nice day!
}
