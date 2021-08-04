// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Title: cipher_code_decoder.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: August 3, 2021
// Description: The following program decrypts messages that were encrypted using Baconian Cipher.
// Note: I could've used less code if I were to store all the characters and binary numbers in a vector/array 
//       manually and do linear search, but i decided to include convert-to-binary and binary-search algorithm
//       as a review for the things I learned in this course.
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;


// Name: ToBinary()
// Input: a string
// Output: a vector with cipher codes converted from the string
// Purpose: to convert encrypted messages into cipher codes
vector<string> ToBinary(string message) {
   
   vector<string> binary;         // store all the cipher codes found in string
   const int BINARY_LENGTH = 5;   // each cipher code has 5 elements (ex: UUUUL or 00001)
   int messageLength;             // store length of message
   int i, j;                      // to be used in for-loops
   string temp;                   // temporarily holds stripped five characters from each loop

   messageLength = message.size();

   for (i = 0; i < messageLength; i += BINARY_LENGTH) {  // for every five characters
      temp = message.substr(i, BINARY_LENGTH);           // store all five characters in temp
      for (j = 0; j < BINARY_LENGTH; ++j) {              // for each character in temp
         if(isupper(temp[j])) {                          // check if it's uppercase
            temp[j] = '0';                               // if uppercase, replace it with '0'
         } else {                                        // if it's not uppercase
            temp[j] = '1';                               // replace it with '1'
         }
      }
      binary.push_back(temp);  // store the final `temp` value in `binary` vector
   }

   return binary;
}


// Name: Decrypt()
// Input: a parsed string with encrypted message
// Output: a string with the decrypted message
// Purpose: to decrypt message that was encoded using a Baconian cipher variation
string Decrypt(string message) {

   int const TOTAL_CHARACTERS = 32;                     // total number of characters used by this variation of Baconian cipher
   int const TOTAL_ALPHABETS = 26;                      // total number of english alphabets

   vector<string> letters = ToBinary(message);          // store the converted cipher codes from the encrypted message
   vector<string> cipher(TOTAL_CHARACTERS);             // store all the cipher codes for the letter and characters (ex: 00101, 00010 etc.)
   vector<char> characters(TOTAL_CHARACTERS);           // store all the letters and characters (ex: a, b, ?, !, etc.)

   int charASCII = 65;                                  // store the ASCII values of characters starting with uppercase a (ex: 65 = A, 66 = B)
   char extraChars[] = {'.', ';', '!', '?', '0', ' '};  // non-alpha characters used in Baconian cipher
   
   string decryptedMessage;  // store the decrypted message

   int i, j, count;          // to be used in for-loops
   int temp, binaryNum;      // temporarily hold ASCII value (temp) and its binary number's each numeric value (binaryNum)
   string binary;            // temporarily holds binary number for the Baconian cipher characters

   // used in binary-search algorithm
   int length = letters.size();  // store the length of `letters` vector
   int midIndex;                 // store the middle index of the partition
   int minIndex;                 // store the lowest index of the partition
   int maxIndex;                 // store the highest index of the partition

   // the following block of codes generate letters and binary values that are used in Baconian cipher
   // and store them in their corresponding vectors `characters` and `cipher`

   for (i = 0; i < TOTAL_CHARACTERS; ++i) {                   // run until it reaches the total number of available characters in Baconian cipher
      if (i < TOTAL_ALPHABETS) {                              // check if the ascii value is of an alphabetic character
         characters.at(i) = charASCII;                        // if so, assign that character to `character` vector's `i` index
      } else {                                                // if it's not an alphabetic character, then
         characters.at(i) = extraChars[i - TOTAL_ALPHABETS];  // assign the corresponding non-alpha character from `extraChar` array
      }
      
      temp = charASCII - 1;   // ascii value of the cipher codes starts from one value before the alphabets' ascii values
      binary = "";            // variable becomes empty everytime the loop restarts
      count = 6;              // asciii values converted to binary have total 7 characters (66 = 1000001)

      // convert ascii value to binary
      while (temp > 0) {
         binaryNum = temp % 2;
         temp /= 2;
         --count;
         
         // ignore the first two characters from the binary value (ex: 1001101 >> 01101) to match cipher codes
         // then add the rest of characters temporarily to `binary` string
         if (count > 0) {
            binary.insert(0, to_string(binaryNum));
         }
      }
      cipher.at(i) = binary;  // insert the final binary value in `cipher` vector
      ++charASCII;            // increase the ascii value for the next character and cipher code
   }
   
   // the following block of codes uses binary search algorithm to find corresponding characters from 
   // the `characters` vector to decrypt the letters stored as cipher codes in `letters` vector

   for (j = 0; j < length; ++j) {                           // run until it reaches the last element in `letters`
      minIndex = 0;                                         // lowest index in the vector
      maxIndex = cipher.size() - 1;                         // highest index in the vector
      
      while (minIndex <= maxIndex) {                        // keep running until the value is found
         midIndex = (maxIndex + minIndex) / 2;              // calculate the middle index

         if (letters.at(j) == cipher.at(midIndex)) {        // check if binary number from encrypted message matches the middle `cipher` value
            decryptedMessage += characters.at(midIndex);    // if so, add its decrypted character to `decryptedMessage` string, then
            break;                                          // break the "while" loop and then check the next value in `letters` vector
         }

         if (letters.at(j) > cipher.at(midIndex)) {         // if the binary number in `letters` is higher than the middle `cipher` value
            minIndex = midIndex + 1;                        // change the lowest index
         } else if (letters.at(j) < cipher.at(midIndex)) {  // otherwise,
            maxIndex = midIndex - 1;                        // change the highest index
         }
      }
   }

   return decryptedMessage;   // return the decrypted message as a string
}

int main() {
   ifstream file;     // declaring input file stream
   string message;    // store parsed string with only alphabetic characters
   char tempMsgChar;  // temporarily store each character from the encrypted message

   // get file name from the user
   string fileName;
   getline(cin, fileName);

   // open the file entered by the user
   file.open(fileName);

   // error handler if the file is not opening
   if (!file.is_open()) {
      cout << "DATA FILE DID NOT OPEN... Program Terminated";
      return 0;
   }

   // read from the file while parsing at the same time and
   // store each alphabetic character in `message` as a string
   file >> tempMsgChar;
   while (!file.fail()) {
      if (isalpha(tempMsgChar)) {
         message += tempMsgChar;
      }
      file >> tempMsgChar;
   }

   // print the decoded message after decrypting it using Decrypt() function
   cout << Decrypt(message);

   return 0;
}
