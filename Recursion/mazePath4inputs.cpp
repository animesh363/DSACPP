#include <bits/stdc++.h>
using namespace std;

// Problem Statement:
// Find all possible paths in a maze from the top-left corner
// to the bottom-right corner using recursion.
// Allowed moves:
// R -> Right
// D -> Down
// Print each valid path like: RRDD, RDRD, etc.

int maze(int sr, int sc, int er , int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==er) return 1; // condcn for 1*1 
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    return rightWays + downWays;
}

void printPath(int sr, int sc, int er , int ec, string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R'); // for Right
    printPath(sr+1,sc,er,ec,s+'D'); // for Left
}
int main(){
    cout<<"Number of ways: "<< maze(1,1,3,3)<<endl;
    printPath(1,1,3,3,"");
}  