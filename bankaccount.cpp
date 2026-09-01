#include <iostream>
using namespace std;

class BankAccount{
    private:
    int balance;

    public:
    int addBalance;
    int withdrawBalance;

    void getbalance(){
        cout<<"Enter the amount: ";
        cin>>balance;
    }
    void deposit(){
        cout<<"Enter deposit balance: ";
        cin>>addBalance;
    }
    void withdraw(){
        cout<<"Enter withdrawing amount: ";
        cin>>withdrawBalance;
    }
    void display(){
       ```cpp
void display(){

    if(balance > withdrawBalance){
        balance = balance - withdrawBalance;
    }

    cout << left
         << setw(15) << "Main Balance"
         << setw(15) << "Amount Added"
         << setw(20) << "Amount Withdrawn"
         << setw(15) << "Final Amount" << endl;

    cout << left
         << setw(15) << balance
         << setw(15) << addBalance
         << setw(20) << withdrawBalance
         << setw(15) << balance + addBalance << endl;

    }      
};
int main(){
    BankAccount a;
    a.getbalance();
    a.deposit();
    a.withdraw();
    a.display();

    return 0;
}