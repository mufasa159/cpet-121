// Write a program that takes a date as input and outputs the date's season. The input is a string to represent the month and an int to represent the day. Note: End with a newline.

// Ex: If the input is:

// April 11
// the output is:

// Spring
// In addition, check if the string and int are valid (an actual month and day).

// Ex: If the input is:

// Blue 65
// the output is:

// Invalid 
// The dates for each season are:
// Spring: March 20 - June 20
// Summer: June 21 - September 21
// Autumn: September 22 - December 20
// Winter: December 21 - March 19

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: seasons.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: Returns which season it is based on the given month and date

// Note: there's a better way to do this, but since this chapter is about branches I used tons of if-else statements

#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputMonth;
   int inputDay;
   
   cin >> inputMonth;
   cin >> inputDay;
   
   if (inputMonth == "March") {
      if (19 < inputDay && inputDay < 32) {
         cout << "Spring" << endl;
      } 
      else if (0 < inputDay && inputDay < 20) {
         cout << "Winter" << endl;   
      } 
      else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "April") {
      if (0 < inputDay && inputDay < 31) {
         cout << "Spring" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "May") {
      if (0 < inputDay && inputDay < 32) {
         cout << "Spring" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "June") {
      if (0 < inputDay && inputDay < 21) {
         cout << "Spring" << endl;
      } else if (20 < inputDay && inputDay < 31){
         cout << "Summer" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "July") {
      if (0 < inputDay && inputDay < 32) {
         cout << "Summer" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "August") {
      if (0 < inputDay && inputDay < 32) {
         cout << "Summer" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "September") {
      if (0 < inputDay && inputDay < 22) {
         cout << "Summer" << endl;
      } else if (21 < inputDay && inputDay < 31){
         cout << "Autumn" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "October") {
      if (0 < inputDay && inputDay < 32) {
         cout << "Autumn" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "November") {
      if (0 < inputDay && inputDay < 31) {
         cout << "Autumn" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "December") {
      if (0 < inputDay && inputDay < 21) {
         cout << "Autumn" << endl;
      } else if (20 < inputDay && inputDay < 32){
         cout << "Winter" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "January") {
      if (0 < inputDay && inputDay < 32) {
         cout << "Winter" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else if (inputMonth == "February") {
      if (0 < inputDay && inputDay < 29) {
         cout << "Winter" << endl;
      } else {
         cout << "Invalid" << endl;
      }
   }
   
   else {
      cout << "Invalid" << endl;
   }
   
   return 0;
}