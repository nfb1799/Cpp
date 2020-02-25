#include <iostream>
#include "continueCourse.h"
#include "curriculumCourse.h"

using namespace std;

int main() {
   course *c = new course[5];
   int current = 0;
   bool flag = true;
   int menu = 0;
   int id = 0;
   string title = "none";
   int roomNum = 0;
   int contactH = 0;
   int creditH = 0;
   int tuition = 0;
   int cost = 0;
   int i = 0;
   
   while(flag) {
      cout << "1.\tAdd a curriculum class to schedule" << endl;
      cout << "2.\tAdd a continuing education class to schedule" << endl;
      cout << "3.\tDisplay all records" << endl;
      cout << "4.\tExit" << endl;
      cin >> menu;
      
      switch(menu) {
         case 1:  cout << "Enter class ID" << endl;
                  cin >> id;
                  cout << "Enter class title" << endl;
                  cin >> title;
                  cout << "Enter room number" << endl;
                  cin >> roomNum;
                  cout << "Enter contact hours" << endl;
                  cin >> contactH;
                  cout << "Enter credit hours" << endl;
                  cin >> creditH;
                  cout << "Enter tuition rate" << endl;
                  cin >> tuition;
                  
                  c[current] = curriculumCourse(id, title, roomNum, contactH, creditH, tuition);
                  current++;
                  break;
         case 2:  cout << "Enter class ID" << endl;
                  cin >> id;
                  cout << "Enter class title" << endl;
                  cin >> title;
                  cout << "Enter room number" << endl;
                  cin >> roomNum;
                  cout << "Enter contact hours" << endl;
                  cin >> contactH;
                  cout << "Enter cost" << endl;
                  cin >> cost;
                  
                  c[current] = continueCourse(id, title, roomNum, contactH, cost);
                  current++;
                  break;
         case 3:  for(i = 0; i < current; i++) {
                     cout << "Course " << i+1 << endl;
                     c[i].show();
                     cout << endl;
                  }
                  break;
         case 4:  flag = false;
                  break;
      }
   }
   
   delete [] c;
   return 0;
}