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
int  main(){
    vector <int> v;
    
    v.push_back(1);
    v.push_back(7);
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    v.push_back(7);
    v.push_back(9);
    int target =7;

    int idx =-1;
    for(int i=0;i<v.size();i++){
        if(v[i] == target) idx = i;
    }

    cout<<"occurrence of x : " << idx;
}