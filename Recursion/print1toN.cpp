#include <bits/stdc++.h>
using namespace std;


//? Ques : Print 1 to n (extra parameter)

// void print(int i, int n){
//     if(i>n) return;
//     cout<<i <<" ";
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     print(1,n);
// }

//? Ques : Print 1 to n (after recursive call)

void print( int n){
    if(n==0) return;
    print(n-1); //here game of all about call.eg n=5; 5 -> 4 -> 3 -> 2 -> 1 now function end at 0 and starts printing from bottom 1 2 3 4 5
    cout<<n <<" ";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    print(n);
}

