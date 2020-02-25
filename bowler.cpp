#include "bowler.h"

using namespace std;

bowler::bowler() {
   firstName = "none";
   lastName = "none";
   score1 = 0;
   score2 = 0;
   score3 = 0;
   averageScore = 0;
}

bowler::bowler(string fName, string lName) {
   firstName = fName;
   lastName = lName;
   score1 = 0;
   score2 = 0;
   score3 = 0;
   averageScore = 0;
}

bowler::bowler(string fName, string lName, int s1, int s2, int s3) {
   firstName = fName;
   lastName = lName;
   score1 = s1;
   score2 = s2;
   score3 = s3;
   averageScore = (s1 + s2 + s3) / 3;
}

void bowler::setFirstName(string name) {
   firstName = name;
}

void bowler::setLastName(string name) {
   lastName = name;
}

void bowler::setScore1(int score) {
   score1 = score;
   averageScore = (score1 + score2 + score3) / 3;
}

void bowler::setScore2(int score) {
   score2 = score;
   averageScore = (score1 + score2 + score3) / 3;
}

void bowler::setScore3(int score) {
   score3 = score;
   averageScore = (score1 + score2 + score3) / 3;
}

string bowler::getFirstName() {
   return firstName;
}

string bowler::getLastName() {
   return lastName;
}

int bowler::getScore1() {
   return score1;
}

int bowler::getScore2() {
   return score2;
}

int bowler::getScore3() {
   return score3;
}

int bowler::getAverage() {
   return averageScore;
}

bool bowler::operator==(bowler bowl) {
   return this.averageScore == bowl.averageScore;
}

bool bowler::operator<(bowler bowl) {
   return this.averageScore < bowl.averageScore;
}

bool bowler::operator>(bowler bowl) {
   return this.averageScore > bowl.averageScore;
}