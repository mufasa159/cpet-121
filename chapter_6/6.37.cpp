// Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Then, get the last value from the input, and output all integers less than or equal to that value.

// Ex: If the input is:
// 5 50 60 140 200 75 100
// the output is:
// 50 60 75

// The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. The 100 indicates that the program should output all integers less than or equal to 100, so the program outputs 50, 60, and 75. For coding simplicity, follow every output value by a space, including the last one.

// Such functionality is common on sites like Amazon, where a user can filter results.
// Write your code to define and use two functions:
// vector<int> GetUserValues(vector<int>& userValues, int numValues)
// void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold)
// Utilizing functions helps to make main() very clean and intuitive.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: below_an_amount.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24th, 2021
// Description: the programs returns all the numbers that are lower than a specific number 
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <vector> 
using namespace std;

// Name: OutputIntsLessThanOrEqualToThreshold()
// Input: int vector and an integer
// Output: integers lower than the user-specified number
// Purpose: to find the numbers lower than a specific value
void OutputIntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold) {
   int length = userValues.size();
   for (int i = 0; i < length; ++i) {
      if (userValues.at(i) <= upperThreshold) {
         cout << userValues.at(i) << " ";
      }
   }
   cout << endl;
}

// Name: GetUserValues()
// Input: int vector and an integer
// Output: none
// Purpose: to get a list of numbers from user
vector<int> GetUserValues(vector<int>& userValues, int numValues) {
   int userNum;
   
   // idk why but using userValues parameter directly doesn't change userValues after the loop
   // despite using pass-by-reference in the function. So, I declared a new vector called allValues
   // to store the new user-inputs and return its values
   vector<int> allValues(numValues);
   
   for (int i = 0; i < numValues; ++i){
      cin >> userNum;
      allValues.at(i) = userNum;
   }
   
   return allValues;
}


int main() {
   // defining variables
   vector<int> userValues; 
   int upperThreshold;
   int numValues;
   
   // gets all the user input numbers
   cin >> numValues;
   userValues = GetUserValues(userValues, numValues);

   // finds the numbers lower than upperThreshold
   cin >> upperThreshold;
   OutputIntsLessThanOrEqualToThreshold(userValues, upperThreshold);

   return 0;
}
