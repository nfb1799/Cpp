#ifndef H_course
#define H_course

#include <string>
using namespace std;

class course {
   public:
      course();
      course(int id, string tit, int roomNum, int contactH);
      int getID();
      void setID(int id);
      string getTitle();
      void setTitle(string tit);
      int getRoomNumber();
      void setRoomNumber(int roomNum);
      int getContactHours();
      void setContactHours(int contactH);
      virtual void show() {
         cout << "ID: " << ID << endl;
         cout << "Title: " << title << endl;
         cout << "Room Number: " << roomNumber << endl;
         cout << "Contact Hours: " << contactHours << endl;
      }
      
   private:
      int ID;
      string title;
      int roomNumber;
      int contactHours;
};

#endif