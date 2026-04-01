#include <bits/stdc++.h>
using namespace std;

int BSearch(int arr[], int size, int target){
    int lo=0;
    int hi=size-1;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]== target) return mid;
        else if(arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1; //not present
}


int main(){
    int arr[] = {1,2,4,5,6,7,9,12,23,34,45,56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 34;

    int result = BSearch(arr,size,target);

    if(result != -1 ){
        cout<<"Element found at index: " << result;
    }else{
        cout<<"Element not found";
    }

    return 0;

    


}