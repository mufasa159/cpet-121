
// (1) Prompt the user for a string that contains two strings separated by a comma. (1 pt)

// Examples of strings that can be accepted:
// Jill, Allen
// Jill , Allen
// Jill,Allen

// Ex:
// Enter input string:
// Jill, Allen

// (2) Print an error message if the input string does not contain a comma. Continue to prompt until a valid string is entered. Note: If the input contains a comma, then assume that the input also contains two strings. (2 pts)

// Ex:
// Enter input string:
// Jill Allen
// Error: No comma in string.

// Enter input string:
// Jill, Allen

// (3) Extract the two words from the input string and remove any spaces. Store the strings in two separate variables and output the strings. (2 pts)

// Ex:
// Enter input string:
// Jill, Allen
// First word: Jill
// Second word: Allen

// (4) Using a loop, extend the program to handle multiple lines of input. Continue until the user enters q to quit. (2 pts)

// Ex:
// Enter input string:
// Jill, Allen
// First word: Jill
// Second word: Allen

// Enter input string:
// Golden , Monkey
// First word: Golden
// Second word: Monkey

// Enter input string:
// Washington,DC
// First word: Washington
// Second word: DC

// Enter input string:
// q

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: parsing_string.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 28, 2021
// Description: displays first and second word from user input

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userName;
   string firstWord;
   string secondWord;
   
   // user input
   cout << "Enter input string:" << endl;
   getline (cin, userName);
   
   // program continues until user enters the letter q
   while (userName != "q") {
               
      firstWord = userName.substr(0, userName.find(","));
      secondWord = userName.substr((userName.find(",") + 1), ((userName.size()-1) - userName.find(",")));
      
      if (firstWord.find(" ") < firstWord.size()) {
         firstWord.replace(userName.find(" "), 1, "");
      }
      
      if (secondWord.find(" ") < secondWord.size()) {
         secondWord.replace(userName.find(" "), 1, "");
      }
      
      // prints the first and second word if comma exists in the string
      if (userName.find(",") < userName.size()) {
         cout << "First word: " << firstWord << endl;
         cout << "Second word: " << secondWord << endl;
      } 
      
      // shows error if there's no comma in the string
      else {
         cout << "Error: No comma in string." << endl;
      }
      
      // takes user input
      cout << endl << "Enter input string:" << endl;
      getline (cin, userName);
   } 
    
   return 0;
}