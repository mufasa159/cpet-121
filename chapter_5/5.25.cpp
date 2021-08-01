// Write a program that reads a list of integers, and outputs the two smallest integers in the list, 
// in ascending order. The input begins with an integer indicating the number of integers that follow.

// Ex: If the input is:
// 5 10 5 3 21 2
// the output is:
// 2 and 3

// You can assume that the list of integers will have at least 2 values.
// To achieve the above, first read the integers into a vector.
// Hint: Make sure to initialize the second smallest and smallest integers properly

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: two_smallest_number.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 21, 2021
// Description:  outputs the two smallest integers in a list populated by user-input values.

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int userNum;          // temporarily stores user input
   int minNum1 = 999;    // stores the lowest number
   int minNum2 = 999;    // stores the second lowest number
   int temp = 0;         // temporarily stores subtraction value in second for loop
   int difference = 999; // temporarily stores subtraction value
   
   // gets length of user input
   int length;
   cin >> length;
   
   vector<int> userNums(length); // for storing user's values
   
   // takes all the user input and stores them in vector userNums
   for (int i = 0; i < length; ++i) {
      cin >> userNum;
      userNums.at(i) = userNum;
      if (userNums.at(i) < minNum1) {
         minNum1 = userNum;
      }
   }
   
   // finds the second lowest number by subtracting minVal1 from userNums.at(i) 
   for (int i = 0; i < length; ++i) {
      if (userNums.at(i) > minNum1) {
         temp = userNums.at(i) - minNum1;
         if (temp < difference) {
            minNum2 = userNums.at(i);
            difference = temp;
         }
      }
   }
   
   // prints the two lowest integers on screen
   cout << minNum1 << " and " << minNum2 << endl;
   
   return 0;
}
