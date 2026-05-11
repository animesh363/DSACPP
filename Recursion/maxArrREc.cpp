#include <bits/stdc++.h>
using namespace std;

void printMax(int arr[],int n,int idx,int Max){
    if(idx==n){
        cout<<Max;
        return;
    } 
    if(arr[idx]>Max) Max = arr[idx];
    printMax(arr,n,idx+1,Max);
}
int main(){
    int arr[] = {2,5,3,6,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Max element: ";
    printMax(arr,n,0,INT_MIN);
    
}