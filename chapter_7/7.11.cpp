// Write a C++ program the reads a string from the console and determine the number of times the string appears in the data file "mary.txt".
// The file "mary.txt" contains the following information:
// Mary had a little lamb Little lamb , little lamb Mary had a little lamb Its fleece was white as snow And everywhere that Mary went Mary went , Mary went Everywhere that Mary went The lamb was sure to go.

// For this input::
// that
// The output should be:
// 2

// For this input::
// dog
// The output should be:
//  0

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 
// Title: little_lambs.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 28, 2021
// Description: counts the total number of a word's appearance in a mary.txt file

#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main() {
   // declaring variables
   ifstream inFS;
   int count = 0;
   string temp;
   
   // user-input search word
   string userString;
   cin >> userString;
   
   inFS.open("mary.txt"); // opening mary.txt file
   
   if (!inFS.is_open()) {
      cout << "Could not open file" << endl;
      return 1; // 1 indicates error
   }
   
   // reads the first word in mary.txt file
   inFS >> temp;
   
   // keeps reading until it reaches the end of file
   while (!inFS.fail()) {
      
      // checks if the userString matches the word in mary.txt file
      if (temp == userString) {
         ++count;
      }
      inFS >> temp; // reads the next word
   }
   
   cout << count << endl; // prints the total count
   
   inFS.close(); // closes the mary.txt file

   return 0;
}