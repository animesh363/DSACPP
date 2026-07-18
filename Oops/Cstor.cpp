#include <bits/stdc++.h>
using namespace std;

// class Student{  //
//     public:

//     Student(){          //We define the constructor Still nothing prints Because constructor runs only when object is created.
//         cout<<"Constrecture is called!";
//     }
// };
// int main(){
//     Student s1;     //Now object is created: Memory allocated -> Constructor automatically called -> Message printed.

//     return 0;
// }


class Student{
    public:
        string name;
        int age;

        Student(){
            name="Animesh Anand";
            age=22;
            }
};
int main(){
    Student s1;
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;

    return 0;
}