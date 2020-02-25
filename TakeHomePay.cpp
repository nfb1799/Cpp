#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double takeHomePay(double);

const double COMMISSION = .07;
const double FEDERAL_TAX = .18;
const double RETIREMENT_TAX = .10;
const double SS_TAX = .06;

int main() {
   
   string empName;
   double salesAmount;
   
   cout << "Enter the employee's name: ";
   cin >> empName;
   cout << "Enter the sales amount for the week: ";
   cin >> salesAmount;
   
   cout << "Employee: " << empName << endl;
   cout << "Total Sales: $" << fixed << showpoint << setprecision(2) << salesAmount << endl;
   cout << "Take-Home Pay: $" << fixed << showpoint << setprecision(2) << takeHomePay(salesAmount);

   return 0; 
}

double takeHomePay(double sales) {
   double comm = sales*COMMISSION;
   double takeHomePay = comm - (comm*FEDERAL_TAX) - (comm*RETIREMENT_TAX) - (comm*SS_TAX);
   return takeHomePay; 
}