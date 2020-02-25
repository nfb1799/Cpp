/* Program: 4-4
   Author: Nik Barbero
   Description: Reads in disctrict numbers and votes from votes.dat and formats the data to the user.
                Shows the number of Y and N as well as how each district voted.
*/
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
   
   //all vote tallys are initialized as 0
   int d1y = 0;
   int d1n = 0;
   int d2y = 0;
   int d2n = 0;
   int d3y = 0;
   int d3n = 0;
   int yCount, nCount;
   int district;
   char vote;
   ifstream inFile;
   
   inFile.open("votes.dat"); //reads in the votes.dat file
   inFile >> district >> vote; //gets a district and a vote from the first 2 items in the stream
   switch(district) { //switch operated by the district number
      case 1:  if(vote == 'Y') 
                  d1y++; //adds 1 to the yes count for district 1
               else
                  d1n++; //adds 1 to the no count for distrtict 1
               break;
      case 2:  if(vote == 'Y')
                  d2y++;
               else
                  d2n++;
               break;
      case 3:  if(vote == 'Y')
                  d3y++;
               else
                  d3n++;
                  break;
   }
   
   inFile >> district >> vote;
   switch(district) {
      case 1:  if(vote == 'Y')
                  d1y++;
               else
                  d1n++;
               break;
      case 2:  if(vote == 'Y')
                  d2y++;
               else
                  d2n++;
               break;
      case 3:  if(vote == 'Y')
                  d3y++;
               else
                  d3n++;
                  break;
   }
   
   inFile >> district >> vote;
   switch(district) {
      case 1:  if(vote == 'Y')
                  d1y++;
               else
                  d1n++;
               break;
      case 2:  if(vote == 'Y')
                  d2y++;
               else
                  d2n++;
               break;
      case 3:  if(vote == 'Y')
                  d3y++;
               else
                  d3n++;
                  break;
   }
   
   inFile >> district >> vote;
   switch(district) {
      case 1:  if(vote == 'Y')
                  d1y++;
               else
                  d1n++;
               break;
      case 2:  if(vote == 'Y')
                  d2y++;
               else
                  d2n++;
               break;
      case 3:  if(vote == 'Y')
                  d3y++;
               else
                  d3n++;
                  break;
   }
   
   inFile >> district >> vote;
   switch(district) {
      case 1:  if(vote == 'Y')
                  d1y++;
               else
                  d1n++;
               break;
      case 2:  if(vote == 'Y')
                  d2y++;
               else
                  d2n++;
               break;
      case 3:  if(vote == 'Y')
                  d3y++;
               else
                  d3n++;
                  break;
   }
   
   inFile.close();
   
   yCount = d1y + d2y + d3y; //adds all yes votes
   nCount = d1n + d2n + d3n; //adds all no votes
   
   //prints the counts to the user
   cout << "Yes Count: " << yCount << endl;
   cout << "No Count: " << nCount << endl;
   
   //prints the way each district voted to the user
   cout << "District 1 Votes: " << d1y << " Yes, " << d1n << " No" << endl;
   cout << "District 2 Votes: " << d2y << " Yes, " << d2n << " No" << endl;
   cout << "District 3 Votes: " << d3y << " Yes, " << d3n << " No" << endl;
   

   return 0;
}