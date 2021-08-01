// Write a program whose input is two integers, and whose output is the first integer 
// and subsequent increments of 5 as long as the value is less than or equal to the second integer.

// Ex: If the input is:
// -15 10
// the output is:
// -15 -10 -5 0 5 10

// Ex: If the second integer is less than the first as in:
// 20 5
// the output is:
// Second integer can't be less than the first.

// For coding simplicity, output a space after every integer, including the last.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

#include <iostream>
using namespace std;

int main() {
   int userInput1;
   int userInput2;
   const int INCREMENTAL = 5;
   
   cin >> userInput1;
   cin >> userInput2;
   
   // error handler for negative numbers
   if (userInput2 < userInput1) {
      cout << "Second integer can't be less than the first." << endl;
   }
   
   // increases userInput1 by 5 until it reaches userInput2
   else {
      while (userInput1 <= userInput2){
         cout << userInput1 << " ";
         userInput1 += INCREMENTAL;
      }
      
      cout << endl;
   }
   

   return 0;
}
