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
        cout<<"Main Balance: "<<balance<<endl;
        cout<<"Amount Added: "<<balance+addBalance<<endl;
        if(balance>withdrawBalance){
           balance=balance-withdrawBalance;
        cout<<"Amount Withdrawn: "<<withdrawBalance<<endl;}
        cout<<"Final Amount: "<<balance+addBalance<<endl;
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