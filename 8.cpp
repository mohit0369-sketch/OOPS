#include <iostream>
using namespace std;
class Number {
    int value;
public:
    void input() {
        cout << "Enter value: ";
        cin >> value;
    }
    Number add(Number n) {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }
    void display() {
        cout << "Result: " << value << endl;
    }
};
int main() {
    Number n1, n2, n3;
    n1.input();
    n2.input();
    n3 = n1.add(n2);
    n3.display();
    return 0;
}