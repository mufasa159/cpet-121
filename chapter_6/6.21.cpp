// A pedometer treats walking 2,000 steps as walking 1 mile. Write a program whose 
// input is the number of steps, and whose output is the miles walked.

// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements.

// Ex: If the input is:

// 5345
// the output is:

// 2.67
// Your program must define and call a function:
// double StepsToMiles(int userSteps)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: step_counter.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24, 2021
// Description: a program whose input is the number of steps, and whose output is the miles walked
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <iomanip>
using namespace std;

// Name: StepsToMiles()
// Input: number of steps
// Output: miles walked
// Purpose: to convert the amount of steps to miles
double StepsToMiles(int userSteps) {
   const double WALKS_PER_MILE = 2000.00;
   double convertedVal = userSteps / WALKS_PER_MILE;
   return convertedVal;
}
   

int main() {
   // user input
   int userInput;
   cin >> userInput;
   
   // prints the converted value
   cout << fixed << setprecision(2); 
   cout << StepsToMiles(userInput) << endl;

   return 0;
}
