// Write a program whose input is a character and a string, and whose output indicates the 
// number of times the character appears in the string.

// Ex: If the input is:
// n Monday
// the output is:
// 1

// Ex: If the input is:
// z Today is Monday
// the output is:
// 0

// Ex: If the input is:
// n It's a sunny day
// the output is:
// 2

// Case matters. n is different than N.

// Ex: If the input is:
// n Nobody
// the output is:
// 0

// Your program must define and call the following function that returns the number of times the 
// input character appears in the input string. int CountCharacters(char userChar, string userString)

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: char_counter.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24, 2021
// Description: counts the total number of a user-input character in a sentence

#include <iostream>
using namespace std;

// Name: CountCharacters()
// Input: a char, and a string
// Output: number of times the char appears in the string
// Purpose: to count the total number of user specified character's appearance in a string
int CountCharacters(char userChar, string userString) {
   string endString;
   int count = 0;
   int length = userString.size();
   
   for (int i = 0; i < length; ++i) {
      if (userString.at(i) == userChar){
         ++count;
      }
   }
   
   return count;
}
   

int main() {
   // defining variables
   char userChar;
   string userString;
   
   // taking user input as a line
   cin >> userChar;
   getline(cin, userString);
   
   // caling the function and printing the total number of char's appearance
   cout << CountCharacters(userChar, userString) << endl;

   return 0;
}

