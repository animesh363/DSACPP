#include<bits/stdc++.h>
using namespace std;

int main(){
//?             ________Time & Space complexity________

//!Q1): Given an array of size n+l consisting of integers from 1 to n. One of the elements is duplicate in the array. Find that duplicate element. 
    

//     int arr[] ={1,3,5,7,3};
//     int n =5 ;
    
//    bool flag=false;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){ 
//             cout<<"Duplicate : " <<arr[i];
//             flag=true;
//             break;}
//         } 
//         if(flag) break;
//     }


    // int arr[] ={1,3,5,7,3};
    // int n = 5;

    // int arr[5] ={0,0,0,0,0}




    //M3

    //solving using maths n*(n+1)/2

    vector <int> arr={6,3,2,4,1,7,1,5};
    int n = arr.size()-1;//bz one element is duplicate

    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum += arr[i];
    }
    int sum2 = (n*(n+1))/2;

    int duplicate = sum - sum2;
    cout<<duplicate;





    


}




