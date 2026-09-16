#include <bits/stdc++.h>
using namespace std;

class Myclass{
    public:
    int rollNo;
    string name;

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<< rollNo<<endl;
        
    }
};

int main(){
    Myclass m;
    m.name="Animesh";
    m.rollNo=50;
    m.display();

}