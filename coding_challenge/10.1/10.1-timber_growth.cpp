// Title: timber_regrowth.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 16th, 2021
// Description: The program determines the time it takes to reforest/regrow a timber lot after  
//              the trees have been harvested.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   int timberLotSize;    // timber lot size in acres
   double regrowthRate;  // regrowth rate in percentage
   char displayOption;   // display options 'A', 'B', or 'C'
   
   const double UNCUT_RATE = 0.35;
   long double leftAfterHarvest;
   
   // user inputs
   cin >> timberLotSize;
   cin >> regrowthRate;
   cin >> displayOption;
   
   leftAfterHarvest = timberLotSize * UNCUT_RATE;  // timber left standing after the harvest
   regrowthRate /= 100;                            // converting regrowth percentage to decimal
   
   // program output
   switch (displayOption) {
      
      // option a: prints total timber growth per year for 20 years  
      case 'A':
      case 'a':                
         for (int year = 0; year <= 20; ++year) {
            cout << "Year = " << setw(3) << fixed << year;
            cout << ", Regrowth = " << setw(9) << setprecision(2) << leftAfterHarvest << " Acres" << endl;
            leftAfterHarvest += (leftAfterHarvest * regrowthRate);
         }    
         break;
      
      // option b: prints total timber growth per year for 20 years, or until the lot size is almost full
      case 'B':
      case 'b':
         for (int year = 0; year <= 20; ++year) {
            if (leftAfterHarvest <= timberLotSize) {
               cout << "Year = " << setw(3) << fixed << year;
               cout << ", Regrowth = " << setw(9) << setprecision(2) << leftAfterHarvest << " Acres" << endl;
               leftAfterHarvest += (leftAfterHarvest * regrowthRate);
            }
         }
         break;
      
      // option c: prints total timber growth and number of years when the lot size is full
      case 'C':
      case 'c':
         {
            int year = 0;
            double totalAreaRegrown; 
            while (leftAfterHarvest <= timberLotSize) {
               totalAreaRegrown = leftAfterHarvest;
               leftAfterHarvest += (leftAfterHarvest * regrowthRate);
               
               // breaks the loop if total harvested area after regrowth is higher than lotSize
               if (leftAfterHarvest > timberLotSize) {
                  break;
               }               
               ++year;
            }
            cout << "Year = " << setw(3) << fixed << year;
            cout << ", Regrowth = " << setw(9) << setprecision(2) << totalAreaRegrown << " Acres" << endl;
         }
         break;
      
      // executes if anything else other than option a, b or c is entered
      default:
         cout << "ILLEGAL OPTION!" << endl;
         break;
   }
   
   return 0;
}

