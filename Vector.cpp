#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    v[4] = 9; //updating the value
     

    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    // cout<<v[4]<<" ";

    
    for(int i=0;i<v.size();i++){ //we can print value with loop as well
        cout<<v[i] << " ";
    }

    cout<<"\nCurrent size = " << v.size();
    cout<<"\nCurrent capacity = " << v.capacity();

    v.pop_back(); // removing last element
    

    // Size = how many elements are in the vector right now.

    // Capacity = how many elements the vector can hold without allocating more memory.
    
}