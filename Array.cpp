#include <bits/stdc++.h>
using namespace std;

// int main(){
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

    // int n;
    // cout<<"Enter size of arr: ";
    // cin>>n ;

    // int arr[n];
    // cout<<"Enter the element of arr: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int y;
    // cout<<"Enter element you want to find: ";
    // cin>>y;
    // bool flag = false; //check mark
    // for(int i=0;i<n;i++){
    //     if (arr[i] == y) flag=true;    
    // }
    // if (flag == true) cout<<"Your element is found";
    // else cout<<"Your element is not found";

    
    
//Q)find the maximum value out of all elements in the array

    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the elements of the array: ";
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int max = arr[0];
    // for(int i=1;i<n;i++){
    //     if (max<arr[i]) max=arr[i];
    // }
    // cout<<"Maximum Element = "<<max;

//Q)Find Second largest element in the array

    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the elements of the array: ";
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int max = INT_MIN; // eka bahut chhoti value assign kar diye
    // for(int i=1;i<n;i++){
    //     if(max<arr[i]) max=arr[i];
    // }
    // int Smax = INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(Smax < arr[i] && arr[i] != max){
    //         Smax = arr[i];
    //     }
    // }
    // cout<<"Your Second largest element = "<<Smax;



//Q)find element greator than x
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the elements of the array: ";
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int y;
    // cout <<"Enter y";
    // cin>>y;
    // int count = 0;
    // for (int i=0;i<n;i++){
    //     if(arr[i] >y) count++;
    // }
    // cout<<"No of elements: "<<count;

// } \\yahan main khatam huaa


// ______________________________________________________________________________________________
//Passing array to a function


// void print(int a[]){
//     for(int i=0;i<=4;i++){
//         cout<<a[i] <<" ";
//     }
//     cout<<endl;
//     return;
// }
// void change(int b[]){
//     b[0]=100;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     print(arr);
//     change(arr);  //ishne change function ko call laga ke change kar
//     print(arr);

// }

// void print(int a[],int size){
    
//     for(int i=0;i<=4;i++){
//         cout<<a[i] <<" ";
//     }
//     cout<<endl;
//     return;
// }
// void change(int b[],int size){
//     b[0]=100;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};

//     int size = sizeof(arr)/sizeof(arr[0]);
//     print(arr,size);
//     change(arr,size);  //ishne change function ko call laga ke change kar
//     print(arr,size);

// }

//Pointer array
int main(){
    int arr[] = {1,2,3,4,5};

    int *ptr = arr;//correct way for array storing address
    cout<<ptr<<endl;//0x60fef0
    cout<<ptr[0] <<endl;//1
    for(int i=0;i<5;i++){
        cout<<ptr[i]  <<" ";
        ptr++;
    }

}

//goint toward array and pointer