// Many websites let users make reservations (hotel, car, flights, etc.). When a user selects a date, the next 
// day is often automatically selected (for hotel checkout, car return, flight return, etc.). Given a date in the 
// form of three integers, output the next date. If the input is 1 15 2017, the output should be 1 16 2017. If the 
// input is 8 31 2017, the output should be 9 1 2017. Ignore leap years.

// Hints:
// Group the months based on number of days. Then create an if-else statement for each case.
// Note that 12 (December) is a special case; after the last day, the next month is 1 (January) and is the next year.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: next_date.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: prints the next date based on date received from the user

#include <iostream>

using namespace std;

int LastDay(int userMonth) {
   int day;
   switch (userMonth) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
         day = 31;
         break;
      case 2:
         day = 28;
         break;
      default:
         day = 30;
   }
   return day;
}
      

int main() {
   // declaring variables
   int userMonth;
   int userDay;
   int userYear;
   bool lastMonth = false;
   bool lastYear = false;
   
   // get user-input
   cin >> userMonth;
   cin >> userDay;
   cin >> userYear;
   
   // day validation
   if (userDay > 0 && userDay <= LastDay(userMonth)) {
      if (userDay == LastDay(userMonth)) { // check if it's the last day of the month
         userDay = 1;
         lastMonth = true;
      } else {  // increasing value
         ++userDay;
      }
   }
   
   // month validation
   if (userMonth > 0 && userMonth < 13) {
      if (userMonth == 12) {
         userMonth = 1;
         lastYear = true;
      } else if (lastMonth) {
         ++userMonth;
      }
   }
   
   // year validation
   if (userYear > 0 && lastYear) {
      ++userYear;  // increases if it's the last day of december
   }
   
   cout << userMonth << " " << userDay << " " << userYear << endl;

   return 0;
}