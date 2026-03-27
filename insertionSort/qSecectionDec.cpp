#include <bits/stdc++.h>
using namespace std;


//? Ques: Sort a String in decreasing order of values associated after removal of values smaller than X.
int main(){
    string s="AZYZXBDJKX";
    string ns;
    cout<<"String before sorting: ";
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            ns.push_back(s[i]);
        }
    }

    //sorting with insertion sort 
    int n=ns.length();
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && ns[j+1] > ns[j] ){ //decreasing order
            swap(ns[j+1] , ns[j]);
            j--;
        }
    }

    

    cout<<"\nString after sorting: ";
    for(int i=0;i<ns.length();i++){
        cout<<ns[i];
    }
}