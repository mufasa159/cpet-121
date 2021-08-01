// Numerous engineering and scientific applications require finding solutions to a set of 
// equations. Ex: 8x + 7y = 38 and 3x - 5y = -1 have a solution x = 3, y = 2. Given integer 
// coefficients of two linear equations with variables x and y, use brute force to find an 
// integer solution for x and y in the range -10 to 10.

// Ex: If the input is:
// 8 7 38
// 3 -5 -1
// the output is:
// x = 3, y = 2

// Use this brute force approach:

// For every value of x from -10 to 10
//    For every value of y from -10 to 10
//       Check if the current x and y satisfy both equations. If so, output the solution, and finish.
// Ex: If no solution is found, output:
// There is no solution

// You can assume the two equations have no more than one solution.
// Note: Elegant mathematical techniques exist to solve such linear equations. However, 
// for other kinds of equations or situations, brute force can be handy.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: bruteforce_equation_solver.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 14, 2021
// Description: Solves a set of equations using bruteforce method

#include <iostream>
using namespace std;

int main() {
   // first equation's coefficients 
   int xCoeff1;
   int xCoeff2;
   int sum2;
   
   // second equation's coefficients
   int yCoeff1;
   int yCoeff2;
   int sum1;
   
   // bruteforced calculation values
   int bruteSum1;
   int bruteSum2;
   
   bool ansFound = false;
   
   // user input for equation #1
   cin >> xCoeff1;
   cin >> yCoeff1;
   cin >> sum1;
   
   // user input for equation #2
   cin >> xCoeff2;
   cin >> yCoeff2;
   cin >> sum2;
   
   for (int xVal = -10; xVal <= 10; ++xVal) {
      for (int yVal = -10; yVal <= 10; ++yVal) {
         bruteSum1 = (xCoeff1 * xVal) + (yCoeff1 * yVal);
         bruteSum2 = (xCoeff2 * xVal) + (yCoeff2 * yVal);
         
         // checks if answer matches user input
         if (bruteSum1 == sum1 && bruteSum2 == sum2) {
            cout << "x = " << xVal << ", y = " << yVal << endl;
            ansFound = true;
            break;
         }
      }
   }
   
   // prints the following msg when no answer is found
   if (!ansFound) {
      cout << "There is no solution" << endl;
   }
   
   return 0;
}
