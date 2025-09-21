#include <bits/stdc++.h>
using namespace std;

int main(){
    // int arr[5] = {1,2,3,4,5 };
    // // cout<<arr[0];
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    //ARRAY AS A USER INPUT
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // int arr[n];

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Elements: ";
    // for(int i=0;i<n;i++){
    //     cout<< arr[i]<<" ";
    // }

   /*Ques: Given an array of marks of students, if the
    markgof any student is less than 35 print its roll
    number. [roll number here refers to the index of the
    array.] */

        // int n;
        // cout<<"Enter no of student: ";
        // cin>>n; 

        // int marks[n];
        // cout<<"Enter marks: ";

        // for(int i=0;i<n;i++){
        //     cin>>marks[i];
        // }
        // cout<<"Students having marks below 35 are : "; //(roll number is same as indexes of array)

        // for(int i=0;i<n;i++){
        //     if(marks[i]<35){
        //         cout<< i<<" ";
        //     }
        // }
        //finding size

        // int arr[] = {1,2,3,4,5,6,7,8,9,0,9,8,7,6,5,4,3,2,1};

        // int Size = sizeof(arr) / sizeof(arr[0]); // b'z 1 int = 4 byte so full array ka size divided by 1 element ka size
        // cout<<"Size of Array: " <<Size;

    

//Ques : Calculate the sum of all the elements in the given array.
    // int n;
    // cout<<"Enter n: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Elements af array: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum = sum + arr[i];
    // }
    // cout<<"Sum = "<< sum;



//Ques : Find the element x in the array . Take array and x as input.

    int n;
    cout<<"Enter size of arr: ";
    cin>>n ;

    int arr[n];
    cout<<"Enter the element of arr: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int y;
    cout<<"Enter element you want to find: ";
    cin>>y;
    bool flag = false; //check mark
    for(int i=0;i<n;i++){
        if (arr[i] == y) flag=true;    
    }
    if (flag == true) cout<<"Your element is found";
    else cout<<"Your element is not found";

    // cout<<"Your element found at " <<index<<" index";
    
    


}