// Write a C++ program the prompts the user for a N value and then generates an integer-vector of N 
// random number (0-49). Print print these Pre-Sorted values to the console. Using the Insertion Sort 
// Algorithm sort these values into Ascending order. Once sorted, print the Post-Sort values to the console.
// If the value entered is greater-then 15, print the message "Too Many Numbers" and terminate the program.
// For testing purposes, set the random number seed value to 1234.

// If the input was:
// 5
// then the output is:
// Pre-Sort:
// 14 39 5 17 10 
// Post-Sort:
// 5 10 14 17 39 

// If the input was:
// 17
// then the output is:
// Too Many Numbers

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: insertion_sort.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 31, 2021
// Description: insertion sort algorithm for random numbers

#include <iostream>
#include <vector>

using namespace std;

// Name: Generate()
// Input: integer vector
// Output: adds random numbers to the vector
// Purpose: to add random integer values to a vector.
void Generate(vector<int>& emptyDataSet) {
   int length = emptyDataSet.size();
   for (int i = 0; i < length; ++i) {
      emptyDataSet.at(i) = rand() % 50;
   }
   
   return;
}

// Name: Print()
// Input: integer vector
// Output: prints all the values in vector
// Purpose: to print the values in vector
void Print(vector<int> dataSet) {
   int length = dataSet.size();
   
   for (int i = 0; i < length; ++i) {
      cout << dataSet.at(i) << " ";
   }
   cout << endl;
}

// Name: InsertionSort()
// Input: integer vector
// Output: sorted values
// Purpose: to sort the data in the vector using insertion sort
void InsertionSort(vector<int>& dataSet) {
   int temp;
   int index;
   int length = dataSet.size();
   
   for (int i = 0; i < length; ++i) {
      index = i;

      while ((index > 0 && dataSet[index] < dataSet[index - 1])) {
         // swap dataSet.at(i) and dataSet(i - 1)
         temp = dataSet.at(index);
         dataSet[index] = dataSet[index - 1];
         dataSet[index - 1] = temp;
         --index;
      }
   }
   return;
}

int main() {
   // get n value from the user
   int n;
   cin >> n;
   
   vector<int> dataSet(n); // stores the dataset
   
   srand(1234);
   
   if (n < 15 && n > 0) {
      
      // generate and print random numbers
      cout << "Pre-Sort:" << endl;
      Generate(dataSet);
      Print(dataSet);
      
      // sort and print numbers in the vector
      cout << "Post-Sort:" << endl;
      InsertionSort(dataSet);
      Print(dataSet);
   } 
   // shows error if n value is higher than 15
   else {
      cout << "Too Many Numbers" << endl;
   }

   return 0;
}