// When analyzing data sets, such as data for human heights or for human weights, a common step is 
// to adjust the data. This adjustment can be done by normalizing to values between 0 and 1, or throwing away outliers.
// For this program, adjust the values by dividing all values by the largest value. The input begins with 
// an integer indicating the number of floating-point values that follow.
// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements.

// Ex: If the input is:
// 5 30.0 50.0 10.0 100.0 65.0
// the output is:
// 0.30 0.50 0.10 1.00 0.65 

// The 5 indicates that there are five floating-point values in the list, namely 30.0, 50.0, 10.0, 100.0, and 
// 65.0. 100.0 is the largest value in the list, so each value is divided by 100.0.
// For coding simplicity, follow every output value by a space, including the last one.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: normalizer.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 21, 2021
// Description: adjusts data by normalizing values between 0 and 1

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
   double numInput;    // user input
   double maxNum = 0;  // stores the maximum value in the vector
   int i;              // for for-loops
   
   // stores the length of vector
   int length;
   cin >> length;
   
   vector<double> data(length); // vector to store all user-entered values
   
   // takes input and finds the max number
   for (i = 0; i < length; ++i) {
      cin >> numInput;
      data.at(i) = numInput;
      if (numInput > maxNum) {
         maxNum = numInput;
      }
   }
   
   // prints the normalized data
   for (i = 0; i < length; ++i) {
      data.at(i) /= maxNum;
      cout << fixed << setprecision(2);
      cout << data.at(i) << " ";
   }
   
   cout << endl;

   return 0;
}
