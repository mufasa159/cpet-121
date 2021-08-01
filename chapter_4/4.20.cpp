// Write a program that removes all non alpha characters from the given input.

// Ex: If the input is:
// -Hello, 1 world$!
// the output is:
// Helloworld

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: remove_non_alpha_chars.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 14, 2021
// Description: Removes all non-alpha characters in a string

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;
   int strLength;
   
   getline(cin, userString);
   
   strLength = userString.size(); // length of user input
   
   for (int i = 0; i < strLength; ++i) { // prints only the alphabetical characters
      if (isalpha(userString.at(i))) {
         cout << userString.at(i);
      }
   }
   
   cout << endl;

   return 0;
}