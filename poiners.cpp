#include <bits/stdc++.h>
using namespace std;
// int main(){
    // cout<< sizeof(int) <<" bytes" <<endl;
    // cout<< sizeof(float) <<" bytes" <<endl;
    // cout<< sizeof(bool) <<" bytes" <<endl;
    // cout<< sizeof(long long) <<" bytes" <<endl;
    // cout<< sizeof(double) <<" bytes" <<endl;
    // cout<< sizeof(int) <<" bytes" <<endl;



    // int x = 4;
    // int* p =&x;

    // cout<< &x <<endl; //0x60ff08
    // cout<< p <<endl;  //0x60ff08 same

    // cout<< *p <<endl; // 4 (called derefrence oprator)

    // *p = 8; //updated the value
    // cout<<x;


//q)sum of two number using pointers

//     int x,y;
//     cout<<"Enter two num: ";
//     cin>>x>>y;


//     int *p1 = &x;
//     int *p2 = &y;

//     cout<<"Sum = " << *p1 + *p2;

    
// }


// int main(){
//     int x=10, y=12;
//     int *p1 = &x, *p2 = y;
//     cout<< *p1 ; 
// }

//SWAPING WITH POINTERS

// void swap(int *x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y=temp;
    
// }
// int main(){
//     int a,b;
//     cout<<"Enter 2 numbers: ";
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<< "Swaped number = " << a <<" " <<b;
// }


// void swap(int *x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main(){
//     int a=6, b=8;
//     int *x = &a;
//     int *y = &b;
//     swap(x,y);
//     cout<< "Swaped number: "<< a <<" "<<b;

// }

//ALIAS METHOD

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    swap(a,b);
    cout<< "Swaped number: "<< a <<" "<<b;
}



