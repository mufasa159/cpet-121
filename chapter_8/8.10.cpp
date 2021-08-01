// Write a recursive function called PrintNumPattern() to output the following number pattern.
// Given a positive integer as input (Ex: 12), subtract another positive integer (Ex: 3) continually 
// until 0 or a negative value is reached, and then continually add the second integer until the first integer is again reached.
// Your function's parameters should exactly be 2 signed integers.

// Ex. If the input is:
// 12
// 3
// the output is:
// 12 9 6 3 0 3 6 9 12 

// and the first call of your function from main() would have the values:
// PrintNumPattern(12,3);

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: number_pattern.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 29, 2021
// Description: Given a positive integer as input, the program subtracts another positive integer continually 
//              until 0 or a negative value is reached, and then continually adds the second integer until the 
//              first integer is again reached.

#include <iostream>

using namespace std;

// Name: PrintNumPattern()
// Input: two integers
// Output: prints their pattern in a specific format (n1, n2, n3, ... n3, n2, n1)
// Purpose: to print a number pattern
void PrintNumPattern(int num1, int num2){
   if (num1 == 0 || num1 < 0) {  // for 0 and negative values;
      cout << num1 << " ";
   } else {
      cout << num1 << " ";
      PrintNumPattern(num1 - num2, num2);
      cout << num1 << " ";
   }
}

int main() {
   // declaring user-input variables
   int num1;
   int num2;

   // taking integer values from the user
   cin >> num1;
   cin >> num2;
   
   // printing the pattern on screen
   PrintNumPattern(num1, num2);
   
   return 0;
}