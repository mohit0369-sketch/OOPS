#include <iostream>
using namespace std;
class Student {
    int marks;
    static int count;
public:
    Student(int m) {
        marks = m;
        count++;
    }
    void display() {
        cout << "Marks: " << marks << endl;
    }
    static void showCount() {
        cout << "Total Students: " << count << endl;
    }
    friend void showMarks(Student s);
};
int Student::count = 0;
void showMarks(Student s) {
    cout << "Friend Function - Marks: " << s.marks << endl;
}
int main() {
    Student s1(85);
    Student s2(90);
    s1.display();
    s2.display();
    Student::showCount();
    showMarks(s1);
    return 0;
}