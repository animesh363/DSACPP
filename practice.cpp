#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[6] = {5, 6, 7, 8, 9, 10};

//     cout<<arr[0] <<endl;
//     cout<<arr[1] <<endl;
//     cout<<arr[2] <<endl;


//     cout<<"Elements are: ";
//     for (int i =0; i < 6; i++){
//         cout<<  arr[i] << " ";
//     }

    
//     cout<<endl;
//     arr[0] = 0;
//     cout<<arr[0];
// }

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }

// }


// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }


// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }

// }


void star(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    star(n);

}