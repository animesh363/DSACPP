#include <bits/stdc++.h>
using namespace std;

int fact(int n);
    if(n==0) return;
    n*fact(n);
}



int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int x= fact(n);
    cout<<x;

}