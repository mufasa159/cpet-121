// Write a program that reads the student information from a tab separated values (tsv) file. 
// The program then creates a text file that records the course grades of the students. Each row of the tsv 
// file contains the Last Name, First Name, Midterm1 score, Midterm2 score, and the Final score of a student. 
// A sample of the student information is provided in StudentInfo.tsv. Assume the number of students is at least 1 and at most 20.

// The program performs the following tasks:
// Read the file name of the tsv file from the user.
// Open the tsv file and read the student information.
// Compute the average exam score of each student.

// Assign a letter grade to each student based on the average exam score in the following scale:
// A: 90 =< x
// B: 80 =< x < 90
// C: 70 =< x < 80
// D: 60 =< x < 70
// F: x < 60

// Compute the average of each exam.
// Output the last names, first names, exam scores, and letter grades of the students into a text file named report.txt. Output one student per row and separate the values with a tab character.
// Output the average of each exam, with two digits after the decimal point, at the end of report.txt. Hint: Use the setprecision manipulator to format the output.
// Ex: If the input of the program is:

// StudentInfo.tsv
// and the contents of StudentInfo.tsv are:

// Barrett    Edan    70  45  59
// Bradshaw    Reagan  96  97  88
// Charlton    Caius   73  94  80
// Mayo    Tyrese  88  61  36
// Stern    Brenda  90  86  45
// the file report.txt should contain:

// Barrett    Edan    70  45  59  F
// Bradshaw    Reagan  96  97  88  A
// Charlton    Caius   73  94  80  B
// Mayo    Tyrese  88  61  36  D
// Stern    Brenda  90  86  45  C

// Averages: midterm1 83.40, midterm2 76.60, final 61.60

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: student_report.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 29, 2021
// Description: formats student report to show letter grades and the final averages of the exams.

#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// Name: LetterGrade()
// Input: an int
// Output: a char
// Purpose: to determine the letter grade of the integer
char LetterGrade(int numGrade) {
   char letter;
   if (numGrade >= 90) {
      letter = 'A';
   } else if (numGrade >= 80 && numGrade < 90) {
      letter = 'B';
   } else if (numGrade >= 70 && numGrade < 80) {
      letter = 'C';
   } else if (numGrade >= 60 && numGrade < 70) {
      letter = 'D';
   } else if (numGrade < 60) {
      letter = 'F';
   }
   return letter;
}

int main() {
   
   // declaring variables
   ifstream studentInfo;
   ofstream studentReport;
   int studentCount = 0;
   string firstName, lastName;
   int grade1, grade2, grade3, gradeAvg;
   double totalGrade1, totalGrade2, totalGrade3;
   double avgMidTerm1, avgMidTerm2, avgFinal;
   
   // reads the file name of the tsv file from the user
   string fileName;
   cin >> fileName;
   
   // opens the tsv file
   studentInfo.open(fileName.c_str());
   studentReport.open("report.txt");
   
   // checks for error
   if (!studentInfo.is_open()) {
      cout << "Could not open input file" << endl;
      return 1;
   } else if (!studentReport.is_open()) {
      cout << "Could not open output file" << endl;
      return 1;
   }
   
   // gets the first line from the user-specified file
   studentInfo >> lastName >> firstName >> grade1 >> grade2 >> grade3;
   
   // keeps reading data and calculating until it reaches the end
   while (!studentInfo.fail()) {
      gradeAvg = (grade1 + grade2 + grade3) / 3;  // finds average to determine its letter grade
      
      // adds each exam scores to their specific variables
      totalGrade1 += grade1;
      totalGrade2 += grade2;
      totalGrade3 += grade3;
      
      // writes the calculated values to report.txt file
      studentReport << lastName << "\t" << firstName << "\t" << grade1 << "\t" << grade2 << "\t" << grade3 << "\t" << LetterGrade(gradeAvg) << endl;
      
      // gets the next student's info and increases student count
      studentInfo >> lastName >> firstName >> grade1 >> grade2 >> grade3;
      ++studentCount;
   }
   
   // calculates the final average for each exam
   avgMidTerm1 = totalGrade1 / studentCount;
   avgMidTerm2 = totalGrade2 / studentCount;
   avgFinal = totalGrade3 / studentCount;
   
   // writes the calculated values in report.txt file
   studentReport << fixed << setprecision(2) << endl;
   studentReport << "Averages: midterm1 " << avgMidTerm1 << ", midterm2 " << avgMidTerm2 << ", final " << avgFinal << endl;
   
   // closes both files
   studentInfo.close();
   studentReport.close();
   
   return 0;
}
