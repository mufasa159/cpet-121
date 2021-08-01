// Write a program whose inputs are three integers, and whose outputs are the largest 
// of the three values and the smallest of the three values.

// Ex: If the input is:

// 7 15 3
// the output is:

// largest: 15 
// smallest: 3
// Your program must define and call the following two functions. The LargestNumber function should return 
// the largest number of the three input values. The SmallestNumber function should return the smallest number of the three input values.
// int LargestNumber(int num1, int num2, int num3)
// int SmallestNumber(int num1, int num2, int num3)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: max_and_min_numbers.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24, 2021
// Description: finds the largest and the smallest of the three user-input values
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <vector>
using namespace std;

// Name: LargestNumber()
// Input: three integers
// Output: max value out of those three integers
// Purpose: to find the highest value
int LargestNumber(int num1, int num2, int num3) {
   int maxVal = -999;
   vector<int> list {num1, num2, num3};
   
   for (int i = 0; i < 3; ++i) {
      if (list.at(i) > maxVal) {
         maxVal = list.at(i);
      }
   }
   
   return maxVal;
}

// Name: SmallestNumber()
// Input: three integers
// Output: min value out of those three integers
// Purpose: to find the lowest value
int SmallestNumber(int num1, int num2, int num3) {
   int minVal = 9999;
   vector<int> list {num1, num2, num3};
   
   for (int i = 0; i < 3; ++i) {
      if (list.at(i) < minVal) {
         minVal = list.at(i);
      }
   }
   
   return minVal;
}

int main() {
   // defining variables
   int userVal1;
   int userVal2;
   int userVal3;
   
   // user input
   cin >> userVal1;
   cin >> userVal2;
   cin >> userVal3;
   
   // printing the max and min value
   cout << "largest: " << LargestNumber(userVal1, userVal2, userVal3) << endl;
   cout << "smallest: " << SmallestNumber(userVal1, userVal2, userVal3) << endl;

   return 0;
}
