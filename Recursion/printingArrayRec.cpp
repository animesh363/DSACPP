#include <bits/stdc++.h>
using namespace std;


void display(int arr[], int n, int idx){ // idx - >shows starting index
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);

}
int main(){
    int arr[] ={1,2,3,4,5,6,2,5,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size: "<<n<<endl;
    cout<<"Elements: ";
    display(arr,n,0); 
}