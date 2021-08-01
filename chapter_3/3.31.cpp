// (1) Get a line of text from the user. Output that line. (1 pt)
// Ex:
// Enter text:
// IDK how that happened. TTYL. 
// You entered: IDK how that happened. TTYL.

// (2) Output the line again, this time expanding common text message abbreviations. (5 pts)

// Ex:
// Enter text:
// IDK how that happened. TTYL. 
// You entered: IDK how that happened. TTYL.
// Expanded: I don't know how that happened. talk to you later.

// Support these abbreviations:
// BFF -- best friend forever
// IDK -- I don't know
// JK -- just kidding
// TMI -- too much information
// TTYL -- talk to you later

// Note: If an abbreviation appears twice, only expand its first instance

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: text_message_expander.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: Expands text messages by decoding abberviated words

#include <iostream>
#include <string>
using namespace std;

int main() {

   string userInput;
   string abbreviation[] = {"BFF", "IDK", "JK", "TMI", "TTYL"};
   string unabbreviated[] = {"best friend forever", "I don't know", "just kidding", "too much information", "talk to you later"};
   
   cout << "Enter text:" << endl;
   getline(cin, userInput);
   cout << "You entered: " << userInput << endl;
   
   // expands text msg if any abbreviated word is found in userInput
   for (int i = 0; i < 5; i++) {
      if ((userInput.find(abbreviation[i])) < userInput.size()) {
         userInput.replace((userInput.find(abbreviation[i])), abbreviation[i].size(), unabbreviated[i]);
      }
   }
   
   cout << "Expanded: " << userInput << endl;

   return 0;
}