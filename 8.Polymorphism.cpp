#include <bits/stdc++.h>
using namespace std;

class BankAccount {
public:
    double balance;

    BankAccount(double b) {
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: ₹" << amount << endl;
    }

    void deposit(double amount, string mode) {
        balance += amount;
        cout << "Deposited ₹" << amount << " via " << mode << endl;
    }

    virtual double getInterestRate() {
        return 0.0;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(double b) : BankAccount(b) {}

    double getInterestRate() override {
        return 4.5;
    }
};

int main() {
    BankAccount acc1(5000);
    acc1.deposit(1000);
    acc1.deposit(2000, "cheque");

    SavingsAccount acc2(8000);
    cout << "Interest Rate: " << acc2.getInterestRate() << "%" << endl;

    return 0;
}
