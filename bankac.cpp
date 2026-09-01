#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance, double depositAmount, double withdrawAmount) {
        balance = initialBalance;
        cout << "Initial Balance: " << balance << endl;

        if (depositAmount > 0) {
            balance += depositAmount;
            cout << "Amount deposited: " << depositAmount << endl;
        }
        if (withdrawAmount > 0 && withdrawAmount <= balance) {
            balance -= withdrawAmount;
            cout << "Amount withdrawn: " << withdrawAmount << endl;
        }
        else if (withdrawAmount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000, 2000, 1500);

    return 0;
}