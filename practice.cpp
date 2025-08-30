#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {5, 6, 7, 8, 9, 10};

    cout<<arr[0] <<endl;
    cout<<arr[1] <<endl;
    cout<<arr[2] <<endl;


    cout<<"Elements are: ";
    for (int i =0; i < 6; i++){
        cout<<  arr[i] << " ";
    }

    
    cout<<endl;
    arr[0] = 0;
    cout<<arr[0];
}