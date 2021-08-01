// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: weather_balloon.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 17th, 2021
// Description: The following program calculates the value for, and time of occurrence, of, the two peaks 
//              and one valley altitudes for a weather balloon given the gas it is filled with.
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
   // altitude equation: (CA x t ^ 4) + (CB x t ^ 3) + (CC x t ^ 2) + (CD x t) + CE
   
   // for both hydrogen and helium
   const double CA = -0.12;
   double CB, CC; 
   const double CD = 4100;
   const int CE = 220;
   
   // for hydrogen
   const double H_CB = 12.0;
   const double H_CC = -380.0;
   
   // for helium
   const double HE_CB = 12.2;
   const double HE_CC = -380.5;
   
   double maxVal1 = 0;                    // first peak altitude
   double maxVal2 = 0;                    // second peak altitude
   double minVal = 0;                     // valley altitude
   double maxTime1, maxTime2, minTime;    // time in hours
   
   double value;  // for storing the equation's solutions during for-loop  
   double t;      // for storing time during for-loop
   
   // user input
   string gasName;
   cin >> gasName;
   
   // turns user input into lowercase
   transform(gasName.begin(), gasName.end(), gasName.begin(), ::tolower);
   
   // assigns hydrogen's values to CC and CB
   if (gasName == "hydrogen") {
      CB = H_CB;
      CC = H_CC;
   }
   // assigns helium's values to CC and CB
   else if (gasName == "helium") {
      CB = HE_CB;
      CC = HE_CC;
   }
   
   // if the user inputs anything other than "hydrogen" or "helium", the program shows error
   // and ends the rest of the process 
   else {
      cout << "Error... Illegal Gas Type" << endl;
      return 0;
   }
   
   // finds the first peak by continuing to calculate altitude until the
   // calculated solution is less than its previous value
   for (t = 0; t <= 48; t += 0.01) {   
      value = (CA * pow(t, 4)) + (CB * pow(t, 3)) + (CC * pow(t, 2)) + (CD * t) + CE;      
      if (value > maxVal1) {
         maxVal1 = value;
         maxTime1 = t;
      }
      else {
         break;
      }
   }
   
   // finds the valley altitude by continuing to calculate from the last ending time
   // until the calculated solution is higher than its previous value
   minVal = maxVal1;
   for (t = (maxTime1 + 0.01); t <= 48; t += 0.01) {   
      value = (CA * pow(t, 4)) + (CB * pow(t, 3)) + (CC * pow(t, 2)) + (CD * t) + CE;      
      if (value < minVal) {
         minVal = value;
         minTime = t;
      }
      else {
         break;
      }
   }
   
   // finds the second peak by continuing to calculate altitude from the last ending 
   // time until the calculated solution is less than its previous value
   maxVal2 = minVal;
   for (t = (minTime + 0.01); t <= 48; t += 0.01) {   
      value = (CA * pow(t, 4)) + (CB * pow(t, 3)) + (CC * pow(t, 2)) + (CD * t) + CE;      
      if (value > maxVal2) {
         maxVal2 = value;
         maxTime2 = t;
      }
      else {
         break;
      }
   }
   
   // final output of the two peaks and a valley altitude with their corresponding times
   cout << fixed << setprecision(2);
   cout << "Max_1 : " << maxVal1 << " @ " << maxTime1 << endl;
   cout << "Max_2 : " << maxVal2 << " @ " << maxTime2 << endl;
   cout << "Min   : " << minVal << " @ " << minTime << endl;

   return 0;
}
