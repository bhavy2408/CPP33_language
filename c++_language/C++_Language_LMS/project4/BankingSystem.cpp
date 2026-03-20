#include<iostream>

using namespace std;

class BankAccount{
    private:
    int balance;
    int accountNumber;
    string accountHolderName;
    
    public:
    double amount;

    BankAccount(){
        balance=0;
        accountNumber=0;
        accountHolderName = "";
    }
    BankAccount(int bal , int accno , string ahn){
        balance = bal;
        accountNumber = accno;
        accountHolderName = ahn;
    }

    void set(){
        cout << "Enter Balance : ";
        cin >> balance;

        cout << "Enter Acoount Number : ";
        cin >> accountNumber;

        cout << "Enter Holder Name : ";
        cin >> accountHolderName;
    }

    void display(){

        cout << "Balance : " << balance << endl;
        cout << "AC . NUmber : " << accountNumber << endl;
        cout << "Holder Name : " << accountHolderName << endl;
    }

    void deposit(){}

};