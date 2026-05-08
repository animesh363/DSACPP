#include <bits/stdc++.h>
using namespace std;

//sum of n natural numbers
int sum(int n){
    if(n==1) return 1;
    int sm = n + sum(n-1);
    return sm;
}

int main(){
    int n; cout<<"Enter n: "; cin>>n;
    cout<<sum(n);
}