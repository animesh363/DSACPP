#include <bits/stdc++.h>
using namespace std;

int findSup(int arr[],int n){
    int cnt=1; //because rightmost is superior always
    int supMax=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>supMax){
            cnt++;
            supMax=arr[i];
        }
    }
    return cnt;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = findSup(arr,n);
    cout<<result;
}