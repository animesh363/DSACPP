#include <bits/stdc++.h>
using namespace std;

void skipChar(string ans, string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') skipChar(ans, original.substr(1)) ;
    else skipChar(ans+ch, original.substr(1));

}
int main(){
    string str = "animesh thakur";
    cout<<"Updatd String: ";
    skipChar("",str);

}