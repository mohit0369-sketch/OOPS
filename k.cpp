#include <bits/stdc++.h>
using namespace std;
class BankAccount {
private:
    int accno;
    int bal;
public:
    BankAccount(int a,int b) {
        accno = a;
        bal= b;
    }
friend void compareBalance(BankAccount, BankAccount);
};
void compareBalance(BankAccount a, BankAccount b) {
    if (a.bal>b.bal)
        cout <<"Account "<< a.accno <<" has the higher balance.";
    else
        cout <<"Account "<< b.accno <<" has the higher balance.";
}
int main() {
    BankAccount a1(101, 45000);
    BankAccount a2(102, 62000);
    compareBalance(a1, a2);
    return 0;
}