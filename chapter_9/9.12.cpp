// Write a C++ program the contains three functions:
// The first function reads in a series of user floating point numbers from a data file name "data1GHZ.dat" 
// until the end -of-file is reached. These numbers are placed into a float-vector and returned to main().
// The second function takes the float-vector and sorts it in order using the Selection Sort Algorithm. 
// This sorted vector is returned to main().
// The third function takes the sorted vector and prints the numbers to the console, one per line. The 
// numbers should be printed using fixed notation with (2) decimals points of precision.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: selection_sort.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: Sorts float values in a file using selection sort algorithm

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

// reads values from assigned file and returns those values as a vector
vector<float> GetNumbers(string fileName) {
   ifstream data;
   float temp;
   vector<float> nums;     // for storing values from the file
   
   data.open(fileName);    // opening file
   
   if (!data.is_open()) {  // check for error
      cout << "Could not open file" << endl;
      exit(1);
   }
   
   // keep reading data from the file until it reaches the end
   data >> temp;
   while (!data.fail()) {
      nums.push_back(temp); // append that value to nums vector
      data >> temp;         // get a single value from the file
   }   
   
   return nums;
}

// sort values of assigned vector using selection sort and returns the sorted data
void SelectionSort(vector<float>& dataSet) {
   int length = dataSet.size();
   int i, j;
   float temp;     // stores values temporarily for swapping
   int minIndex;   // stores the smallest index
   
   for (i = 0; i < length - 1; ++i) {
      minIndex = i;

      // find index of the smallest value
      for (j = i + 1; j < length; ++j) {
         if (dataSet.at(j) > dataSet.at(minIndex)) {
            minIndex = j;
         }
      }
      
      // swap dataSet.at(i) and dataSet.at(indexSmallest)
      temp = dataSet.at(i);
      dataSet.at(i) = dataSet.at(minIndex);
      dataSet.at(minIndex) = temp;
   }
   
   return;
}


// print values of assigned vector on screen
void Print(vector<float> dataSet) {
   int length = dataSet.size();
   for (int i = 0; i < length; ++i) {  // prints each value in the vector
      cout << fixed << setprecision(2) << dataSet.at(i) << endl;
   }
}
   

int main() {
   
   // declaring necessary variables
   string fileName = "data1GHZ.dat";
   vector<float> dataSet;
   
   dataSet = GetNumbers(fileName); // stores data from the file
   SelectionSort(dataSet);         // sorts data from the dataSet   
   Print(dataSet);                 // prints sorted data on screen

   return 0;
}