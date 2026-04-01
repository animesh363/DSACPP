#include <bits/stdc++.h>
using namespace std;

//Ques : Given an array with N distinct elements,convert the given array to a form where allelements are in the range from O to N-1. The order  of elements is the same, i.e., O is placed in the place of the smallest element, 1 is placed for the second smallest element, ... N-1 is placed for the largest element.

int main(){
    int arr[] = {19,12,23,8,16};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> v(5,0);
    int x=0;


    for(int i=0;i<n;i++){
        int min =INT_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else {
                if(min>arr[j]){
                    min =arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; //visited
        x++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}