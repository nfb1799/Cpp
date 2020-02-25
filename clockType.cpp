#include "clockType.h"

#include <iostream>

using namespace std;

clockType::clockType() {
   hour = 0;
   minute = 0;
   second = 0;
}

clockType::clockType(int h, int m, int s) {
   hour = h;
   minute = m;
   second = s;
}

clockType::clockType(int h, int m) {
   hour = h;
   minute = m;
   second = 0;
}

clockType::clockType(int h) {
   hour = h;
   minute = 0;
   second = 0;
}

void clockType::setHour(int h) {
   hour = h;
}

void clockType::setMin(int m) {
   minute = m;
}

void clockType::setSec(int s) {
   second = s;
}

int clockType::getHour() {
   return hour;
}

int clockType::getMin() {
   return minute;
}

int clockType::getSec() {
   return second;
}

clockType clockType::operator++(int) {
   second++;
   if(second >= 60) {
      minute++;
      second-=60;
   }
   
   if(minute >= 60) {
      hour++;
      minute-=60;
   }
   
   if(hour >= 24) 
      hour -= 24;
   
   return *this;
}

bool clockType::operator<(clockType clock) {
   int hour1 = this->hour;
   int hour2 = clock.hour;
   int minute1 = this->minute;
   int minute2 = clock.minute;
   int second1 = this->second;
   int second2 = clock.second;
   
   if(hour1 < hour2) {
      return true;   
   } else { 
      return false;
   }
   
   if(minute1 < minute2) {
      return true;
   } else {
      return false;
   }
   
   if(second1 < second2) {
      return true;
   } else {
      return false;
   }
}

bool clockType::operator<=(clockType clock) {
   int hour1 = this->hour;
   int hour2 = clock.hour;
   int minute1 = this->minute;
   int minute2 = clock.minute;
   int second1 = this->second;
   int second2 = clock.second;
   
   if(hour1 > hour2) 
      return false;
   
   if(minute1 > minute2) 
      return false;
   
   if(second1 > second2) 
      return false;
   
   return true;
}

bool clockType::operator>(clockType clock) {
   int hour1 = this->hour;
   int hour2 = clock.hour;
   int minute1 = this->minute;
   int minute2 = clock.minute;
   int second1 = this->second;
   int second2 = clock.second;
   
   if(hour1 > hour2) {
      return true;   
   } else { 
      return false;
   }
   
   if(minute1 > minute2) {
      return true;
   } else {
      return false;
   }
   
   if(second1 > second2) {
      return true;
   } else {
      return false;
   }
}

bool clockType::operator>=(clockType clock) {
   int hour1 = this->hour;
   int hour2 = clock.hour;
   int minute1 = this->minute;
   int minute2 = clock.minute;
   int second1 = this->second;
   int second2 = clock.second;
   
   if(hour1 < hour2) 
      return false;
   
   if(minute1 < minute2) 
      return false;
   
   if(second1 < second2) 
      return false;
   
   return true;
}

bool clockType::operator==(clockType clock) {
   int hour1 = this->hour;
   int hour2 = clock.hour;
   int minute1 = this->minute;
   int minute2 = clock.minute;
   int second1 = this->second;
   int second2 = clock.second;
   
   if(hour1 != hour2)
      return false;
   
   if(minute1 != minute2)
      return false;
   
   if(second1 != second2) 
      return false;
   
   return true;
}

bool clockType::operator!=(clockType clock) {
   int hour1 = this->hour;
   int hour2 = clock.hour;
   int minute1 = this->minute;
   int minute2 = clock.minute;
   int second1 = this->second;
   int second2 = clock.second;
   
   if(hour1 == hour2 && minute1 == minute2 && second1 == second2)
      return false;
   
   return true;
}

ostream& operator<<(ostream& osObject, clockType clock) {
   int h = clock.getHour();
   int m = clock.getMin();
   int s = clock.getSec();
   osObject << h << ":" << m << ":" << s;
   return osObject;
}

istream& operator>>(istream& isObject, clockType& clock) {
   int h, m, s;
   isObject >> h;
   isObject >> m;
   isObject >> s;
   
   clock = clockType(h,m,s);
   
   return isObject;
}

