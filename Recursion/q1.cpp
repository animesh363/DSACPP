#include <bits/stdc++.h>
using namespace std;

void greet(int n){
    if(n==0) return ; // Base/stoping condition
    cout<<"Good morning!"<<endl;
    greet(n-1);
}

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    greet(a);
}