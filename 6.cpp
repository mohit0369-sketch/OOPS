#include <iostream>
using namespace std;
class Student {
    int roll;
    string name;
public:
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor" << endl;
    }
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor" << endl;
    }
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor" << endl;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};
int main() {
    Student s1;
    s1.display();
    Student s2(101,"Rahul");
    s2.display();
    Student s3(s2);
    s3.display();
    return 0;
}