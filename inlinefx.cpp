#include<iostream>
using namespace std;
int data(int a,int b){
    return a+b;
}
void data(string name="Student"){
cout<<name<<endl;
}

int main(){
    int x=30;
    int y=40;
    cout<<data(x,y)<<endl;
    cout<<"Incline function:"<<data(5,3)<<endl;
cout<<"------Default Arguments------"<<endl;
    data();
    data("Vikas");
    return 0;
}