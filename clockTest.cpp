#include "clockType.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
   clockType clock1, clock2;
   
   cout << "Enter the current time." << endl;
   cin >> clock1;
   cout << "Enter your alarm time." << endl;
   cin >> clock2;
   
   cout << clock1 << endl;
   while(clock1 != clock2) {
      clock1++;
      cout << clock1 << endl;
      system("CLS");
   }
      
   
   return 0;
}