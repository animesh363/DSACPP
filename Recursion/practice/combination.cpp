#include <bits/stdc++.h>
using namespace std;

int steps=0;
void hanoi(int n, char a, char b, char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<< a <<" -> "<< c << endl;
    steps++;
    hanoi(n-1,b,a,c);
}
int main(){
    int n; cout<<"Enter n: "; cin>>n; // no of disk
    hanoi(n,'A','B','C'); // source, helper and destination rods
    cout<<"Total no of steps: " <<steps<<endl;
}