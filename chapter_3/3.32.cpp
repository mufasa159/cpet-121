// Edit lines 23, 29, 35 with appropriate 'if' statements to make the program function as intended.
// Read the inline comments to determine what values to use for comparison.

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Chapter 3
// Rainfall Lab
// CPET.121.x
// Summer 2020
// Description: A lab designed to teach program branching.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Used for cin and cout
#include <iostream>
using namespace std;

int main() {
   // Line 17 is a loop, covered in chapter 4.
   // Don't worry about how it works for now, just know that
   // it will increment the rainfall value from 0 to 15.
   for (int rainfall = 0; rainfall <= 15; rainfall++)
   {
      // Print out the current rainfall value
      cout << rainfall << " inches:\t";
      
      // If rainfall is below 2 inches, it is considered low
      if (rainfall < 2)
      {
         cout << "Rainfall is low\n";
      }
      
      // If rainfall is above 10 inches, it is considered high
      else if (rainfall > 10)
      {
         cout << "Rainfall is high\n";
      }
      
      // Otherwise, rainfall is considered moderate
      else
      {
         cout << "Rainfall is moderate\n";
      }
   }

   return 0;
}