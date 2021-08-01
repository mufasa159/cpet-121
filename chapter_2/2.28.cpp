// The following equations estimate the calories burned when exercising (source):
// Women: Calories = ( (Age x 0.074) — (Weight x 0.05741) + (Heart Rate x 0.4472) — 20.4022 ) x Time / 4.184
// Men: Calories = ( (Age x 0.2017) + (Weight x 0.09036) + (Heart Rate x 0.6309) — 55.0969 ) x Time / 4.184

// Write a program with inputs age (years), weight (pounds), heart rate (beats per minute), and time (minutes), 
// respectively. Output calories burned for women and men.

// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements.

// Ex: If the input is:
// 49 155 148 60
// the output is:
// Women: 580.94 calories
// Men: 891.47 calories

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
   double age;       // years
   double weight;    // pounds
   double heartRate; // beats per minute
   double time;      // minutes
   
   cin >> age;
   cin >> weight;
   cin >> heartRate;
   cin >> time;

   cout << fixed << setprecision(2);
   cout << "Women: " << ((age * 0.074) - (weight * 0.05741) + (heartRate * 0.4472) - 20.4022 ) * time / 4.184 << " calories" << endl;
   cout << "Men: " << ((age * 0.2017) + (weight * 0.09036) + (heartRate * 0.6309) - 55.0969 ) * time / 4.184 << " calories" << endl;
   
   return 0;
}
