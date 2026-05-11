#include <bits/stdc++.h>
using namespace std;

void storeSubst(string ans, string original, int idx,vector<string> &v){
    if(idx==original.length()){
        v.push_back(ans);
        return;
    }
    char ch =original[idx];

    storeSubst(ans,original,idx+1,v);
    storeSubst(ans+ch,original,idx+1,v);
}
int main(){
    string str="ani";
    // pringSubst("",str);
    vector<string> v;
    storeSubst("",str,0,v);
    for(string ele: v){
        cout<<ele<<endl;
    }
}