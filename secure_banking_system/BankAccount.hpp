#include <string>
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accountNum, double bal)
        : accountNumber(accountNum), balance(bal) {}

    // Getter methods
    string getaccountNumber() const {
        return accountNumber;
    }

    double getbalance() const {
        return balance;
    }

    // Setter methods
    void setaccountNumber(string num) {
        accountNumber = num;
    }

    void setbalance(double bal) {
        balance = bal;
    }

    // Nested Transaction class
    class Transaction {
    public:
        static void deposit(BankAccount &account, double amount) {
            if (amount > 0) {
                double newBalance = account.getbalance() + amount;
                account.setbalance(newBalance);
                cout << "Deposited: $" << amount
                     << " | New Balance: $" << account.getbalance() << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        }

        static void withdraw(BankAccount &account, double amount) {
            if (amount <= 0) {
                cout << "Invalid withdrawal amount." << endl;
                return;
            }

            if (amount <= account.getbalance()) {
                double newBalance = account.getbalance() - amount;
                account.setbalance(newBalance);
                cout << "Withdrawn: $" << amount
                     << " | New Balance: $" << account.getbalance() << endl;
            } else {
                cout << "Insufficient funds. Withdrawal failed." << endl;
            }
        }
    };
};