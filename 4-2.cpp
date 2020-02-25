/* Program: 4-2
   Author: Nik Barbero
   Description: Recieves a purchase amount from the user and returns the amount, tax, shipping cost, and total cost
*/

#import <iostream>
#import <iomanip>

using namespace std;

int main() {
   double purchase, shipping; 
   double const TAX = .075; //tax is initalized as a constant
   
   cout << "Enter your total purchase amount." << endl; //asks the user to enter their purchase amount and saves it to a double
   cin >> purchase;
   
   //sets the shipping cost based on the purchase amount
   if(purchase > 50)
      shipping = 0;
   else
      shipping = 5.99;
   
   //prints all wanted values with a 2 decimal point format   
   cout << "Purchase Amount: $" << fixed << showpoint << setprecision(2) << purchase << endl;
   cout << "Tax Amount: $" << fixed << showpoint << setprecision(2) << (purchase*TAX) << endl;
   cout << "Shipping Amount: $" << fixed << showpoint << setprecision(2) << shipping << endl;
   cout << "Total: $" << fixed << showpoint << setprecision(2) << (purchase + (purchase*TAX) + shipping) << endl;
   
   return 0;
}