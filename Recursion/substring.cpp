#include <bits/stdc++.h>
using namespace std;

// void pringSubst(string ans, string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch =original[0];
//     pringSubst(ans, original.substr(1));
//     pringSubst(ans+ch, original.substr(1));
// }

//with indexes

void pringSubst(string ans, string original, int idx){
    if(idx==original.length()){
        cout<<ans<<endl;
        return;
    }
    char ch =original[idx];

    pringSubst(ans,original,idx+1);
    pringSubst(ans+ch,original,idx+1);
}
int main(){
    string str="ani";
    // pringSubst("",str);
    pringSubst("",str,0);
}