#include<iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string customerName;
    float balance;
    public:
     BankAccount(int accNo, string name, float bal) {
        accountNumber = accNo;
        customerName = name;
        balance = bal;
     }
     friend void compareBalance(const BankAccount &a1, const BankAccount &a2);
};
void compareBalance(const BankAccount &a1, const BankAccount &a2) {
    if (a1.balance > a2.balance) {
        cout << "Account Holder with Higher Balance: "<< a1.customerName << endl;
        cout << "Balance: " << a1.balance << endl;
    }
    else if (a2.balance > a1.balance) {
        cout << "Account Holder with Higher Balance: "<< a2.customerName << endl;
        cout << "Balance: " << a2.balance << endl;
    }
    else {
        cout << "Both accounts have the same balance." << endl;
    }
}
int main() {
    BankAccount a1(101, "Vikas", 25000);
    BankAccount a2(102, "Mohit", 35000);
    compareBalance(a1, a2);
    return 0;
}