// Write a function DrivingCost() with input parameters drivenMiles, milesPerGallon, and dollarsPerGallon, 
// that returns the dollar cost to drive those miles. All items are of type double. If the function is 
// called with 50 20.0 3.1599, the function returns 7.89975.

// Define that function in a program whose inputs are the car's miles/gallon and the gas dollars/gallon 
// (both doubles). Output the gas cost for 10 miles, 50 miles, and 400 miles, by calling your DrivingCost function three times.

// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements.

// Ex: If the input is:
// 20.0 3.1599
// the output is:
// 1.58 7.90 63.20

// Your program must define and call a function:
// double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: driving_cost.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24th, 2021
// Description: this program returns the dollar cost to drive certain miles
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Name: DrivingCost()
// Input: car's miles/gallon and the gas dollars/gallon (both doubles)
// Output: the gas cost for 10 miles, 50 miles, and 400 miles
// Purpose: to determine the gas cost based on miles driven and price per gallon
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
   double price = dollarsPerGallon / milesPerGallon;
   double totalPrice = drivenMiles * price;
   
   return totalPrice;
}

double DrivingCost(double milesPerGallon, double dollarsPerGallon) {
   double price = dollarsPerGallon / milesPerGallon;
   
   return price;
}

int main() {
   // defining variables
   double userDrivenMiles;
   double userMilesPerGallon;
   double userDollarsPerGallon;
   
   // user input
   cin >> userDrivenMiles;
   cin >> userMilesPerGallon;
   cin >> userDollarsPerGallon;
   
   // prints the converted number
   cout << fixed << setprecision(2);
   if (userDollarsPerGallon != 0) {
      cout << DrivingCost(userDrivenMiles, userMilesPerGallon, userDollarsPerGallon) << endl;
   } else {
      cout << DrivingCost(userDrivenMiles, userMilesPerGallon * 10) << " ";
      cout << DrivingCost(userDrivenMiles, userMilesPerGallon * 50) << " ";
      cout << DrivingCost(userDrivenMiles, userMilesPerGallon * 400) << endl;
   }
   
   return 0;
}
