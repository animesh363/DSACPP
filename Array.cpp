#include <bits/stdc++.h>
using namespace std;

int main(){
    // int arr[5] = {1,2,3,4,5 };
    // // cout<<arr[0];
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    //ARRAY AS A USER INPUT
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements: ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }



}