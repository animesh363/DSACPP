#include <bits/stdc++.h>
using namespace std;

struct Employee{
    string name;
    int empId;
    float salary;
};

int main(){
    Employee e[5];
    for(int i=0;i<5;i++){
        cout<<"Enter your name: ";
        cin>>e[i].name;
        cout<<"Enter empid: ";
        cin>>e[i].empId;
        cout<<"Enter salary: ";
        cin>>e[i].salary;
    }

    cout<<"RESULT";
    for (int i = 0; i < 5; i++) {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Name: " << e[i].name << endl;
        cout << "Employee ID: " << e[i].empId << endl;
        cout << "Salary: " << e[i].salary << endl;
    }

    // cout<<"Displaying HIGHESR salary"<<endl;
    // sort(e[1].salary.begin(),e[1].salary.end());

}