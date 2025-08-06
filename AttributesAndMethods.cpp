class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        //constructor
        BankAccount(string accNumber,double bal){
            this->accountNumber = accNumber;
            this->balance = bal;
        }

        void deposit(double amount){
            if(amount>0){
                balance += amount;
            }
        }

        void withdraw(double amount){
            if(amount<=balance){
                balance -= amount;
            }
            else cout<<"Insufficient funds!"<<endl;
        }

        void displayDetails(){
            cout<<"Account Number : "<<accountNumber<<endl;
            cout<<"Balance : "<<fixed<<setprecision(2)<<balance<<endl;
        }
};
