// Write a program that takes a first name as the input, and outputs a welcome message to that name.

// Ex: If the input is:
// Pat
// the output is:
// Hello Pat, and welcome to CS Online!

#include <iostream>
#include <string>
using namespace std;

int main() {
   string userName;
   
   cin >> userName;
   /* Type your code here. */
   cout << "Hello " << userName << ", and welcome to CS Online!" << endl;

   return 0;
}
