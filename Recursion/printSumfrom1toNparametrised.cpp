#include <bits/stdc++.h>
using namespace std;


//? Ques : Print sum from 1 to n (Parameterised)

void sums(int sum, int n){
    if(n==0){
        cout<<"sum = "<<sum;
        return;
    } 
    sums(sum+n,n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    sums(0,n);
}