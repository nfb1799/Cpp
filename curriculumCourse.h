#ifndef H_curriculumCourse
#define H_curriculumCourse

#include "course.h"
#include <string>
using namespace std;

class curriculumCourse: public course {
   public:
      curriculumCourse(int id, string tit, int roomNum, int contactH, int creditH, int tuit);
      int getCreditHours();
      void setCreditHours(int creditH);
      int getTuition();
      void setTuition(int tuit);
      void show();
   
   private:
      int creditHours;
      int tuition;
};

#endif