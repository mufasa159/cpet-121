// One lap around a standard high-school running track is exactly 0.25 miles. 
// Write a program that takes a number of miles as input, and outputs the number of laps.

// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements.

// Ex: If the input is:
// 1.5
// the output is:
// 6.00

// Ex: If the input is:
// 2.2
// the output is:
// 8.80

// Your program must define and call a function:
// double MilesToLaps(double userMiles)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: track_miles.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24, 2021
// Description: A program that takes a number of miles as input, and outputs the number of laps.
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <iomanip>   // For setprecision
using namespace std;

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: MilesToLaps()
// Input: number of miles
// Output: number of laps
// Purpose: to compute how much laps are needed for a certain number of miles
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
double MilesToLaps(double userMiles) {
   const double LAP_MILES = 0.25;
   userMiles /= LAP_MILES;
   return userMiles;
}

int main() {
   // user input
   double userInput;
   cin >> userInput;
   
   // prints the converted value with 2 decimal points
   cout << fixed << setprecision(2);
   cout << MilesToLaps(userInput) << endl;

   return 0;
}
