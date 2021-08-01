// (1) If a user's input string matches a known text message abbreviation, output the 
// unabbreviated form, else output: Unknown. Support two abbreviations: LOL -- laughing 
// out loud, and IDK -- I don't know. (4 pts)

// Sample input/output:
// Input an abbreviation:
// LOL
// laughing out loud

// (2) Expand to also decode these abbreviations. (3 pts)
// BFF -- best friends forever
// IMHO -- in my humble opinion
// TMI -- too much information

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: abbreviation_decoder.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: Decodes abbreviation in text messages

#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {
   string userInput;
   bool exist = false;
   string abbreviation[] = {"LOL", "IDK", "BFF", "IMHO", "TMI"};
   string unabbreviated[] = {"laughing out loud", "I don't know", "best friends forever", "in my humble opinion", "too much information"};
   
   int arrSize = sizeof(abbreviation) / sizeof(abbreviation[0]);
   
   cout << "Input an abbreviation:" << endl;
   cin >> userInput;
   
   for (int i = 0; i < arrSize; i++) {  // checks if the values in abbreviation array exist in the input
      if (userInput == abbreviation[i] ) {
         exist = true;
         cout << unabbreviated[i] << endl;
      }
   }
   
   if (!exist) {
      cout << "Unknown" << endl;
   }

   return 0;
}
