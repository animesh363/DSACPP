// : Print zig-zag

// Input
// 1
// 2
// 3
// 4
// Output
// 111
// 211121112
// 321112111232111211123
// 432111211123211121112343211121112321112111234


#include <bits/stdc++.h>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout<<n;
    zigzag(n-1);
    cout<<n;
    zigzag(n-1);
    cout<<n;

}
int main(){
    cout<<"Enter n: ";
    int n; cin>>n;
    zigzag(n);
}