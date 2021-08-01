// Write a program that reads a list of words. Then, the program outputs those words and their frequencies. 
// The input begins with an integer indicating the number of words that follow. Assume that the list 
// will always contain fewer than 20 words.

// Ex: If the input is:
// 5 hey hi Mark hi mark
// the output is:
// hey - 1
// hi - 2
// Mark - 1
// hi - 2
// mark - 1

// Hint: Use two vectors, one vector for the strings and one vector for the frequencies.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: word_frequency.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 21, 2021
// Description: outputs word frequency from a list of inputs

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   string userStr; // user input
   int count;      // for counting word frequency
   
   // gets the total number of words from user
   int strLength;
   cin >> strLength;
   
   vector<string> words(strLength);  // stores all user-input values
   
   // gets words from the user and stores in word vector
   for (int i = 0; i < strLength; ++i) {
      cin >> userStr;
      words.at(i) = userStr;
   }
   
   // checks if the word already exists and updates the count
   for (int i = 0; i < strLength; ++i) {
      count = 0;
      for (int j = 0; j < strLength; ++j) {
         if (words.at(i) == words.at(j)) {
            ++count;
         }
      }
      cout << words.at(i) << " - " << count << endl;
   }

   return 0;
}
