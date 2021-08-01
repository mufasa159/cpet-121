// Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in binary. For an integer x, the algorithm is:

// As long as x is greater than 0
// Output x % 2 (remainder is either 0 or 1)
// x = x / 2

// Note: The above algorithm outputs the 0's and 1's in reverse order.

// Ex: If the input is:
// 6
// the output is:
// 011

// 6 in binary is 110; the algorithm outputs the bits in reverse.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: binary_converter.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 13, 2021
// Description: The following program converts a decimal number to binary.

#include <iostream>
using namespace std;

int main() {
   int userInput;
   int decimalNum;
   int binaryNum;
   
   cin >> userInput;
   decimalNum = userInput;
   
   while (decimalNum > 0) {
      binaryNum = decimalNum % 2;
      decimalNum /= 2;
      cout << binaryNum;
   }
   
   cout << endl;
   
   return 0;
}
