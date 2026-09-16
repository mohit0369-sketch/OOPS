#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int g;
    void input(){
    cout << "Enter name: ";
    cin>>name;
    cout << "Enter roll number: ";
    cin>>rollno;
    }
    void display(){
        cout<<"Name is :"<<name<<endl;

        cout<<"Roll no."<<rollno<<endl;
    }
    void grade(){
    cout<<"Enter the Grade: ";
    cin>>g;
    }
    void displaygrade(int g){
        if(g>=70){
            cout<<"Garde A"<<endl;
        }
            else if(g<70 && g>=50){
                cout<<"Grade B"<<endl;
            }
            else if(g<50 && g>=33){
                cout<<"Grade c"<<endl;
            }
            else{
                cout<<"Failed"<<endl;
            }
        }
    };
  int main(){
    student s;
    s.input();
    s.display();
    s.grade();
    s.displaygrade(s.g);
  }
