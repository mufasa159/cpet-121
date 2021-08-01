// Write a function MaxMagnitude() with two integer input parameters that returns the largest magnitude value. 
// Use the function in a program that takes two integer inputs, and outputs the largest magnitude value.

// Ex: If the inputs are:
// 5 7
// the function returns:
// 7

// Ex: If the inputs are:
// -8 -2
// the function returns:
// -8

// Note: The function does not just return the largest value, which for -8 -2 would be -2. Though not necessary, 
// you may use the absolute-value built-in math function.
// Your program must define and call a function:
// int MaxMagnitude(int userVal1, int userVal2)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: max_magnitude.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24, 2021
// Description: the following program outputs the largest magnitude from the integer inputs
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

// Name: MaxMagnitude()
// Input: two integer
// Output: the largest magnitude value of those two integers
// Purpose: to find the the largest magnitude value
int MaxMagnitude(int userVal1, int userVal2){
   int maxMag;
   if (abs(userVal1) > abs(userVal2)) {
      maxMag = userVal1;
   } 
   else {
      maxMag = userVal2;
   }
   
   return maxMag;
}
   
int main() {
   // defining user variables
   int userVal1;
   int userVal2;
   
   // user input
   cin >> userVal1;
   cin >> userVal2;
   
   // prints the largest magnitude
   cout << MaxMagnitude(userVal1, userVal2) << endl;

   return 0;
}
