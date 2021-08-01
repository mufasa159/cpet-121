// The Fibonacci sequence begins with 0 and then 1 follows. All subsequent values are the sum of the 
// previous two, for example: 0, 1, 1, 2, 3, 5, 8, 13. Complete the Fibonacci() function, which takes 
// in an index, n, and returns the nth value in the sequence. Any negative index values should return -1.

// Ex: If the input is:
// 7
// the output is:
// Fibonacci(7) is 13

// Note: Use recursion and DO NOT use any loops.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: fibonacci_sequence_recursive.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 29, 2021
// Description: returns the nth value of an integer in fibonacci sequence

#include <iostream>
using namespace std;

// Name: Fibonacci()
// Input: integer
// Output: value of that integer in fibonacci sequence 
// Purpose: to find the fibonacci value
int Fibonacci(int n) {
   if (n < 0) {  // for negative numbers
      return -1;
   } else if (n < 2) { // for 0 and 1
      return n;
   } else {
      return Fibonacci(n-1) + Fibonacci(n-2);
   }
      
}

int main() {
   // receives index from the user
   int startNum;
   cin >> startNum;
   
   // prints the fibonacci value in that index
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;
   
   return 0;
}
