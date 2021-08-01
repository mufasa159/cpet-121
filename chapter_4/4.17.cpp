// Write a program whose input is a character and a string, and whose output indicates the number of times the character appears in the string. The output should include the input character and use the plural form, n's, if the number of times the characters appears is not exactly 1.

// Ex: If the input is:
// n Monday
// the output is:
// 1 n

// Ex: If the input is:
// z Today is Monday
// the output is:
// 0 z's

// Ex: If the input is:
// n It's a sunny day
// the output is:
// 2 n's

// Case matters.

// Ex: If the input is:
// n Nobody
// the output is:
// 0 n's

// n is different than N.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: count_characters.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 14, 2021
// Description: The following programs returns the number of times a character appeared in a string from user input.

#include <iostream>
#include <string>
using namespace std;

int main() {
   char userChar;
   string userString;
   int count = 0;
   string endString;
   
   cin >> userChar;
   getline(cin, userString);
   
   // finds userChar in userString
   // if any exists, it increases the count variable by 1
   for (int i = 0; i < (userString.size()); ++i) {
      if (userString.at(i) == userChar){
         ++count;
      }
   }
   
   // determines which output form (singular or plurar) should be displayed
   if (count > 1 || count == 0) {
      endString = "'s";
   } else {
      endString = "";
   }
   
   cout << count << " " << userChar << endString << endl;

   return 0;
}