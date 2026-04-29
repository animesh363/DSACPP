#include <bits/stdc++.h>
using namespace std;


//? Ques : Print sum from 1 to n (Return type)

int sums( int n){
    if(n==0) return 0;
    return n + sums(n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"sum: " <<sums(n);
}