// Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens 
// (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated 
// by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90.

// Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary 
// highway it serves. Also indicate if the (primary) highway runs north/south or east/west.

// Ex: If the input is:
// 90
// the output is:
// I-90 is primary, going east/west.

// Ex: If the input is:
// 290
// the output is:
// I-290 is auxiliary, serving I-90, going east/west.

// Ex: If the input is:
// 0
// the output is:
// 0 is not a valid interstate highway number. 

// Ex: If the input is:
// 200
// the output is:
// 200 is not a valid interstate highway number. 

// See Wikipedia [https://en.wikipedia.org/wiki/Interstate_Highway_System#Numbering_system] for more info on highway numbering.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: interstate_highway_numbers.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: Returns what type of interstate highway the user input is.

#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   string direction;
   int divisor;
   
   cin >> highwayNumber;
      
   // determining even/odd and direction 
   if (highwayNumber % 2 != 0 ) {
      direction = "north/south.";
   }
   else {
      direction = "east/west.";
   }

   // determining final output
   if (0 < highwayNumber && highwayNumber < 100) {
      cout << "I-" << highwayNumber << " is primary, going " << direction << endl;
   }
   else if (99 < highwayNumber && highwayNumber < 999) {
      if (highwayNumber < 200) {
         divisor = 100;
      } else if (highwayNumber < 300) {
         divisor = 200;
      } else if (highwayNumber < 400) {
         divisor = 300;
      } else if (highwayNumber < 500) {
         divisor = 400;
      } else if (highwayNumber < 600) {
         divisor = 500;
      } else if (highwayNumber < 700) {
         divisor = 600;
      } else if (highwayNumber < 800) {
         divisor = 700;
      } else if (highwayNumber < 900) {
         divisor = 800;
      } else if (highwayNumber < 1000) {
         divisor = 900;
      } else {
         divisor = 0;
      }
      
      if (highwayNumber % divisor == 0) {
         cout << highwayNumber << " is not a valid interstate highway number." << endl;
      }
      else {
         cout << "I-" << highwayNumber << " is auxiliary, serving I-";
         highwayNumber %= divisor;
         cout << highwayNumber << ", going " << direction << endl;
      }
   }
   else {
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }

   return 0;
}
