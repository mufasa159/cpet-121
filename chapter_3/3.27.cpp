// A year in the modern Gregorian Calendar consists of 365 days. In reality, the earth takes 
// longer to rotate around the sun. To account for the difference in time, every 4 years, a leap 
// year takes place. A leap year is when a year has 366 days: An extra day, February 29th. The 
// requirements for a given year to be a leap year are:

// 1) The year must be divisible by 4
// 2) If the year is a century year (1700, 1800, etc.), the year must be evenly divisible by 400
// Some example leap years are 1600, 1712, and 2016.
// Write a program that takes in a year and determines whether that year is a leap year.

// Ex: If the input is:
// 1712
// the output is:
// 1712 - leap year

// Ex: If the input is:
// 1913
// the output is:
// 1913 - not a leap year

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: leap_year.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: This program tells you if the year you entered is a leap year or not

#include <iostream>
using namespace std;

int main() {
   int inputYear;
   const int CENTURY_DIVISOR = 400;
   const int YEAR_DIVISOR = 4;
   
   cin >> inputYear;
   
   if ((inputYear % CENTURY_DIVISOR) == 0) {   // checks if the year is a century year
      cout << inputYear << " - leap year" << endl;
   } 
   else if ((inputYear % YEAR_DIVISOR) == 0) { // continues if the year is non-century year
      if (inputYear == 1900) {                 // apparently 1900 is not a leap year even though it is divisible by 4
         cout << inputYear << " - not a leap year" << endl;
      } 
      else {
         cout << inputYear << " - leap year" << endl;
      }
   }
   else {
      cout << inputYear << " - not a leap year" << endl; 
   }
   
   return 0;
}