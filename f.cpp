#include <iostream>
using namespace std;
class ResultAnalyzer;
class StudentResult {
private:
    int rollNo;
    string name;
    float marks[3];
    static int totalStudents;
public:
    StudentResult(int r, string n, float m1, float m2, float m3) {
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        totalStudents++;
    }
    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }
    ~StudentResult() {
        cout << "Object destroyed: " << name << endl;
    }
    friend class ResultAnalyzer;
};
int StudentResult::totalStudents = 0;
class ResultAnalyzer {
public:
    void displayResult(StudentResult &s) {
        float total = s.marks[0] + s.marks[1] + s.marks[2];
        float percentage = total / 3;
        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        if (s.marks[0] >= 33 && s.marks[1] >= 33 && s.marks[2] >= 33)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};
int main() {
    StudentResult s1(101, "Mohit", 80, 75, 90);
    ResultAnalyzer r;
    r.displayResult(s1);
    cout << endl;
    StudentResult::showTotalStudents();
    return 0;
}