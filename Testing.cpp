#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;

    int Arr[m][n];
    cout<<"Enter all the elemnts of your arry: "<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>Arr[i][j];
        }
    }

    cout<<"Your 2D Array is "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //Printing Directly Transpose

    // cout<<"Transpose of your matrics is: "<<endl;
    // for(int j=0;j<n;j++){
    //     for(int i=0;i<m;i++){
    //         cout<<Arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Stroring and printing Transpose

    int Tr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            Tr[i][j]=Arr[j][i];

        }
    }

    cout<<"Traspose of your matrics " <<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<Tr[i][j]<<" ";
        }
        cout<<endl;
    }



}
//Testing is completed