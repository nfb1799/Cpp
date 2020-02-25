#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double proceeds(int, double);

const double CASE_PRICE = 5.00;
const int CASE_BARS = 12;
const double TAX = .10;

int main() {
   int casesSold;
   double perBar;
   
   cout << "Enter the number of cases sold: ";
   cin >> casesSold;
   cout << "Enter the price per bar: ";
   cin >> perBar;
   cout << "Total Earnings: $" << fixed << showpoint << setprecision(2) << proceeds(casesSold, perBar) << endl;
   cout << "SGA Cut: $" << fixed << showpoint << setprecision(2) << proceeds(casesSold, perBar)*TAX << endl;
   cout << "CC Cut: $" << fixed << showpoint << setprecision(2) << proceeds(casesSold, perBar) - (proceeds(casesSold, perBar)*TAX);
   
   return 0;
}

double proceeds(int cases, double perBar) {
   double proc = ((cases*CASE_BARS)*perBar) - (cases*CASE_PRICE);
   return proc;
} 

