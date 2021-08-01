// Write a program using integers userNum and x as input, and output userNum divided by x three times.

// Ex: If the input is:
// 2000 2
// the output is:
// 1000 500 250

// Note: In C++, integer division discards fractions. Ex: 6 / 4 is 1 (the 0.5 is discarded).

#include <iostream>
using namespace std;

int main() {

   int userNum;
   int x;
   
   cin >> userNum;
   cin >> x;
   
   cout << userNum / x << " " << (userNum / x) / x << " " << ((userNum / x) /x) / x << endl;

   return 0;
}
