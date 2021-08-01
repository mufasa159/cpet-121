// Given a line of text as input, output the number of characters excluding spaces, periods, exclamation points, or commas.

// Ex: If the input is:
// Listen, Mr. Jones, calm down.
// the output is:
// 21

// Note: Account for all characters that aren't spaces, periods, exclamation points, or commas (Ex: "r", "2", "?")

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: input_length_counter.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 14, 2021
// Description: counts the number of characters from a string input

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userText;
   int count = 0; // number of alphabets and digits
   int strLength; // length of user input
   
   getline(cin, userText);  // Gets entire line, including spaces. 
   strLength = userText.size();

   // count increasres only when there's a alphabetical or numerical value in user input
   for (int i = 0; i < strLength; ++i){
      if (isalpha(userText.at(i)) || isdigit(userText.at(i)) || userText.at(i) == '?') {
         ++count;
      }
   }
   
   cout << count << endl;

   return 0;
}
