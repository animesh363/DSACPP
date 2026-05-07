#include <bits/stdc++.h>
using namespace std;


int maze2In(int row, int col){
    if(row<0 || col<0) return 0;
    if(row==1 && col == 1) return 1;
    int rightWays = maze2In(row,col-1);
    int leftWays = maze2In(row-1,col);
    return rightWays + leftWays;
}
void printPath(int row, int col, string s){
    if(row<0 || col<0) return;
    if(row==1 && col ==1){
        cout<<s<<endl;
        return;
    }
    //right
    printPath(row, col-1,s+'R');
    //down
    printPath(row-1,col,s+'D');
}
int main(){
    cout<<"No of ways: "<<maze2In(4,4)<<endl;
    printPath(4,4,"");
}