#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {2,4,1,7,4,9};
    int n=6;
    int target=9;

    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag =true;
            break;
        };
    }
    if(target == target) cout<<"Present";
    else cout<< "Not present";
}