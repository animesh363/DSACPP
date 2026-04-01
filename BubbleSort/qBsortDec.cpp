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

    //sorting with buble sort
    int n=ns.length();
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1-i;j++){
            if(ns[j] < ns[n+1]){
                swap(ns[j],ns[j+1]);
                flag=true;
            }
        }
        if(flag == false) break;
    }

    cout<<"\nString after sorting: ";
    for(int i=0;i<ns.length();i++){
        cout<<ns[i];
    }
}