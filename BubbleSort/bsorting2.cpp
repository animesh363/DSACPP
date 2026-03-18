#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n=6;
    int arr[n] = {5,4,6,3,2,1};

    cout<<"Normal array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){ //n-1 passes
        //travesing
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl <<"After Sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }

    
}