#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int rollno;
        float marks;


    void input(){
        cout<<"Name: ";cin>>name;
        cout<<"Roll No: ";cin>>rollno;
        cout<<"Marks: ";cin>>marks;
    }

    void display(){
        cout<<"Your name is "<<name << endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Your marks is :"<<endl;
    }
};
int main(){
    Student s[5];
    for(int i=0;i<5;i++){
        cout<<"Enter detail of student: "<<i+1<<endl;
        s[i].input();
    }

    for(int i=0;i<5;i++){
        cout<<"Displaying Result of student: "<<i+1<<endl;
        s[i].display();
    }
}