#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double score(int);
double avg(double, double, double);
void print(string, double, double, double);

int main() {
   string studentID;
   double exam1, exam2, exam3;
   
   cout << "Enter student ID: ";
   cin >> studentID;
   exam1 = score(1);
   exam2 = score(2);
   exam3 = score(3);
   print(studentID, exam1, exam2, exam3);

   return 0;
}

double score(int exam) {
   double score;
   cout << "Enter exam " << exam << "score: ";
   cin >> score;
   return score;
}

double avg(double a, double b, double c) {
   return (a + b + c)/3;
}

void print(string ID, double a, double b, double c) {
   cout << "Student ID: " << ID << endl;
   cout << "Exam 1: " << fixed << setprecision(0) << a << endl;
   cout << "Exam 2: " << fixed << setprecision(0) << b << endl;
   cout << "Exam 3: " << fixed << setprecision(0) << c << endl;
   cout << "Average: " << fixed << setprecision(0) << avg(a,b,c);
}
