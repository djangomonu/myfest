#include<bits/stdc++.h>
#include<ncurses.h>
using namespace std;
#define n 8

void printBoard(int board[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<"\t";
        }
        cout<<endl;
    }
}

bool valid(int sx, int sy, int board[n][n]){
    if(sx<n && sy<n && sx>=0 && sy>=0 && board[sx][sy] == -1)
        return true;
    return false;
}




