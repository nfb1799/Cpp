#include <string> 
#include <iostream>
#include "course.h"

using namespace std;

course::course() {
   ID = 0;
   title;
   roomNumber = 0;
   contactHours = 0;
}

course::course(int id, string tit, int roomNum, int contactH) {
   ID = id;
   title = tit;
   roomNumber = roomNum;
   contactHours = contactH;
}

int course::getID() {
   return ID;
}

void course::setID(int id) {
   ID = id;
}

string course::getTitle() {
   return title;
}

void course::setTitle(string tit) {
   title = tit;
}

int course::getRoomNumber() {
   return roomNumber;
}

void course::setRoomNumber(int roomNum) {
   roomNumber = roomNum;
}

int course::getContactHours() {
   return contactHours;
}

void course::setContactHours(int contactH) {
   contactHours = contactH;
}
