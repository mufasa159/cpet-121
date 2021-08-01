// Write a program whose inputs are three integers, and whose output is the smallest of the three values.
// Ex: If the input is:
// 7 15 3
// the output is:
// 3

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: smallest_number.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: Finds the smallest number

#include <iostream>
using namespace std;

int main() {
   
   int a, b, c;
   int minValue;
   
   cin >> a;
   cin >> b;
   cin >> c;
   
   if (a < b && a < c) {
      minValue = a;
   }
   else if (b < a && b < c) {
      minValue = b;
   }
   else if (c < b && c < a) {
      minValue = c;
   }
   else {
      minValue = a;
   }
   
   cout << minValue << endl;

   return 0;
}