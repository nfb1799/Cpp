#include "bowler.h"
#include <iostream>
#include <new>

void insertionSort(bowler arr[], int n);
using namespace std;

int main() {
   bowler bowlers[25];
   int count = 0;
   bool flag = true;
   int choice;
   string fName, lName;
   int score1, score2, score3;
   
   cout << "Welcome to the bowler program.\nPlease make a selection." << endl;
   
   while(flag) {
      cout << "1. Add a bowler to the list" << endl;
      cout << "2. Print bowlers from highest to lowest" << endl;
      cout << "3. Quit" << endl;
      
      cin >> choice;
   
      switch(choice) {
         case 1:  cout << "Enter the first name: ";
                  cin >> fName;
                  cout << "Enter the last name: ";
                  cin >> lName;
                  cout << "Enter three score 0-300: ";
                  cin >> score1 >> score2 >> score3;
                  bowlers[count] = bowler(fName, lName, score1, score2, score3);
                  count++;
                  if(count == 25)
                     flag = false;
                  break;
         case 2:  insertionSort(bowlers, count);
                  for(int x = 0; x < count; x++) {
                     cout << "Position: " << x + 1 << endl;
                     cout << "Name: " << bowlers[x].getFirstName() << " " << bowlers[x].getLastName() << endl;
                     cout << "Average Score: " << bowlers[x].getAverage() << endl << endl;
                  }
                  break;
         case 3:  flag = false;
                  break;
      }
   }
   
   cout << "Final Scores:" << endl << endl;
   insertionSort(bowlers, count);
   for(int x = 0; x < count; x++) {
      cout << "Position: " << x + 1 << endl;
      cout << "Name: " << bowlers[x].getFirstName() << " " << bowlers[x].getLastName() << endl;
      cout << "Average Score: " << bowlers[x].getAverage() << endl << endl;
   }
   return 0;
}

void insertionSort(bowler arr[], int n)  
{  
    int i, j;  
    bowler temp;
    for (i = 1; i < n; i++) 
    {  
        temp = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] < temp) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = temp;  
    }  
}