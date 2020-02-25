#include <iostream>
#include <fstream>

using namespace std;
bool solve(char** maze, int row, int column, int totalRow, int totalColumn);

int main() {
   char** maze;
   int row, column;
   int startRow, startColumn;
   int totalRow;
   int totalColumn;
   
   ifstream din;
   din.open("maze.txt");
   din >> totalRow;
   din >> totalColumn;
   din >> startRow;
   din >> startColumn;
   
   
   maze = new char*[totalRow];
   
   for(int i = 0; i < totalRow; i++) {
      maze[i] = new char[totalColumn];       

   }
   
   
   for(int i = 0; i < totalRow; i++) {
      
      for(int j = 0; j < totalColumn; j++)
         din >> maze[i][j];
   }
   
   din.close();
   
   if(solve(maze, startRow, startColumn, totalRow, totalColumn)) {
      for(int i = 0; i < totalRow; i++){
         for(int j = 0; j < totalColumn; j++) {
            cout << maze[i][j];
         }
         cout << endl;
      }
   } else {
      cout << "No solution.";
   }
}

bool solve(char** maze, int row, int column, int totalRow, int totalColumn) {

   if(maze[row+1][column] == 'E' || maze[row][column+1] == 'E' || maze[row-1][column] == 'E' || maze[row][column-1] == 'E')
      return true;
   
   if(row == totalRow && column == totalColumn)
      return false;
   
   if(row != totalRow && maze[row+1][column] == 'O') {
   
      maze[row][column] = 'X';
      solve(maze, row+1, column, totalRow, totalColumn);
      
   } else if(column != totalColumn && maze[row][column+1] == 'O') {
   
      maze[row][column] = 'X';
      solve(maze, row, column+1, totalRow, totalColumn);
      
   } else if(row != 0 && maze[row-1][column] == 'O') {
   
      maze[row][column] = 'X';
      solve(maze, row-1, column, totalRow, totalColumn);
      
   } else if(column != 0 && maze[row][column-1] == 'O') {
   
      maze[row][column] = 'X';
      solve(maze, row, column-1, totalRow, totalColumn);
      
   }
}