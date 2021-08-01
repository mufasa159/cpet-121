// A “jiffy” is the scientific name for 1/100th of a second. Given an input number of seconds, output the number of "jiffies."

// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements.

// Ex: If the input is:

// 15
// the output is:

// 1500.00
// Your program must define and call a function:
// double SecondsToJiffies(double userSeconds)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: a_jiffy.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 25, 2021
// Description: given an input number of seconds, the program outputs the number of "jiffies."
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <iomanip>
using namespace std;

// Name: SecondsToJiffies()
// Input: number of seconds
// Output: number of "jiffies"
// Purpose: to convert number of seconds to "jiffies"
double SecondsToJiffies(double userSeconds) {
   const double JIFFY = 100;
   userSeconds *= JIFFY;
   return userSeconds;
}

int main() {
   // user input
   double userInput;
   cin >> userInput;
   
   // prints the converted value
   cout << fixed << setprecision(2);
   cout << SecondsToJiffies(userInput) << endl;

   return 0;
}