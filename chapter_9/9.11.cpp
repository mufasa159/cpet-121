// Write a C++ program the contains three functions:
// The first function reads in a series of user IDs, one per line, until a (-1) is read. These user IDs are placed into a string-vector and returned to main().
// The second function takes the string-vector and sorts it in ascending order using the Bubble Sort Algorithm. This sorted vector is returned to main().
// The third function takes the sorted vector and prints the user IDs to the console, one ID per line.

// Ex. If the input is:
// kaylasimms
// julia
// myron1994
// kaylajones
// -1

// the output is:
// julia
// kaylajones
// kaylasimms
// myron1994

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: bubble_sort.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: sorts string vector using bubble sort algorithm

#include <string>
#include <vector>
#include <iostream>

using namespace std;

// Name: GetUserID()
// Input: none
// Output: returns all the user-input strings in a vector
// Purpose: to collect userIDs from the user
vector<string> GetUserID(void) {
   vector<string> userIDs;  // stores the user entered values
   
   string userID;
   cin >> userID;
   
   while (userID != "-1") {
      userIDs.push_back(userID);
      cin >> userID;
   }
   
   return userIDs;
}

// Name: BuubleSort()
// Input: string vector
// Output: sorted string vector
// Purpose: to sort the values in the vector using bubble sort algorithm
void BubbleSort(vector<string>& dataSet) {
   int length = dataSet.size() - 1;
   string temp;
   bool swapped;
   int i, j;
   
   for (i = 0; i < length; ++i) {
      swapped = false;
      for (j = 0; j < length; ++j) {       
         if (dataSet.at(j) > dataSet.at(j + 1)) { // swap strings if needed
            temp = dataSet.at(j + 1);
            dataSet.at(j + 1) = dataSet.at(j);
            dataSet.at(j) = temp;
            swapped = true;
         }
      }
      if (!swapped) {
         break;
      }
      
   }
   return;
}

// Name: Print()
// Input: string vector
// Output: prints the values in the vector
// Purpose: to print all the values stored in the vector
void Print(vector<string> dataSet) {
   int length = dataSet.size();
   for (int i = 0; i < length; ++i) {
      cout << dataSet.at(i) << endl;
   }
}
   

int main() {
   vector<string> dataSet;
   
   // get user ids from the user and store them in dataSet
   dataSet = GetUserID();
   
   // sort the user entered strings
   BubbleSort(dataSet);
   
   // print the values in dataSet
   Print(dataSet);

   return 0;
}