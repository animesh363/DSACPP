#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n=5;
    int arr[n]={5,3,1,4,2};

    cout<<"Element before sorting: "<<endl;
    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1&& arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    cout<<"\nAfter Insertion sort: "<<endl;
    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<" ";
    }


}