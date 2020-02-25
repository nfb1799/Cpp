#include <string>
#include <iostream>
#include "continueCourse.h"

using namespace std;

continueCourse::continueCourse(int id, string tit, int roomNum, int contactH, int cos) 
    :course(id, tit, roomNum, contactH)
{
   cost = cos;
}

int continueCourse::getCost() {
   return cost;
}

void continueCourse::setCost(int cos) {
   cost = cos;
}

void continueCourse::show() {
   course::show();
   cout << "Cost: " << cost << endl;
}