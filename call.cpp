// Call by Value and Call by Reference
#include <iostream>
using namespace std;
void Data(int x)
{
    x = 50;
    cout << "Value inside call by value = " << x << endl;
}
void data(int &x)
{
    x = 20;
    cout << "Value inside call by reference = " << x << endl;
}
int main()
{
    int m = 100;

    // Call by Value
    cout << "Before call by value = " << m << endl;
    Data(m);
    cout << "After call by value = " << m << endl;

    cout<<endl;

    // Call by Reference
    cout << "Before call by reference = " << m << endl;
    data(m);
    cout << "After call by reference = " << m << endl;

    return 0;
}