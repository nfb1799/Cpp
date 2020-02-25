#ifndef H_continueCourse
#define H_continueCourse

#include "course.h"
#include <string>
using namespace std;

class continueCourse: public course {
   public:
      continueCourse(int id, string tit, int roomNum, int contactH, int cos);
      int getCost();
      void setCost(int cos);
      void show();
   
   private:
      int cost;
};

#endif