// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: class_statistics.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: August 2, 2021
// Description: The following program calculates mean, median and standard deviation of students' grades from three
//              different AP Physics class which are stored in three dat files (class_1.dat, class_2.dat and class_3.dat)
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// import necessary modules
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

// Name: GetData()
// Input: filenames (either 1 or 3 files)
// Output: a float vector with all the values from the files
// Purpose: to read and store data from a file to a vector
vector<float> GetData(string file1, string file2 = "null", string file3 = "null") {
   
   vector<float> dataSet; // store all values from the file(s)
   float temp;            // store temporary values from the file(s)
   
   // input file stream for three parameters
   ifstream firstFile;
   ifstream secondFile;
   ifstream thirdFile;
   
   // open the file assigned to the first parameter
   firstFile.open(file1.c_str());
   
   // error handler for 1st file
   if (!firstFile.is_open()) {
      cout << "Could not open " << file1 << endl;
      exit(1);
   }
   
   // read from the file and store them in the dataSet vector
   firstFile >> temp;
   while (!firstFile.fail()) { // keep reading until it reaches the end of file
      dataSet.push_back(temp);
      firstFile >> temp;
   }
   
   // close the file
   firstFile.close();
   
   // check if 2nd and 3rd files are assigned in the parameter
   if (file2 != "null" && file3 != "null") {
      
      // open 2nd and 3rd files
      secondFile.open(file2.c_str());
      thirdFile.open(file3.c_str());
      
      // error handlers for each file
      if (!secondFile.is_open()) {
         cout << "Could not open " << file2 << endl;
         exit(1);
      } else if (!thirdFile.is_open()) {
         cout << "Could not open " << file3 << endl;
         exit(1);
      }
      
      // read from the 2nd file and append those values to dataSet vector
      secondFile >> temp;
      while (!secondFile.fail()) { // keep reading until it reaches the end of file
         dataSet.push_back(temp);
         secondFile >> temp;
      }
      
      // read from the 3rd file and append those values to dataSet vector
      thirdFile >> temp;
      while (!thirdFile.fail()) { // keep reading until it reaches the end of file
         dataSet.push_back(temp);
         thirdFile >> temp;
      }
      
      // closes both files
      secondFile.close();
      thirdFile.close();
   }
   
   return dataSet;  // return dataSet vector which stores values from all the assigned files
}


// Name: Partition()
// Input: a vector, its starting index and its highest index as integers
// Output: the highest index of the low partition
// Purpose: help with creating partitions for the quick-sort
int Partition(vector<float>& data, int startIndex, int endIndex) {
   // declaring variables
   bool done = false;
   float temp;
   int a = startIndex;
   int b = endIndex;

   // find the pivot (middle value)
   int midpoint = startIndex + (endIndex - startIndex) / 2;
   float pivot = data.at(midpoint);
   
   while (!done) {
      // increment a if data.at(a) is less than pivot value
      while (data.at(a) < pivot) {
         ++a;
      }

      // decrement b if data.at(b) is higher than pivot value
      while (data.at(b) > pivot) {
         --b;
      }
      
      // check if there are any items remaining and then partition all values
      if (a >= b) {
         done = true;
      }
      else {
         // swap data.at(a) and data.at(b)
         temp = data.at(a);
         data.at(a) = data.at(b);
         data.at(b) = temp;

         // increment a and decrement b
         ++a;
         --b;
      }
   }

   return b;
}

// Name: QuickSort()
// Input: a float vector, its starting index, and the highest index
// Output: a float vector with sorted values in ascending order
// Purpose: to sort values in the vector and help with finding median value in CalculateMedian() function
void QuickSort(vector<float>& data, int startIndex, int endIndex) {
   int j;  // stores the location of last element in low partition.

   // check if 1 or zero elements (base case)
   if (startIndex >= endIndex) {
      return;
   }

   // partition the vector
   j = Partition(data, startIndex, endIndex);

   // sort low and high partitions using recursive method
   QuickSort(data, startIndex, j);
   QuickSort(data, j + 1, endIndex);
}


// Name: PrintData()
// Input: a float vector
// Output: prints all the values in vector
// Purpose: it was created mainly for testing
void PrintData(vector<float> data) {
   int length = data.size();
   for (int i = 0; i < length; ++i) {
      cout << data.at(i) << endl;
   }
}


// Name: CalculateMean()
// Input: a float vector
// Output: mean / average value
// Purpose: to find the mean value of a data set
float CalculateMean(vector<float> data) {
   int length = data.size();  // store size of the vector
   float sum = 0;             // store sum of all the values
   float mean;                // store mean value
   
   // calculate sum of the values
   for (int i = 0; i < length; ++i) {
      sum += data.at(i);
   }
   
   // calculate mean value
   mean = sum / length;
   
   return mean;
}

// Name: CalculateMedian()
// Input: a float vector
// Output: median value in the vector
// Purpose: to find the median value of a data set
float CalculateMedian(vector<float> data) {
   float median;
   int length = data.size() - 1;  // store the highest index value
   QuickSort(data, 0, length);    // sort the data using quick sort algorithm
   
   // check for even/odd length
   if (length % 2 == 0) {
      median = data.at(length / 2);
   } else {
      median = (data.at(length / 2) + data.at((length / 2) + 1)) / 2;
   }
   
   return median;    // return the middle value (median)
}


// Name: CalculateStdDev()
// Input: a float vector and a mean value
// Output: standard deviation of the values 
// Purpose: to find the standard deviation of a data set
float CalculateStdDev(vector<float> data, float mean) {
   int length = data.size();
   float sum = 0;
   float stdDev, temp;

   // standard deviation formula: sqrt( ((n1 - mean) ^ 2) + ((n2 - mean) ^ 2) + ... ) / n )

   // ((n1 - mean) ^ 2) + ((n2 - mean) ^ 2) + ... )
   for(int i = 0; i < length; ++i) {
      temp = data.at(i) - mean;
      temp = pow(temp, 2);
      sum += temp;
   }

   // sqrt(sum / n)
   stdDev = sqrt(sum / length);

   return stdDev;
}


int main() {
   vector<float> data;  // store all the values from the file(s)
   string section;      // store the message with section number for printing
   
   // declaring necessary variables
   int studentCount;
   float mean;
   float median;
   float standardDeviation;
   
   // take a char from the user
   char userInput;
   cin >> userInput;
   
   // check which file to use for calculation
   switch (userInput) {
      case 'A':
         data = GetData("class_1.dat", "class_2.dat", "class_3.dat"); 
         section = "All Sections; N = ";
         break;
         
      case '1':
         data = GetData("class_1.dat"); 
         section = "Section #1; N = ";
         break;
         
      case '2':
         data = GetData("class_2.dat"); 
         section = "Section #2; N = ";
         break;
         
      case '3':
         data = GetData("class_3.dat"); 
         section = "Section #3; N = ";
         break;
         
      default:
         cout << "ERROR - Enter 1, 2, 3 or A" << endl;
         return 0;
         break;
   }
   
   studentCount = data.size();                      // calculate vector size and store in studentCount
   mean = CalculateMean(data);                      // calculate and store mean value
   median = CalculateMedian(data);                  // calculate and store median value
   standardDeviation = CalculateStdDev(data, mean); // calculate and store standard deviation of the values
   

   // print all the final calculations on screen
   cout << fixed << setprecision(2);
   cout << section << studentCount << endl;
   cout << "Mean     :" << setw(7) << mean << endl;
   cout << "Median   :" << setw(7) << median << endl;
   cout << "Std Dev  :" << setw(7) << standardDeviation << endl;
   
   return 0;
}
