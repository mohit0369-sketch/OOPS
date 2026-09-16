#include<iostream>
using namespace std;
class Student{
    public:
int rollno;
string name;
int marks;
void input(){
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>rollno;
    cout<<"Enter marks: ";
    cin>>marks;
}
    void display(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Roll no. is: "<<rollno<<endl;
        cout<<"Marks is: "<<marks<<endl;
    }
};
int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}
