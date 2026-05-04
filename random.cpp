#include <bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int regNo;
};
void display(Student s){
    cout<<"Name: "<<s.name<<endl;
    cout<<"RegNo: "<<s.regNo<<endl;
}

int main(){
    Student s;
    s.name = "Animesh";
    s.regNo = 12321551;
    display(s);
}