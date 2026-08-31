#include <bits/stdc++.h>
using namespace std;

int maxSub(int arr[], int n){
    int cur=1;
    int max=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) cur++;
        else cur=1;
        if(cur>max) max=cur;
    }

    return max;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter n elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = maxSub(arr, n);
    cout<<"max contigious lenth: "<< ans;

}