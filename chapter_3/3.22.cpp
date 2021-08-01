// Summary: Given integer values for red, green, and blue, subtract the gray from each value.
// Computers represent color by combining the sub-colors red, green, and blue (rgb). Each sub-color's value can range 
// from 0 to 255. Thus (255, 0, 0) is bright red, (130, 0, 130) is a medium purple, (0, 0, 0) is black, (255, 255, 255) is white, 
// and (40, 40, 40) is a dark gray. (130, 50, 130) is a faded purple, due to the (50, 50, 50) gray part. (In other words, 
// equal amounts of red, green, blue yield gray).
// Given values for red, green, and blue, remove the gray part.

// Ex: If the input is:
// 130 50 130
// the output is:
// 80 0 80

// Find the smallest value, and then subtract it from all three values, thus removing the gray.
// Note: This page [https://www.mathsisfun.com/hexadecimal-decimal-colors.html] converts rgb values into colors.

// + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + 

// Title: remove_rgb_gray.cpp
// Course: Computational Problem Solving I (CPET-121)
// Developer: Muhfasul Alam
// Date: July 11, 2021
// Description: Removes grey color from RGB values

#include <iostream>
using namespace std;

int main() {

   int red, blue, green;
   int minValue;
   
   cin >> red;
   cin >> green;
   cin >> blue;
   
   // Checks if there's any common value between the colors
   if (red < green && red < blue) {
      minValue = red;
   }
   else if (green < red && green < blue) {
      minValue = green;
   }
   else if (blue < red && blue < green) {
      minValue = blue;
   }
   else {
      minValue = red;
   }
      
   // subtracts that common value from the initial value to remove grey color
   red -= minValue;
   green -= minValue;
   blue -= minValue;
   
   // displays the output
   cout << red << " " << green << " " << blue << endl;

   return 0;
}
