// Statistics are often calculated with varying amounts of input data. Write a program that 
// takes any number of non-negative integers as input, and outputs the max and average. 
// A negative integer ends the input and is not included in the statistics.

// Ex: When the input is:
// 15 20 0 5 -1
// the output is:
// 20 10
// You can assume that at least one non-negative integer is input.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: varied_amount.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 14, 2021
// Description: The following program takes non-negative numbers as input and return the max and average value.

#include <iostream>
using namespace std;

int main() {
   int userInput;
   int maxNum = 0;
   int average = 0;
   int inputCount = 0; // for counting number of inputs
   
   cin >> userInput;
   
   while (userInput >= 0) {
      if (userInput > maxNum) { // stores the highest value in maxNum
         maxNum = userInput;
      }
 
      average += userInput; // adds all the input values
      cin >> userInput;
      ++inputCount;
   }
   
   average /= inputCount; // divides the sum of input values by the amount of input
   cout << maxNum << " " << average << endl;

   return 0;
}
