// Complete main() to read dates from input, one date per line. Each date's format must 
// be as follows: March 1, 1990. Any date not following that format is incorrect and should 
// be ignored. Use the substr() function to parse the string and extract the date. The input 
// ends with -1 on a line alone. Output each correct date as: 3/1/1990.

// Ex: If the input is:
// March 1, 1990
// April 2 1995
// 7/15/20
// December 13, 2003
// -1

// then the output is:
// 3/1/1990
// 12/13/2003

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: parsing_dates.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: Jul 28, 2021
// Description: parses dates from user input.

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Name: DateParser()
// Input: month as a string
// Output: month as an integer
// Purpose: to convert months into numbers
int DateParser(string month) {
	int monthInt = 0;
	
	if (month == "January")
		monthInt = 1;
	else if (month == "February")
		monthInt = 2;
	else if (month == "March")
		monthInt = 3;
	else if (month == "April")
		monthInt = 4;
	else if (month == "May")
		monthInt = 5;
	else if (month == "June")
		monthInt = 6;
	else if (month == "July")
		monthInt = 7;
	else if (month == "August")
		monthInt = 8;
	else if (month == "September")
		monthInt = 9;
	else if (month == "October")
		monthInt = 10;
	else if (month == "November")
		monthInt = 11;
	else if (month == "December")
		monthInt = 12;
	return monthInt;
}

int main () {
   
   // stores user input date
	string userDate;
	getline(cin, userDate);
	
	// stores month, day and year from user input
	string userMonth, userDay, userYear;
	
	// keeps taking input until -1 is entered
	while (userDate != "-1") {	
		
		istringstream InSS(userDate);                   // input string stream		
   	InSS >> userMonth >> userDay >> userYear;       // stores values in separate variables
   	
   	// if the date format is valid, it prints them in MM/DD/YYYY format
   	if (DateParser(userMonth) != 0) {
   	   if (userDay.find(",") < userDay.size()) {
   	      cout << DateParser(userMonth) << "/" << userDay.substr(0, userDay.find(",")) << "/" << userYear << endl;
   	   }
   	}
   	
   	getline(cin, userDate); // gets a new user input
	 
	}

}
