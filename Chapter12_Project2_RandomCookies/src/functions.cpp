//============================================================================
// Name        : functions.cpp
// Author      : Issa Aboudi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "functions.hpp"

void clearCIN(void){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

void printMenu(vector<cookie>&cookies){
	int userInput = 1;
	bool done = false;

	do{
		cout << "Main Menu" << endl;
		cout << "=========" << endl;
		cout << "1. Enter a Cookie" << endl;
		cout << "2. Print the Cookies" << endl;
		cout << "3. Clear the Cookies" << endl;
		cout << "4. Read the Cookies.bin file" << endl;
		cout << "5. Write the Cookies.bin file" << endl;
		cout << "6. Update Price of All cookies" << endl;
		cout << "7. Print updated cookie file" << endl;
		cout << "8. Read a random cookie from the file" << endl;
		cout << "9. Exit the program" << endl;
		cout << "Please select an option: ";
		cin >> userInput;
		clearCIN();
		switch(userInput){
			case 1:
				inputCookie(cookies);
				break;
			case 2:
				printCookies(cookies);
				break;
			case 3:
				cookies.clear();
				break;
			case 4:
				readCookies(cookies);
				break;
			case 5:
				writeCookies(cookies);
				break;
			case 6:
				updateCookies();
				break;
			case 7:
				printUpdatedCookies();
				break;
			case 8:
				readRandomCookie();
				break;
			case 9:
				done = true; //sets flag to true to break out of loop
				break;
			default:
				cout << "Error: Invalid Value entered! Please enter value from 1-7 or 9 to exit" << endl;
				cout << endl;
				break;
			}//switch
	} while(done == false); //keeps looping as long as flag is false
}

void inputCookie(vector<cookie>&cookies){
	cookie aCookie; //creating local cookie variable to add to vector
	string inputName = " "; //user input name -> initialized to empty

	//User Input section -> stores in aCookie struct
	cout << "Please enter the cookie name: "; //prompts user
	getline(cin, inputName);
	strcpy(aCookie.CookieName, inputName.c_str());
	cout << "Please enter the amount of calories in this cookie: "; //prompt
	cin >> aCookie.CookieCalories;
	clearCIN();5t
	cout << "Please enter how much it costs to make this cookie: "; //prompt
	cin >> aCookie.CookieCost;
	clearCIN();
	cout << "Please enter how much this cookie sells for: "; //prompt
	cin >> aCookie.CookiePrice;
	clearCIN();
	cout << "Please enter how many cookies are in stock: "; //prompt
	cin >> aCookie.TotalCookiesInStock;
	clearCIN();

	//Formatting endls to make menu easier to read
	cout << endl;

	//adds last cookie to the array of cookies
	cookies.push_back(aCookie);

}

void printCookies(vector<cookie>&cookies){
	int totalCookies = 0;

	cout << endl; //formatting endl
	cout << "Cookie Report" << endl;
	cout << "=============" << endl;
	cout << left; //makes everything right aligned
	cout << setw(30) << "Name"  << setw(16) << "Calories" << setw(8) << "Cost" << setw(8) << "Price" << setw(10) << "Profit" << setw(15) << "Total on Hand" << endl;
	cout << setw(30) <<"-------------------" << setw(16) << "--------" << setw(8) << "----" << setw(8) << "-----" << setw(10) << "------" << setw(15) << "-------------" << endl;
	for(unsigned int i = 0; i < cookies.size(); i++){
		cout << left << setprecision(2) << fixed;
		cout << setw(25) << cookies[i].CookieName << right << setw(13) << cookies[i].CookieCalories << setw(12) << cookies[i].CookieCost << setw(8) << cookies[i].CookiePrice << setw(9) << (cookies[i].CookiePrice - cookies[i].CookieCost) << setw(17) << cookies[i].TotalCookiesInStock << endl;
		totalCookies += cookies[i].TotalCookiesInStock;
	}//for

	cout << "Total Cookies in Inventory: " << totalCookies << endl;

	//Formatting endls to make the menu easier to read
	cout << endl;
}

void readCookies(vector<cookie>&cookies){
	ifstream cookieBatch; //create a file variable
	cookie cookiesFromFile; //create local cookie variable

	//opens file as input and output
	cookieBatch.open("Cookies.bin", ios::binary);

	//Checks if file fails to open
	if(cookieBatch.fail()) {
		cout << "Error: Opening of the file failed. Program aborting" << endl;
		exit(999);
	}//if
	else {}

	//rest of the code
	cookieBatch.seekg(0L, ios::beg); //move pointer to beginning of file (just in case)
	while(!cookieBatch.eof()){ //loops until all cookies from file have been read
		//reads cookies from the file
		cookieBatch.read(reinterpret_cast<char*>(&cookiesFromFile), sizeof(cookiesFromFile));
		if(cookieBatch.eof()){
			break;
		} else {
			//adds cookies from the file to the end of the vector
			cookies.push_back(cookiesFromFile);
		}
	}//while
	//close file
	cookieBatch.close();

	//Formatting endls to make the menu easier to read
	cout << endl;
}

void writeCookies(vector<cookie>&cookies){
	ofstream cookieBatch; //create a file variable

	//opens file as input and output
	cookieBatch.open("Cookies.bin", ios::binary);

	//Checks if file fails to open
	if(cookieBatch.fail()) {
		cout << "Error: Opening of the file failed. Program aborting" << endl;
		exit(999);
	}//if
	else {}

	//writes cookies in vector to the file
	for(unsigned int i = 0; i < cookies.size(); i++){
		cookieBatch.write(reinterpret_cast<char*>(&cookies[i]), sizeof(cookies[i]));
	}//for

	//closes the file
	cookieBatch.close();

	//Formatting endls to make the menu easier to read
	cout << endl;
}

void updateCookies(void){
	float userInputPercentage = 0; //userInput variable
	//create file variables
	ifstream oldBatch; //reads form old file
	ofstream newBatch; //writes to new file
	cookie cookiesFromFile; //local cookie variable

	cout << "Please enter a percentage you would like to raise the price and cost of each cookie by (0-100%): "; //prompt
	cin >> userInputPercentage;
	clearCIN();

	//open Cookies.bin
	oldBatch.open("Cookies.bin", ios::binary);
	//open CookiesNew.bin
	newBatch.open("CookiesNew.bin", ios::binary);

	//Checks if Cookies.bin file fails to open
	if(oldBatch.fail()) {
		cout << "Error: Opening of the file failed. Program aborting" << endl;
		exit(999);
	}//if
	else {}

	//Checks if CookiesNew.bin file fails to open
	if(newBatch.fail()) {
		cout << "Error: Opening of the file failed. Program aborting" << endl;
		exit(999);
	}//if
	else {}

	oldBatch.seekg(0L, ios::beg); //move pointer to beginning of file (just in case)
	while(!oldBatch.eof()){ //loops until all cookies from file have been read
		//reads cookies from the file
		oldBatch.read(reinterpret_cast<char*>(&cookiesFromFile), sizeof(cookiesFromFile));
		if(oldBatch.eof()){
			break;
		} else {
			//raise cost and price by userInputPercentage amount
			cookiesFromFile.CookieCost += ((userInputPercentage/100) * cookiesFromFile.CookieCost);
			cookiesFromFile.CookiePrice += ((userInputPercentage/100) * cookiesFromFile.CookiePrice);

			newBatch.write(reinterpret_cast<char*>(&cookiesFromFile), sizeof(cookiesFromFile));
		}
	}

	//close both files
	oldBatch.close();
	newBatch.close();

	//formatting endls to make menu easier to read
	cout << endl;
}

void readRandomCookie(void){
	cookie randomCookie; //creates a local cookie variable
	fstream cookieOven; //creates a local file variable
	char cookieCaloriesUserInput = ' '; //char variable for user input -> stores calories to update
	int cookieNumberUserInput = 0;

	//open file for both in and out
	cookieOven.open("Cookies.bin", ios::binary | ios::in | ios:: out);


	//Checks if file fails to open
	if(cookieOven.fail()) {
		cout << "Error: Opening of the file failed. Program aborting" << endl;
		exit(999);
	}//if
	else {}

	//tells us how many cookies and how large the file is
	cookieOven.seekg(0L, ios::end); //Moves read pointer to the end of the file
	long int sizeOfFile = cookieOven.tellg();
	int numberOfCookies = sizeOfFile/sizeof(cookie);


	cout << "Please enter a cookie to read from 1 to " << numberOfCookies << " (-99 to quit): "; //userprompt
	cin >> cookieNumberUserInput;
	clearCIN();
	while(true){
		if(cookieNumberUserInput == -99){ //if sentinel is triggered, exit out
			break;
		} else if (cookieNumberUserInput < 1 || cookieNumberUserInput > sizeof(randomCookie)) { //check for out of bounds
			cout << "Invalid Cookie entered, please try again" << endl;
			break;
		} else {
			cookieOven.seekg(sizeof(cookie)*(cookieNumberUserInput-1), ios::beg); //move size of cookie * n-1 bytes from the beginning of the file
			cookieOven.read(reinterpret_cast<char*>(&randomCookie), sizeof(randomCookie)); //read cookie from file into randomCOokie variable
			if(cookieOven.eof()){ //if cookie entered out of bounds of avaliable cookies, try again:
				cout << "You picked an incorrect cookie, try again" << endl;
				cookieOven.clear();
				break;
			} else {
				cout << randomCookie.CookieName << " was read" << endl; //tells user what cookie they are currently on;
				cout << "Would you like to update the total calories for " << randomCookie.CookieName << "? (Y or N):"; //user prompt
				cin >> cookieCaloriesUserInput; //gets user input
				clearCIN();
				cookieCaloriesUserInput = toupper(cookieCaloriesUserInput); //ease of access for user to enter y or Y regardless of capitalization
				if(cookieCaloriesUserInput == 'Y'){
					cout << "Please enter calories for " << randomCookie.CookieName << ":"; //user prompt
					cin >> randomCookie.CookieCalories; //stores new calories
					clearCIN();
					cookieOven.seekp(sizeof(cookie)*(cookieNumberUserInput-1), ios::beg); //moves put file pointer to specified part of the file
					cookieOven.write(reinterpret_cast<char*>(&randomCookie), sizeof(randomCookie)); //writes updated calories value to the file
				} else {}
				break;

				cout << endl;
			}//else
		}//else
	}//while

	cookieOven.close();
}

void printUpdatedCookies(void){
	ifstream newBatch; //new file variable

	int totalCookies = 0;
	cookie cookiesFromFile; //local cookie variable

	//open the file
	newBatch.open("CookiesNew.bin", ios::binary);

	//Checks if file fails to open
	if(newBatch.fail()) {
		cout << "Error: Opening of the file failed. Program aborting" << endl;
		exit(999);
	}//if
	else {}


	cout << endl; //formatting endl
	cout << "Updated Cookie Report" << endl;
	cout << "=====================" << endl;
	cout << left; //makes everything right aligned
	cout << setw(30) << "Name"  << setw(16) << "Calories" << setw(8) << "Cost" << setw(8) << "Price" << setw(10) << "Profit" << setw(15) << "Total on Hand" << endl;
	cout << setw(30) <<"-------------------" << setw(16) << "--------" << setw(8) << "----" << setw(8) << "-----" << setw(10) << "------" << setw(15) << "-------------" << endl;
	while(!newBatch.eof()){
		newBatch.read(reinterpret_cast<char*>(&cookiesFromFile), sizeof(cookiesFromFile));
		if(newBatch.eof()){
			break;
		} else {
			cout << left << setprecision(2) << fixed;
			cout << setw(25) << cookiesFromFile.CookieName << right << setw(13) << cookiesFromFile.CookieCalories << setw(12) << cookiesFromFile.CookieCost << setw(8) << cookiesFromFile.CookiePrice << setw(9) << (cookiesFromFile.CookiePrice - cookiesFromFile.CookieCost) << setw(17) << cookiesFromFile.TotalCookiesInStock << endl;
			totalCookies += cookiesFromFile.TotalCookiesInStock;
		}
	}
	cout << "Total Cookies in Inventory: " << totalCookies << endl;

	//formatting endls to make menu easier to read
	cout << endl;
}
