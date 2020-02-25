#ifndef H_bowler
#define H_bowler

#include <string>
using namespace std;

class bowler {
   private:
      string firstName;
      string lastName;
      int score1;
      int score2;
      int score3;
      int averageScore;
      
   public:
      bowler();
      bowler(string fName, string lName);
      bowler(string fName, string lName, int s1, int s2, int s3);
      
      void setFirstName(string name);
      void setLastName(string name);
      void setScore1(int score);
      void setScore2(int score);
      void setScore3(int score);
      
      string getFirstName();
      string getLastName();
      int getScore1();
      int getScore2();
      int getScore3();
      int getAverage();
      
      bool operator==(bowler bowl);
      bool operator<(bowler bowl);
      bool operator>(bowler bowl);
};

#endif