#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    //base condition
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans= fact(n);
    cout<<"Factorial of "<<n <<" is: " <<ans;

}