#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int age;
public:
    void setAge(int a) {
        if (a >= 0 && a <= 100) {
            age = a;
        } else {
            cout << "Invalid age!" << endl;
        }
    }
    int getAge() {
        return age;
    }
};
int main() {
    Student s;
    s.setAge(102);
    cout << s.getAge();
    return 0;
}