// Many documents use a specific format for a person's name. Write a program whose input is:
// firstName middleName lastName
// and whose output is:
// lastName, firstInitial.middleInitial.

// Ex: If the input is:
// Pat Silly Doe
// the output is:
// Doe, P.S.

// If the input has the form: firstName lastName
// the output is:
// lastName, firstInitial.

// Ex: If the input is:
// Julia Clark
// the output is:
// Clark, J.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: name_format.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: Formats name to "lastName, firstNameInitial middleNameInitial"
//              example: if the input is "Pat Silly Doe", the output is "Doe, P.S."

#include <iostream>
#include <string>
using namespace std;

int main() {

   string firstName, middleName, lastName;
   
   cin >> firstName;
   cin >> middleName;
   cin >> lastName;
   
   if (lastName == "") { // if there's no value in lastName, then middleName is used as the last name.
      cout << middleName << ", " << firstName.at(0) << "." << endl;
   }
   else {
      cout << lastName << ", "<< firstName.at(0) << "." << middleName.at(0) << "." << endl;
   }

   return 0;
}