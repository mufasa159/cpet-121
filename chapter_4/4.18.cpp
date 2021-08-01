// Forms often allow a user to enter an integer. Write a program that takes in a string 
// representing an integer as input, and outputs Yes if every character is a digit 0-9.

// Ex: If the input is:
// 1995
// the output is:
// Yes

// Ex: If the input is:
// 42,000
// or
// 1995!
// the output is:
// No

// Hint: Use a loop and the isdigit() function (don't forget to include the cctype library).

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: integer_string_checker.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 14, 2021
// Description: The following programs outputs "Yes" if all the characters of a user-input string are digits, otherwise "No".

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;
   int count = 0;
   int strLength;
   
   cin >> userString;
   strLength = userString.size(); // length of user input
   
   // counts every character until it finds a non-integer value
   for (int i = 0; i < strLength; ++i) {
      if (isdigit(userString.at(i))) {
         ++count;
      } else {
         count = 0;
         break;
      }
   }
   
   // if it doesn't find a non-digit value (if count > 0), it prints "Yes"
   // otherwise, it prints "No"
   if (count > 0) {
      cout << "Yes" << endl;
   } else {
      cout << "No" << endl;
   }
   

   return 0;
}
