//strecture-> user defind data type

#include <bits/stdc++.h>
using namespace std;

struct Student{
    int rollNo;
    string name;
    int age;
    float marks;
};

int main(){
    // Student s1;
    // s1.rollNo=1;
    // s1.name="Aryan";
    // s1.age=24;
    // s1.marks=85.5;

    //Taking input frommuser
    // Student s1;
    // cout<<"Enter Roll no: ";
    // cin>>s1.rollNo;
    // cout<<"Enter Name: ";
    // cin>>s1.name;
    // cout<<"Enter age: ";
    // cin>>s1.age;
    // cout<<"Enter marks: ";
    // cin>>s1.marks;

    //For multiple

    Student s1[3];
    for(int i=0;i<3;i++){
        cout<<"Enter Roll no: ";
        cin>>s1[i].rollNo;
        cout<<"Enter Name: ";
        cin>>s1[i].name;
        cout<<"Enter age: ";
        cin>>s1[i].age;
        cout<<"Enter marks: ";
        cin>>s1[i].marks;
    }



    cout<<"---DISPLAYING THE RESULT---"<<endl;
    cout << "Roll No: " << s1[i].rollNo << endl;
    cout << "Name: " << s1[i].name << endl;
    cout << "Age: " << s1[i].age << endl;
    cout << "Marks: " << s1[i].marks << endl;


}