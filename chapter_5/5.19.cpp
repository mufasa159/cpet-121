// Given a sorted list of integers, output the middle integer. A negative number indicates the end 
// of the input (the negative number is not a part of the sorted list). Assume the number of integers is always odd.

// Ex: If the input is:
// 2 3 4 8 11 -1 
// the output is:
// Middle item: 4

// The maximum number of inputs for any test case should not exceed 9. If exceeded, output "Too many numbers".
// Hint: First read the data into a vector. Then, based on the number of items, find the middle item.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: middle_item.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 21, 2021
// Description: Outputs the middle integer in a vector

#include <iostream>
#include <vector>   // vector library to use vectors
using namespace std;

int main() {
   vector<int> userInts; // vector to store the user inputs
   int num = 1;          // input numbers to assign to userInts vector
   int midNum;
   int count = 0;
   
   // takes input
   while (num > 0) {
      ++count;
      cin >> num;
      userInts.push_back(num);
   }
   
   if (count > 10) {
      cout << "Too many numbers" << endl;
   }
   else {
      // find the middle index
      midNum = (userInts.size() - 1) / 2;
      
      // prints the item at middle index
      cout << "Middle item: " << userInts.at(midNum) << endl; 
   }
      
   return 0;
}
