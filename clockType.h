#ifndef H_clockType
#define H_clockType

#include <iostream>

using namespace std;

class clockType {
   private:
      int hour;
      int minute;
      int second;
      
   public:
      clockType();
      clockType(int, int, int);
      clockType(int, int);
      clockType(int);
      void setHour(int);
      void setMin(int);
      void setSec(int);
      int getHour();
      int getMin();
      int getSec();
      
      clockType operator++(int);
      bool operator<(clockType);
      bool operator<=(clockType);
      bool operator>(clockType);
      bool operator>=(clockType);
      bool operator==(clockType);
      bool operator!=(clockType);
      
      friend ostream& operator<<(ostream&, clockType);
      friend istream& operator>>(istream&, clockType&);
};

#endif