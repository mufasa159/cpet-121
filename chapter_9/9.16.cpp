// Given a list of unique numbers, write a program that outputs Sorted if the numbers are in ascending order, 
// Unsorted otherwise. If the input is 5 1 3 6 7 9, output Sorted. If the input is 3 10 8 2, output: Unsorted. A list of size 0 or 1 is sorted.

// Hints:
// Remember that only one violation makes the entire list unsorted.
// For simplicity, you don't have to don't break out of the loop if you find two numbers aren't ascending. 
// Instead, use a bool variable, initialize it to true, and set it to false if you find any violation.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: sort_check.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: the following program checks if the values entered by user is sorted and then prints either "Sorted" or "Unsorted"

#include <iostream>
using namespace std;

int main() {
   // declaring variables
   bool sorted = true;
   int userValue;
   int temp;
   
   // get length from user
   int length;
   cin >> length;
   
   // get first value
   cin >> userValue;
   temp = -9999;
   
   // get rest of the values and check if they are sorted
   for (int i = 0; i < length; ++i) {
      if (userValue <= temp) {
         sorted = false;
      } else {
         temp = userValue;
         cin >> userValue;
      }
   }
   
   // print final message based on result
   if (!sorted) {
      cout << "Unsorted" << endl;
   } else {
      cout << "Sorted" << endl;
   }

   return 0;
}