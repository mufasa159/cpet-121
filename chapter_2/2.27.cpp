// Driving is expensive. Write a program with a car's miles/gallon and gas dollars/gallon (both doubles) as input, 
// and output the gas cost for 20 miles, 75 miles, and 500 miles.

// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements. Note: End with a newline.

// Ex: If the input is:
// 20.0 3.1599
// the output is:
// 3.16 11.85 79.00

// Note: Real per-mile cost would also include maintenance and depreciation.

#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

int main() {

   double milesPerGallon;
   double dollarsPerGallon;
   double price;
   
   cin >> milesPerGallon;
   cin >> dollarsPerGallon;
   
   price = dollarsPerGallon / milesPerGallon;
   
   cout << fixed << setprecision(2);
   cout << price * 20.0 << " " << price * 75.0 << " " << price * 500.0 << endl;

   return 0;
}
