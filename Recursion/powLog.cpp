#include <bits/stdc++.h>
using namespace std;


int pow(int x, int n){
    if(n==1) return x;
    int ans = pow(x, n/2);
    if(n%2==0){
        return ans*ans;
    }else{
        return ans*ans *x;
    }
    
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"ans = " <<pow(3,n);
}