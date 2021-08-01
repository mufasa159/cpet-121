// Write a program that reads an integer, a list of words, and a character. The integer signifies 
// how many words are in the list. The output of the program is every word in the list that contains 
// the character at least once. For coding simplicity, follow each output word by a comma, even the 
// last one. Assume at least one word in the list will contain the given character.

// Ex: If the input is:
// 4 hello zoo sleep drizzle z
// then the output is:
// zoo,drizzle,

// To achieve the above, first read the list into a vector. Keep in mind that the character 'a' is not equal to the character 'A'.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: contains_the_character.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 21, 2021
// Description: outputs every word in the list that contains the user-input character at least once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
   string word;     // stores each word temporarily
   char userChar;   // stores the character that will be used for matching other chars
   
   // user inputs the total number of words
   int length;
   cin >> length;
   
   vector<string> words(length);  // stores the user-input words
   
   // gets user input and stores them in vector
   for (int i = 0; i < length; ++i) {
      cin >> word;
      words.at(i) = word;
   }
   
   cin >> userChar;
   
   // prints the word if the user-input character is found
   for (int j = 0; j < length; ++j) {
      if (words.at(j).find(userChar) < words.at(j).size()) {
         cout << words.at(j) << ",";
      }
   }

   return 0;
}
