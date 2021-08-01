// Websites commonly require a password that satisfies several requirements. Write a program that checks if 
// an input string satisfies the following (error message is shown for each)

// At least 8 characters (Too short)
// At least one letter (Missing letter)
// At least one number (Missing number)
// At least one of these special characters: !, #, % (Missing special)

// Output OK, or all related error messages (in above order). If the input string is "Hello", the output is:
// Too short
// Missing number
// Missing special
// Hints:

// Declare a boolean variable for each requirement.
// Use a for loop to visit each character, setting the corresponding boolean to true if satisfied (length is done differently though).
// Use functions in the cctype library (must include the library first) to detect if a character is a letter or a number.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: password_requirment.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: The following program checks if a password meets all the requirements

#include <iostream>
using namespace std;

int main() {
   // declaring variables
   int const MIN_LENGTH = 8;
   bool leastCharacter, alphabet, digit, specialCharacter;
   
   // default values for boolean
   leastCharacter = false;
   alphabet = false;
   digit = false;
   specialCharacter = false;
   
   // get password from the user
   string password;
   cin >> password;
   
   // store the length of password
   int length = password.size();
   
   // check if password length meets the requirement
   if (length >= MIN_LENGTH) {
      leastCharacter = true;
   }
   
   for (int i = 0; i < length; ++i) {
      // check if an alphabet exists
      if (isalpha(password[i])) {
         alphabet = true;
      }
      
      // check if a number exists
      if (isdigit(password[i])) {
         digit = true;
      }
      
      // check if a special character exists
      if (!isdigit(password[i]) && !isalpha(password[i])) {
         specialCharacter = true;
      }
   }
   
   // check for errors and print error messages
   if (!leastCharacter) {
      cout << "Too short" << endl;
   }
   
   if (!alphabet) {
      cout << "Missing letter" << endl;
   }
   
   if (!digit) {
      cout << "Missing number" << endl;
   }
   
   if (!specialCharacter) {
      cout << "Missing special" << endl;
   }
   
   if (leastCharacter && alphabet && digit && specialCharacter) {
      cout << "OK" << endl;
   }
   
   return 0;
}