// In many signal processing applications, it is common to need to know the average and 
// standard deviation after each sample is gathered. Because of limited hardware, and many 
// samples being gathered (many thousands of samples sometimes), it's not practical to have 
// to add up all the samples every time a new one is acquired.

// The solution is to store the sum after each new sample is gathered. Then to calculate the 
// new average, just add the new sample to the sum, and divide by the sample count. This requires 
// just 2 calculations per sample, rather than thousands. A similar approach exists for 
// standard deviation calculations.

// In this lab, 5 grades will be entered, and the running average will displayed after each.
// Edit lines 31 and 34 to complete the running average calculation loop.

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Chapter 4
// Running Average Lab
// CPET.121.x
// Summer 2020
// Description: A lab designed to teach running averages.
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Used for cin and cout
#include <iostream>
using namespace std;


int main() {
   // Variable for storing the entered grade
   int grade = 0;
   
   // Variable for storing the grade total
   int runningSum = 0;
   
   // The grade average
   float average = 0.0;

   // Get 5 grades entered
   for (int i = 1; i <= 5; i++)
   {
      // Enter grade
      cin >> grade;
      
      // Add entered grade to running sum
      runningSum += grade;
      
      // Recompute average and display
      average = runningSum / static_cast<double>(i);
      cout << "Running average of " << i << " grade(s) is " << average << endl;
   }
   
   return 0;
}