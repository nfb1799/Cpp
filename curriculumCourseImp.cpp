#include <string>
#include <iostream>
#include "curriculumCourse.h"

using namespace std;

curriculumCourse::curriculumCourse(int id, string tit, int roomNum, int contactH, int creditH, int tuit) 
    :course(id, tit, roomNum, contactH)
{
   creditHours = creditH;
   tuition = tuit;
}

int curriculumCourse::getCreditHours() {
   return creditHours;
}

void curriculumCourse::setCreditHours(int creditH) {
   creditHours = creditH;
}

int curriculumCourse::getTuition() {
   return tuition;
}

void curriculumCourse::setTuition(int tuit) {
   tuition = tuit;
}

void curriculumCourse::show() {
   course::show();
   cout << "Credit Hours: " << creditHours << endl;
   cout << "Tuition: " << tuition*creditHours << endl;
}