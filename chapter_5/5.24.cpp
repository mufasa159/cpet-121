// Write a program that first gets a list of integers from input. The input begins with an integer 
// indicating the number of integers that follow. That list is followed by two more integers 
// representing lower and upper bounds of a range. Your program should output all integers from the 
// list that are within that range (inclusive of the bounds). For coding simplicity, follow each output 
// integer by a comma, even the last one. The output ends with a newline.

// Ex: If the input is:
// 5 25 51 0 200 33
// 0 50
// then the output is:
// 25,0,33,

// (the bounds are 0-50, so 51 and 200 are out of range and thus not output).
// To achieve the above, first read the list of integers into a vector.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: elements_in_a_range.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 21, 2021
// Description: outputs all user-input integers from a list that are within a range specified by the user (inclusive of the bounds.)

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int userNum;  // temporarily hold user-input value
   int minVal;   // minimum value for range
   int maxVal;   // maximum value for range
   
   // getting length size from the user
   int intLength;
   cin >> intLength;
   
   vector<int> userNums(intLength);  // for storing all the values in userNums vector
   
   // stores all the values in userNums vector
   for (int i = 0; i < intLength; ++i) {
      cin >> userNum;
      userNums.at(i) = userNum;
   }
   
   cin >> minVal;
   cin >> maxVal;
   
   // prints the numbers within the specific range
   for (int j = 0; j < intLength; ++j) {
      if (userNums.at(j) >= minVal && userNums.at(j) <= maxVal) {
         cout << userNums.at(j) << ",";
      }
   }
   
   cout << endl;

   return 0;
}
