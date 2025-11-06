#include<bits/stdc++.h>
using namespace std;

// int main(){
    // vector <int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    // v[4] = 9; //updating the value
     

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";

    
    // for(int i=0;i<v.size();i++){ //we can print value with loop as well
    //     cout<<v[i] << " ";
    // }

    // cout<<"\nCurrent size = " << v.size();
    // cout<<"\nCurrent capacity = " << v.capacity();

    // v.pop_back(); // removing last element
    

    // Size = how many elements are in the vector right now.

    // Capacity = how many elements the vector can hold without allocating more memory.


    // vector <int> v(10,7); //size 10 and each element has value 7
    // cout<<v[3] <<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i] <<" ";
    // }

    // int n;
    // cout<<"Enter size of vector: ";
    // cin>>n;
    // vector <int> v(n);
    // cout<<"Enter Elements of vector: ";
    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    //Without giving size
    // vector<int> v;
    // for(int i=0;i<5;i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int i=0;i<5;i++){
    //     cout<<v[i]<<" ";
    // }



    //At property

    // vector <int> v;
    // v.push_back(4);
    // v.push_back(9);
    // v.push_back(1);
    // v.push_back(7);


    // for (int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<endl;

    // sort(v.begin(), v.end());
    // cout<<"Shorted Array: ";
    // for (int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<endl;

     
// }

// void change(vector<int>&a){ //& ->ampercent oprator
//     a[0]=100;
// }
// int main(){
//     vector <int> v;
//     v.push_back(4);
//     v.push_back(9);
//     v.push_back(1);
//     v.push_back(7);
    
//     for (int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;


//     change(v); //jab refrence tabhi change hoga nahi to wo naya array banata hai

//     for (int i=0;i<v.size();i++){
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;

// }


//Q)Find the last occurrence of x in the array.
// int  main(){
//     vector <int> v;
//     v.push_back(1);
//     v.push_back(7);
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(7);
//     v.push_back(9);

//     int target =7;

//     int idx =-1;
//     //with forward loop

//     // for(int i=0;i<v.size();i++){
//     //     if(v[i] == target) idx = i;
//     // }

//     //with backward loop
//     for(int i=v.size()-1;i>=0;i--){
//         if(v[i] == target ){
//             idx = i;
//             break;
//         } 
//     }


//     cout<<"occurrence of x : " << idx;


    //Q) Find the doublet in the Array whose sum is equal to the given value x.(Two sum problem)
    // int x;
    // cout<<"Enter the target: ";
    // cin>>x;
    // int n;
    // cout<<"Enter size of vector: ";
    // cin>>n;
    // vector<int>v;

    // for(int i=0;i<n;i++){
    //     int q;
    //     cin>>q;
    //     v.push_back(q);
    // }

    // for(int i=0;i<=v.size()-1;i++){
    //     for(int j=0;j<=v.size()-1;j++){
    //         if(v[i] + v[j] == x){
    //             cout<<"(" <<i<<", "<<j<<")"<<endl;
    //         }
    //     }
    // }



    //Q) Write a program to copy the contents of one array into another in the reverse order.

    
//     int n;
//     cout<<"Enter size of vector: ";
//     cin>>n;
//     vector<int>v(n);
    
//     for(int i=0;i<n;i++){
//        cin>>v[i];
//     }

//    vector<int> v2(n);

//     for(int i=0;i<n;i++){
//         v2[i]=v[n-i-1];
        
//     }


//     // cout<<"Copied vectror: " << display(v2);
//     for(int i=0;i<n;i++){
//        cout<<v2[i]<<" ";
//     }


// }

//Q)Reverse array without using extra array(using Two pointer method)

// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(4);

//     cout<<"Before Reversal: ";
//     display(v);

//     int i=0;
//     int j=v.size()-1;

//     while(i<=j){
//         // int temp = v[i];
//         // v[i]=v[j];
//         // v[j] = temp;
//         i++;
//         j--;
//     }

//     // using swap
//     while(i<=j){
//         swap(v[i],v[j]);
//         i++;
//         j--;
//     }

//     //Using for loop***
//     // for(int i=0,j=v.size()-1;i<=j;i++,j--){
//     //     int temp = v[i];
//     //     v[i]=v[j];
//     //     v[j]=temp;
//     // }
    

//     cout<<"After Reversal: ";
//     display(v);

// }



// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void reversePart(int i,int j, vector<int> &a){
//     while(i<=j){
//         int temp =a[i];
//         a[i]=a[j];
//         a[j]=temp;
//         i++;
//         j--;

//     }
//     return;
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(4);

//     display(v);
//     reversePart(1,4,v);
//     cout<<endl;
//     display(v);

// }


//Rotation of array by K Steps
// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void reversePart(int i,int j, vector<int> &a){
//     while(i<=j){
//         int temp =a[i];
//         a[i]=a[j];
//         a[j]=temp;
//         i++;
//         j--;
//     }
//     return;
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(4);

//     display(v);

//     int k =3;
//     int n =v.size();
//     if(k>n) k=k%n;
//     reversePart(0,n-k-1,v);
//     reversePart(n-k,n-1,v);
//     reversePart(0,n-1,v);
//     display(v);
    
// }



//________________________________________________________________     Questions      ________________________________________________________________


// //Q)Sort the array of O's and I's ?
    
//     int main(){
//         vector<int>v;
//         v.push_back(0);
//         v.push_back(1);
//         v.push_back(1);
//         v.push_back(0);
//         v.push_back(1);
//         v.push_back(0);
//         v.push_back(0);
//         v.push_back(1);

//         // M1

