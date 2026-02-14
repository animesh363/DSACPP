#include<bits/stdc++.h>
using namespace std;

int main(){
//?             ________Time & Space complexity________

//!Q1): Given an array of size n+l consisting of integers from 1 to n. One of the elements is duplicate in the array. Find that duplicate element. 
    // int n;
    // cout <<"Enter the size of the arr: ";
    // cin>>n;
    // int Arr[n];
    // cout<<"Enter element of the arr: "<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>Arr[i];
    // }

    int arr[] ={1,3,5,7,3};
    int n= 5;
    
   bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){ 
            cout<<"Duplicate : " <<arr[i];
            flag=true;
            break;}
        }
        if(flag) break;
    }
}




