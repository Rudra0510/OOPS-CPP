#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << endl;
        } 
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        } 
        else {
            cout << "Invalid withdrawal or insufficient balance!" << endl;
        }
    }
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};
int main() {
    BankAccount account(5000);
    account.displayBalance();
    account.deposit(2000);
    account.displayBalance();
    account.withdraw(1500);
    account.displayBalance();

    return 0;
}