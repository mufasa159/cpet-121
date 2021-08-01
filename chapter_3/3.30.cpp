// (1) Use getline() to get a line of user input into a string. Output the line. (3 pts)

// Ex:
// Enter text:
// IDK if I'll go. It's my BFF's birthday. 
// You entered: IDK if I'll go. It's my BFF's birthday.

// (2) Search the string (using find()) for common abbreviations and print a list of each 
// found abbreviation along with its decoded meaning. (3 pts)

// Ex:
// Enter text:
// IDK if I'll go. It's my BFF's birthday. 
// You entered: IDK if I'll go. It's my BFF's birthday. 
// BFF: best friend forever
// IDK: I don't know

// Support these abbreviations:
// BFF -- best friend forever
// IDK -- I don't know
// JK -- just kidding
// TMI -- too much information
// TTYL -- talk to you later

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: text_message_decoder.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: decodes abbreviations in text messages

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
   
   // checks if any items in the abbreviated array exist in the input
   // then returns its unabbreviated version and displays the output
   for (int i = 0; i < 5; i++) {
      if ((userInput.find(abbreviation[i])) < userInput.size()) {
         cout << abbreviation[i] << ": " << unabbreviated[i] << endl;
      }
   }


   return 0;
}