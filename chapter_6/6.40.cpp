// Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow.

// Ex: If the input is:
// 5 hey hi Mark hi mark
// the output is:
// hey 1
// hi 2
// Mark 1
// hi 2
// mark 1

// Hint: Use two vectors, one for the strings, another for the frequencies.
// Your program must define and use the following function:
// int GetFrequencyOfWord(vector<string> wordsList, string currWord)

// Note: This is a lab from a previous chapter that now requires the use of a function.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: word_frquencies.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24, 2021
// Description: the program reads a list of words, then outputs those words and their frequencies
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <vector> 
#include <string>
using namespace std;

// Name: GetFrequencyOfWord()
// Input: a vector and a string
// Output: total number of times the word appears in the vector
// Purpose: finding word frequency in a sentence
int GetFrequencyOfWord(vector<string> wordsList, string currWord) {
   int length = wordsList.size();
   int count = 0;
   for (int j = 0; j < length; ++j) {
      if (wordsList.at(j) == currWord) {
         ++count;
      }
   }
   return count;
}


int main() {
   // gets the total number of words from user
   int strLength;
   cin >> strLength;
   
   string userStr;                   // stores strings temporarily
   vector<string> words(strLength);  // stores all user-input values
   
   // gets words from the user and stores in word vector
   for (int i = 0; i < strLength; ++i) {
      cin >> userStr;
      words.at(i) = userStr;
   }
   
   // prints word frequencies
   for (int i = 0; i < strLength; ++i) {
      cout << words.at(i) << " " << GetFrequencyOfWord(words, words.at(i)) << endl;
   }

   return 0;
}
