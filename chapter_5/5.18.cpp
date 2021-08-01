// Write a program that reads a list of integers, and outputs those integers in reverse. 
// The input begins with an integer indicating the number of integers that follow. For 
// coding simplicity, follow each output integer by a comma, including the last one.

// Ex: If the input is:
// 5 2 4 6 8 10
// the output is:
// 10,8,6,4,2,

// To achieve the above, first read the integers into a vector. Then output the vector in reverse.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: outpur_in_reverse.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 21, 2021
// Description: Displays user input in reverse using vector

#include <iostream>
#include <vector>   // vector library to use vectors
using namespace std;

int main() {
   int numLength;
   int numInput;
   int i;
   
   cin >> numLength;
   
   vector<int> userInts(numLength); // A vector to hold the user's input integers
   
   // user inputs
   for (i = 0; i < numLength; ++i) {
      cin >> numInput;
      userInts.at(i) = numInput;
   }
   
   // displays numbers in reverse
   for (i = userInts.size()-1; i >= 0; --i) {
      cout << userInts.at(i) << ",";
   }
   
   cout << endl;

   return 0;
}
