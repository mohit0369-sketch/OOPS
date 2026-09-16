#include <iostream>
using namespace std;
class BankAccount {
private:
    float balance;
public:
    void deposit(float amount) {
        balance += amount;
    }
    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance";
    }
    void display() {
        cout << "Balance = " << balance;
    }
};
int main() {
    BankAccount b;
    b.deposit(5000);
    b.withdraw(1000);
    b.display();
    return 0;
}