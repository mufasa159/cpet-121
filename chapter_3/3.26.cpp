// Write a program with total change amount as an integer input, and output the change 
// using the fewest coins, one coin type per line. The coin types are Dollars, Quarters, Dimes, 
// Nickels, and Pennies. Use singular and plural coin names as appropriate, like 1 Penny 
// vs. 2 Pennies.

// Ex: If the input is:
// 0 
// (or less than 0), the output is:
// No change 

// Ex: If the input is:
// 45
// the output is:
// 1 Quarter
// 2 Dimes 

// Title: exact_change.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11th, 2021
// Description: Calculates the change using the fewest coins possible

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

#include <iostream>
using namespace std;

int main() {
   
   int userInput;
   int dollar;
   int quarter;
   int dime;
   int nickel;
   int penny;
   
   cin >> userInput;
   
   // calculates the amount of coins needed from each type
   dollar = userInput / 100;
   quarter = (userInput % 100) / 25;
   dime = ((userInput % 100) % 25) / 10;
   nickel = (((userInput % 100) % 25) % 10) / 5;
   penny = (((userInput % 100) % 25) % 10) % 5;
   
   // chooses between singular and plural form of output based on the value
   // checks dollars
   if (dollar == 1) {
      cout << dollar << " Dollar" << endl;
   }
   else if (dollar > 1) {
      cout << dollar << " Dollars" << endl;
   }
   
   // checks quarter
   if (quarter == 1) {
      cout << quarter << " Quarter" << endl;
   }
   else if (quarter > 1) {
      cout << quarter << " Quarters" << endl;
   }
   
   // checks dime
   if (dime == 1) {
      cout << dime << " Dime" << endl;
   }
   else if (dime > 1) {
      cout << dime << " Dimes" << endl;
   }
   
   // checks nickel
   if (nickel == 1) {
      cout << nickel << " Nickel" << endl;
   }
   else if (nickel > 1) {
      cout << nickel << " Nickels" << endl;
   }
      
   // checks penny
   if (penny == 1) {
      cout << penny << " Penny" << endl;
   }
   else if (penny > 1) {
      cout << penny << " Pennies" << endl;
   }
   
   // checks if userInput is 0
   if (dollar == 0 && quarter == 0 && dime == 0 && nickel == 0 && penny == 0) {
      cout << "No change" << endl;
   }

   return 0;
}