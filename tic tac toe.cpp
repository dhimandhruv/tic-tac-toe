// tic tac toe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
using namespace std;
//Declaring Array for the game 
char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
int choioce;
int row, column;
static void display() {
    for (int i = 0; i < 3; i++) {
        cout << "    |    |        \n";
        //for (int j = 0; j < 3; j++) {
        cout << " " << board[i][0] << "  | " << " " << board[i][1] << " | " << " " << board[i][2] << " \n";
        //}
        if (i < 2) cout << "____|____|____    \n";
    }
}

static int result() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == 'X') {
                return 1;
            }
            else if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == 'O') {
                return 2;
            }
        }
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == 'X') {
            return 1;
        }
        else if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == 'O') {
            return 2;
        }
    }
        if (board[0][0]==board[1][1] && board[1][1]==board[2][2]  && board[2][2]=='X' || board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2]=='X') {
            return 1;
        }
        else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == 'O' || board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] == 'O') {
            return 2;
        }
        return 0;
    

}
static int updateX(char p1) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == p1) {
                board[i][j] = 'X';
            }
            
        }
    }
     display();
     return 0;

}
static int updateO(char p2) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == p2) {
                board[i][j] = 'O';
            }
        }
    }
    display();
    return 0;

}
int main()
{
    std::cout << "Hello Folks                                                Tic Tac Toe                                                                                  X&O!\n";
    display();
    char a='X';
    char b='O';
    
    for(int i=0;i<4;i++){
        char a;
        char b;
        cout << "player 1 Enter The choice";
        cin >> a;
        updateX(a);
        cout << "player 2 Enter The choice";
        cin >> b;
        if (a == b) {
            cout << "invalid move";
            return 0;
        }
        updateO(b);
     
        
        int c = result();
        if (c == 1 ){
            cout << "Player 'X' wins";
            return 0;
        }
        else if (c == 2) {
            cout << "Player 'O' wins";
            return 0;

        }
    }
    
    cout << "player 1 Enter The choice";
    cin >> a;
    updateX(a);
    int c = result();
    if (c == 1) {
        cout << "Player 'X' wins";
        return 0;
    }
    if(c== 0){
        cout << "draw";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
