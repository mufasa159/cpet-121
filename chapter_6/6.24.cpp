// Write a program whose input is two integers and whose output is the two integers swapped.

// Ex: If the input is:
// 3 8
// function SwapValues() returns and the main program outputs:
// 8 3

// Your program must define and call a function: void SwapValues(int& userVal1, int& userVal2)
// Function SwapValues() swaps the values referenced by the parameters.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: swapping_variables.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24th, 2021
// Description: a program whose input is two integers and whose output is the two integers swapped
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

// Name: SwapValues()
// Input: two integers
// Output: two integers swapped
// Purpose: to swap user input values
void SwapValues(int& userVal1, int& userVal2) {
   int temp = userVal1;
   userVal1 = userVal2;
   userVal2 = temp;
   
   cout << userVal1 << " " << userVal2 << endl; // prints the swapped values
}

int main() {
   // defining variables
   int xVal;
   int yVal;
   
   // user input
   cin >> xVal;
   cin >> yVal;
   
   // function call
   SwapValues(xVal, yVal);

   return 0;
}