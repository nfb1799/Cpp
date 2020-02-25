/* Program: 4-3
   Author: Nik Barbero
   Description: Demonstrates proper use of the isdigit() function from the ctype.h header file
*/

#import <iostream>
#import <ctype.h>

using namespace std;

int main() {
   /* The isdigit() function from the ctype.h header file will determine if a character input is a digit. 
      A character must be passed into the function.
      A boolean will be returned true if it is a digit and false if it is not.
   */
   
   char ch;
   bool digit;
   
   cout << "Please enter a character." << endl; //takes a character input from the user
   cin >> ch;
   
   digit = isdigit(ch); //returns true if the character is a digit
   
   //tells the user whether or not their character is a digit
   if(digit) 
      cout << "Your character is a digit." << endl;
   else 
      cout << "Your character is not a digit." << endl;
   
   
   return 0;
}