// Write a program that simulates flipping a coin to make decisions. The input is how many decisions are needed, 
// and the output is either heads or tails. Assume the input is a value greater than 0.

// Ex: If the input is:
// 3
// the output is:
// heads
// tails
// heads

// For reproducibility needed for auto-grading, seed the program with a value of 2. In a real program, you would seed 
// with the current time. In that case, every program's output would be different, which is what is desired but can't be auto-graded.
// Note: A common student mistake is to call srand() before each call to rand(). But seeding should only be done once, at the 
// start of the program, after which rand() can be called any number of times.

// Your program must define and call the following function that randomly picks 0 or 1 and returns "heads" or "tails". Assume the value 0 represents "heads" and 1 represents "tails".
// string HeadsOrTails()

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: flip_a_coin.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 24th, 2021
// Description: a program that simulates flipping a coin to make decisions
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <cstdlib>
using namespace std;

// Name: HeadsOrTails()
// Input: number of decisions
// Output: the output is either heads or tails
// Purpose: to simulate flipping a coin
string HeadsOrTails() {
   int randomVal = rand() % 2;
   string coinSide;
   
   if (randomVal == 0) {
      coinSide = "heads";
   } else {
      coinSide = "tails";
   }
   
   return coinSide;
}

int main() {
   // user input
   unsigned int userInt;
   unsigned int i;
   cin >> userInt;
   
   srand(2);  // Unique seed
   
   // repeats the flip
   for (i = 0; i < userInt; ++i) {
      cout << HeadsOrTails() << endl;
   }

   return 0;
}
