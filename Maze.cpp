#include <iostream>
#include <fstream>

using namespace std;

class Maze
{
public:

    Maze();
    ~Maze();
    void ReadMaze(string name);
    void WriteMaze(string name);
    void PrintMaze();
    bool SearchMaze(int r, int c);
    void GetMaze(int r, int c, char &value);
    void SetMaze(int r, int c, char value);
    void GetStart(int &r, int &c);
    void SetStart(int r, int c);
    void GetEnd(int &r, int &c);
    void SetEnd(int r, int c);

private:

    int num_rows, num_cols;
    int start_row, start_col;
    int end_row, end_col;
    char maze[35][35];

};

Maze::Maze()
{
    num_rows = 0;
    num_cols = 0;
    start_row = 0;
    start_col = 0;
    end_row = 0;
    end_col = 0;
}

Maze::~Maze()
{
}

void Maze::ReadMaze(string name)
{
    ifstream din;
    din.open(name.c_str());
    din >> num_rows >> num_cols;
    din >> start_row >> start_col;
    din >> end_row >> end_col;
    
    string line;
    getline(din, line);
    
    for (int r = 0; r < num_rows; r++)
    {
       getline(din, line);
       
       for (int c = 0; c < num_cols; c++)
          if (c < int(line.length()))
       
       maze[r][c] = line[c];
    }
    din.close();
}

void Maze::WriteMaze(string name)
{
    ofstream dout;
    dout.open(name.c_str());
    dout << num_rows << " " << num_cols << endl;
    dout << start_row << " " << start_col << endl;
    dout << end_row << " " << end_col << endl;
        
    for (int r = 0; r < num_rows; r++)
    {
       for (int c = 0; c < num_cols; c++)
          dout << maze[r][c];
       
       dout << endl;
    }
    dout.close();
}

void Maze::PrintMaze()
{
    for (int r = 0; r < num_rows; r++)
    {
       for (int c = 0; c < num_cols; c++)
          cout << maze[r][c];
       
       cout << endl;
    }
}

bool Maze::SearchMaze(int r, int c)
{
    if ((r < 0) || (r >= num_rows) || (c < 0) || (c >= num_cols))
        return false;
    else if (maze[r][c] != ' ')
        return false;
    maze[r][c] = '-';
    if (((r == end_row) && (c == end_col)) ||
        SearchMaze(r + 1, c) || SearchMaze(r - 1, c) ||
        SearchMaze(r, c + 1) || SearchMaze(r, c - 1))
    {
       cout << r << " " << c << endl;
       maze[r][c] = '.';
       return true;
    }
    else
       return false;
}

void Maze::GetStart(int &r, int &c)
{
    r = start_row;
    c = start_col;
}

void Maze::SetStart(int r, int c)
{
    start_row = r;
    start_col = c;
}

void Maze::GetEnd(int &r, int &c)
{
    r = end_row;
    c = end_col;
}

void Maze::SetEnd(int r, int c)
{
    end_row = r;
    end_col = c;
}

int main()
{
    Maze m;
    int r, c;
    m.ReadMaze("maze.txt");
    m.PrintMaze();   
    m.GetStart(r, c);   
    m.SearchMaze(r, c);   
    m.PrintMaze();    
    m.WriteMaze("maze.out");
}