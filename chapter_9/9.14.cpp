// 9.14 Review: Branches: Next license plate number
// A state's Department of Motor Vehicles needs a program to generate license plate numbers. 
// A license plate number consists of three letters followed by three digits, as in CBJ523. 
// (So "number" is a bit inaccurate, but that's the standard word used for license plates). 
// The plate numbers are given out in sequence, so given the current number, the program should 
// output the next number. If the input is CBJ523, the output should be CBJ524. If the input 
// is CBJ999, the output should be CBK000. For the last number ZZZ999, the next is AAA000.

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Title: next_license_plate_number.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: Prints the next license plate number on screen

#include <iostream>
using namespace std;

int main() {
   // declaring constant values
   const char MAX_NUM = '9';
   const char MIN_NUM = '0';
   const char MAX_ALPHA = 'Z';
   const char MIN_ALPHA = 'A';
   
   // temporarily holds min and max values
   char maxValue;
   char minValue;
   
   // determines if carry is needed
   bool reset = false;
   
   // get license plate number from the user
   string plateNum;
   cin >> plateNum;
   
   // increase the 6th digit in license plate number
   if (plateNum[5] < MAX_NUM) {
      ++plateNum[5];
   } else {
      plateNum[5] = '0';
      reset = true;
   }
   
   // increases rest of the digit depending on 6th digit
   for (int i = 4; i >= 0; --i) {
      
      // check if carry is needed
      if (reset) {         
         
         // check whether the char is a digit or an alphabet
         // then assign their corresponding min and max values
         if (isdigit(plateNum[i])) {
            maxValue = MAX_NUM;
            minValue = MIN_NUM;
         } else {
            maxValue = MAX_ALPHA;
            minValue = MIN_ALPHA;
         }
         
         // increase values
         if (plateNum[i] < maxValue) {
            ++plateNum[i];
            reset = false;
         } else {
            plateNum[i] = minValue;
            reset = true;
         }
      }
   }
   
   // print the next license plate number
   cout << plateNum << endl;
   
   return 0;
}