class BankAccount {
private:
    string accountHolderName;
    double balance;

public:

    BankAccount(string accountHolderName, double balance) {
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    string getAccountHolderName() {
        return accountHolderName;
    }

    void setAccountHolderName(string accountHolderName) {
        this->accountHolderName = accountHolderName;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
        }
    }
};
