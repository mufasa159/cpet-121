// Write a C++ program the reads the following data from a file named "car_data.dat" and displays the car's number, miles driven, gallons of gas used, and miles per gallon (mpg) for each car. The output should display a summary of the total miles driven, total gallons of gas used, and average mpg for all cars, calculated from total gallons and total miles. These total should be displayed at the end of the report.

// Car Number	Miles Driven	Gallons of Gas Used
// 54	250    19
// 62	525	   38
// 71	123     6
// 85	1322   86
// 97	235	   14

// For the above input file::
// 54 250 19
// 62 525 38
// 71 123 6
// 85 1322 86
// 97 235 14

// The output should be:
//   54  250.00   19.00   13.16
//   62  525.00   38.00   13.82
//   71  123.00    6.00   20.50
//   85 1322.00   86.00   15.37
//   97  235.00   14.00   16.79
//      2455.00  163.00   15.06

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: car_data.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 29, 2021
// Description: formats data from car_data.dat file, calculates total and average values, then prints them on screen 

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
   
   // declaring variables
   fstream carData;
   int carNum;
   double carMiles;
   double carGas;
   double avgMPG;
   double totalMiles = 0;
   double totalGas = 0;
   double finalAvg;
   
   // opens car_data.dat file
   carData.open("car_data.dat");
   
   // checks for error
   if (!carData.is_open()) {
      cout << "Could not open file" << endl;
      return 1; // 1 indicates error
   }
   
   // gets input from the car_data.dat file
   carData >> carNum >> carMiles >> carGas;
   
   // keeps running until it reaches the end of file
   while (!carData.fail()) {
      
      // average and total value calculations
      avgMPG = carMiles / carGas;
      totalMiles += carMiles;
      totalGas += carGas;
      
      // prints formatted data for car on screen
      cout << fixed << setprecision(2);
      cout << setw(4) << carNum;
      cout << setw(8) << carMiles;
      cout << setw(8) << carGas;
      cout << setw(8) << avgMPG;
      cout << endl;
      
      // gets the next values from the file
      carData >> carNum >> carMiles >> carGas;
   }
   
   // calculates the final miles per gallon average 
   finalAvg = totalMiles / totalGas;
   
   // prints final average and total values
   cout << setw(12) << totalMiles;
   cout << setw(8) << totalGas;
   cout << setw(8) << finalAvg;
   cout << endl;
   
   return 0;
}