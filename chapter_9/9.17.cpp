// Write a function Ascend3 with three integer reference parameters, that sorts the values into ascending order. 
// Ex: If x = 5, y = 2, and z = 7, after the call Ascend3(x, y, z), the new values will be x = 2, y = 5, and z = 7.

// Hints:
// Don't forget to declare Ascend3's parameters as pass-by-reference (using &). Otherwise, the function won't be able to change the values of the passed arguments. Also, return type should be void.
// One approach puts the three values into a vector, then sorts the vector. We won't be describing that approach here. Instead, we'll use branches.
// One solution approach realizes that only 6 possible orderings of xyz exist: xyz, xzy, yxz, yzx, zxy, zyx. An if-else an be used to detect which order x, y, z are initially in.
// Once detected, three variables lowVal, midVal, and highVal can be assigned. Note: Don't assign the parameters right away, because you'll overwrite a value that is still needed.
// After the if-else, those lowVal, midVal, and highVal variables are ready. So just set the x parameter with lowVal, y with midVal, and z with highVal.
// Be aware that two values could be equal. So use <= rather than < in your comparisons.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: sort_three_values.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: the following program sorts three user-given value and stores them in individual variables

#include <iostream>
#include <vector>

using namespace std;

// get three integer variables and reassign sorted values to the variables respectively
void Ascend3(int& x, int& y, int& z) {
   
   int temp;                     // temporarily holds veriable
   int i, j;                     // to be used in for-loops
   bool swapped;                 // for bubble sort
   const int LENGTH = 3;         // length of the vector
   vector<int> newSet(LENGTH);   // stores the parameter values
   
   // assigning values from the parameter to the vector
   newSet.at(0) = x;
   newSet.at(1) = y;
   newSet.at(2) = z;

   // bubble sort algorithm
   for (i = 0; i < LENGTH - 1; ++i) {
      swapped = false;
      for (j = 0; j < LENGTH - 1; ++j) {
         if (newSet.at(j) > newSet.at(j + 1)) {
            // swap values
            temp = newSet.at(j + 1);
            newSet.at(j + 1) = newSet.at(j);
            newSet.at(j) = temp;
            swapped = true;
         }
      }
      // check if everything is sorted
      if (!swapped) {
         break;
      }
   }
   
   // assignign new sorted values to the parameter variables
   x = newSet.at(0);
   y = newSet.at(1);
   z = newSet.at(2);
   
   return;
}

int main() {
   // declaring variables
   int x, y, z;
   
   // user input
   cin >> x; 
   cin >> y;
   cin >> z;
   
   // function call for sorting
   Ascend3(x, y, z);
   
   // print sorted values
   cout << x << " " << y << " " << z << endl;


   return 0;
}