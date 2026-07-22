#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={5,3,1,4,2};

    cout<<"Element before sorting"<<endl;
    for(int ele : arr){
        cout<<ele<<" ";
    }
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;

        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    cout<<"\nAfter Selection sort: "<<endl;
    for(int ele : arr){ //this is is foreach loop eg-> for every element in arr cout element
        cout<<ele<<" ";
    }


}


//this is selection sort algorithm which is used to sort the array in increasing order. It works by finding the minimum element from the unsorted part of the array and swapping it with the first unsorted element. This process is repeated for all elements in the array until the entire array is sorted.