//         // int noz =0;
//         // int noo=0;
//         // for(int i=0;i<v.size();i++){
//         //     if(v[i] == 0) noz++;
//         //     else noo++;  
//         // }
//         // for(int i=0;i<v.size();i++){
//         //     if(i<noz) v[i] = 0;
//         //     else v[i] = 1;  
//         // }
//         // cout<<"Shorted Element: ";
//         // for(int i=0;i<v.size();i++){
//         //     cout<<v[i]<<" ";
//         // }

//         //M2

//         int i=0;
//         int j=v.size()-1;
//         while(i<j){
//             if(v[i] == 0) i++;
//             if(v[j]== 1) j--;
//             if(i>j) break;// will break loop in the last itration
//             if(v[i]==1 && v[j]==0){
//                 v[i]=0;
//                 v[j]=1;
//                 i++;
//                 j--;  
//             }  
//         }
//         cout<<"Shorted Element: ";
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//     }

    //__________________________________________________________________________________________


    // void swap01(vector<int>&a){
    //     int i=0;
    //     int j=a.size()-1;

    //     while(i<j){
    //         if(a[i]<0) i++;
    //         else if(a[j]>0) j--;
    //         else if(a[i]>0 && a[j]<0) {
    //             swap(a[i],a[j]);
    //             i++;
    //             j--;
    //         }

    //     }
    // }
    // void display(vector<int> &a){
    //     for(int i=0;i<a.size();i++){
    //         cout<<a[i]<<" ";
    //     }
    // }
    // int main(){
    //     vector<int>v;
    //     v.push_back(-1);
    //     v.push_back(3);
    //     v.push_back(-1);
    //     v.push_back(-3);
    //     v.push_back(8);
    //     v.push_back(4);
    //     v.push_back(-1);
    //     v.push_back(-7);

    //     swap01(v);
    //     display(v);
    //     cout<<endl;
        
    //     sort(v.begin(),v.end());
    //     cout<<"Shorted array: ";
    //     display(v);
        
    // }
    // void merge(vector<int>&v1 , vector<int>&v2, vector<int>&temp){
    //     int i=0;
    //     int j=0;
    //     int k=0;
    //     int m=v1.size();
    //     int n=v2.size();

    //     while(i<m && j<n){
    //         if(v1[i]<v2[j]){
    //             temp[k]=v1[i];
    //             i++;
    //         }else{
    //             temp[k]=v2[j];
    //             j++;
    //         }
    //         k++;
    //     }
    //     while(i<m){
    //         temp[k]=v1[i];
    //         i++;
    //         k++;
    //     }
    //     while(j<n){
    //         temp[k]=v2[j];
    //         j++;
    //         k++;
    //     }   
    // }
    // int main(){
    //     vector<int> v1={1,4,5,8}, v2={2,3,6,7,10,12};
    //     vector<int> temp(4+6);
    //     merge(v1, v2, temp);
    //     cout<<"Shorted Array: ";
    //     for(int i=0;i<temp.size();i++){
    //         cout<<temp[i]<<" ";
    //     }

    // }


    // void preGretest(vector<int> &height){
    //     for(int i=0;i<height.size();i++){
    //         int max=height[i];
    //         if(max<height[i]){
    //             max=height[i];
    //         }
    //     }
        
    // }


    // int main(){
    //     vector<int> height= {0,1,0,2,1,0,1,3,2,1,2,1};
    //     preGretest(height);
        
    // }


    //_______________________________________________________________   2D Arrays   _______________________________________________________________



int main(){

    //First way of declaring 
    // int Arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<Arr[0][0] <<" ";
    // cout<<Arr[0][1] <<" ";
    // cout<<Arr[0][2]<<endl;
    // cout<<Arr[1][0] <<" "; 
    // cout<<Arr[1][1] <<" ";
    // cout<<Arr[1][2]<<endl;
    // cout<<Arr[2][0] <<" ";
    // cout<<Arr[2][1] <<" ";
    // cout<<Arr[2][2]<<endl;


    // //second way of declaring 
    // int Arr[3][3]={1,2,3,4,5,6,7,8,9}; //this ia also correct way
    // cout<<Arr[0][0] <<" ";
    // cout<<Arr[0][1] <<" ";
    // cout<<Arr[0][2]<<endl;
    // cout<<Arr[1][0] <<" ";
    // cout<<Arr[1][1] <<" ";
    // cout<<Arr[1][2]<<endl;
    // cout<<Arr[2][0] <<" ";
    // cout<<Arr[2][1] <<" ";
    // cout<<Arr[2][2]<<endl;


    //Printing with the help of loop
    // int Arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<Arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // int m;
    // cout<<"Enter the no of rows: ";
    // cin>>m;
    // int n;
    // cout<<"Enter the no of colums: ";
    // cin>>n;

    // int Arr[m][n];
    // cout<<"Enter the elements: "<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>Arr[i][j];
    //     }
    // }
    // cout<<"_____  Your Array  _____"<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<Arr[i][j]<<" ";

    //     }
    //     cout<<endl;
    // }

//Q)Write a program to store roll number and marks obtained by 4 students side by side in a matrix.


    // int list[4][2];

    // cout<<"Enter  marks: ";
    // for(int i=1;i<=4;i++){
    //         cin>>list[i][j];
    // }
    // cout<<"Marks are: "<<endl;
    // for(int i=1;i<=4;i++){
    //     for(int j=1;j<=2;j++){
    //         cout<<list[i][j] <<" ";
    //     }
    //     cout<<endl;
    // }

    int m;
    cout<<"Enter no of rows: ";
    cin>>m;
    int n;
    cout<<"Enter no of colums: ";
    cin>>n;

    int Arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>Arr[i][j];
        }
    }
    cout<<"Your 2D Array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max = INT_MIN;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(Arr[i][j]>max){
                max = Arr[i][j];
            }
        }
    }

    cout<<"Grreatest element = "<<max;

    






}








