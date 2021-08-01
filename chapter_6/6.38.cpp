// When analyzing data sets, such as data for human heights or for human weights, a 
// common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or 
// throwing away outliers. For this program, adjust the values by subtracting the smallest value from 
// all the values. The input begins with an integer indicating the number of integers that follow. 
// Assume that the list will always contain less than 20 integers.

// Ex: If the input is:
// 5 30 50 10 70 65
// the output is:
// 20 40 0 60 55

// For coding simplicity, follow every output value by a space, even the last one.
// Your program must define and use the following function:
// int GetMinimumInt(vector<int> listInts)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: list_normalizing.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24, 2021
// Description: adjusts data by subtracting the smallest value from all the values
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <vector> 
using namespace std;

// Name: GetMinimumInt()
// Input: list of integers
// Output: the lowest integer in the list
// Purpose: to find the lowest integer in the vector
int GetMinimumInt(vector<int> listInts) {
   int min = 9999;
   int length = listInts.size();
   
   for (int i = 0; i < length; ++i) {
      if (listInts.at(i) < min) {
         min = listInts.at(i);
      }
   }
   
   return min;
}


int main() {   
   // getting the total number of values to be entered
   int numValues;
   cin >> numValues;
   
   // declaring variables
   vector<int> listInts(numValues);
   int userInt;
   int minVal;
   
   // gets user input and stores them in the listInts vector
   for (int i = 0; i < numValues; ++i) {
      cin >> userInt;
      listInts.at(i) = userInt;
   }
   
   // assigning the lowest value in list to minVal
   minVal = GetMinimumInt(listInts);
   
   // printing the lowest possible values
   for (int i = 0; i < numValues; ++i) {
      listInts.at(i) -= minVal;
      cout << listInts.at(i) << " ";
   }
   
   cout << endl;
   
   return 0;
}
