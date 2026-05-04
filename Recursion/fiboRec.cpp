#include <bits/stdc++.h>
using namespace std;

//? Ques : Write a function to calculate the nth fibonacci number using recursion.

int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<n<<" th fibonaci series: "<<fibo(n);
}