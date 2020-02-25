#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main() {
    int *lottery = new int[5];
    int *user = new int[5];
    bool flag = true;
    bool win = true;
    
    srand (time(NULL));
    
    cout << "Welcome to the lottery!" << endl << endl;
    
    while(flag) {
        for(int i = 0; i < 5; i++) {
            lottery[i] = rand() % 40 + 1;
        }
        sort(lottery, lottery + 5);
        
        cout << "Select 5 numbers 1-40" << endl;
        for(int j = 0; j < 5; j++) {
            cout << "Number " << j + 1 << ": ";
            cin >> user[j];
        }
        cout << endl;
        sort(user, user + 5);
        
        for(int k = 0; k < 5 && win; k++) {
            if(lottery[k] != user[k])
                win = false;
        }
        
        if(win)
            cout << "You win!" << endl;
        else
            cout << "You lose!" << endl;
        
        win = true;
        
        cout << "The correct numbers were:" << endl;
        for(int x = 0; x < 5; x++) {
            cout << lottery[x] << endl;
        }
        cout << endl;
        
        cout << "Would you like to play again?" << endl;
        cout << "Enter 1 for yes or 0 for no." << endl;
        cin >> flag;
        cout << endl;
    }
    
    cout << "Thanks for playing!";
    return 0;
}


