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
void pringSubst(string ans, string original, int idx){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch =original[idx];

    pringSubst(ans,);
    pringSubst(ans+ch,);
}

int main(){
    string str="ani";
    // pringSubst("",str);
    pringSubst("",str,0);
}