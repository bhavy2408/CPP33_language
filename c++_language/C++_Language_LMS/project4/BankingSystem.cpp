#include <iostream>

using namespace std;

class BankAccount
{
private:
    int balance;
    int accountNumber;
    string accountHolderName;

public:
    double amount;

    BankAccount()
    {
        balance = 0;
        accountNumber = 0;
        accountHolderName = "";
    }
    BankAccount(int bal, int accno, string ahn)
    {
        balance = bal;
        accountNumber = accno;
        accountHolderName = ahn;
    }

    void set()
    {
        cout << "Enter Balance : ";
        cin >> balance;

        cout << "Enter Acoount Number : ";
        cin >> accountNumber;

        cout << "Enter Holder Name : ";
        cin >> accountHolderName;
    }

    void display()
    {

        cout << "\nAccount Information:-\n";
        cout << "Balance : " << balance << endl;
        cout << "AC . NUmber : " << accountNumber << endl;
        cout << "Holder Name : " << accountHolderName << endl;
    }

    int getaccountNumber()
    {
        return accountNumber;
    }

    // Adds funds to the account.
    void deposit()
    {
        cout << "\nEnter your deposit Amount : ";
        cin >> amount;
        balance += amount;

        cout << "\n Deposited amount : " << amount << endl;
        cout << "\n Total Balance : " << balance << endl;
    }
    // Withdraws funds from the account.
    void withdraw()
    {
        cout << "Enter Your Withdraw Amount : ";
        cin >> amount;
        if (balance < amount)
        {
            cout << "You can not Withdraw the amount";
        }
        else
        {
            balance -= amount;

            cout << "\n Withdraw amount : " << amount << endl;
            cout << "\n Total Balance : " << balance << endl;
        }
    }
    void displayAccountInfo()
    {
        display();
    }
    int getBalance()
    {
        return balance;
    }
    void currentbalance(){
        cout << "Current Balance : " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount()
    {
        interestRate = 5;
    }

    void calculateInterest(double balance)
    {
        double interest = balance * interestRate / 100;

        cout << "Interest of Saving Account: " << interest << endl;
        cout << "Total Amount : " << balance + interest << endl;
    }
};
class CheakingAccount : public BankAccount
{
private:
    int overdraft;

public:
    CheakingAccount()
    {
        overdraft = -2000;
    }
    void setoverdraft(double balance)
    {
        if (balance >= overdraft)
        {
            cout << "Access !";
        }
        else
        {
            cout << "Over the limit !";
        }
    }
};
class FixedDeposite : public BankAccount
{
public:
    void calculateInterest(double balance)
    {
        int month;
        cout << "Enter Month wise :";
        cin >> month;

        double rate = 7;
        double intrest = balance * rate * month / 1200;

        cout << " Fixed Deposite Intrest : " << intrest << endl;
        cout << "Total Amount : " << balance + intrest << endl;
    }
};

int main()
{
    BankAccount *ba = new BankAccount();
    SavingsAccount sa;
    CheakingAccount ca;
    FixedDeposite fd;
    int choice = 0, accno;

    cout << "\nEnter Your account information :-\n";
    ba->set();
    ba->display();

    while (choice != 5)
    {
        cout << "\n=====================Bank Information chenged other wise choice 5======================";
        cout << "\n===                                     1.Deposit                                   ===";
        cout << "\n===                                     2.Withdraw                                  ===";
        cout << "\n===                                     3.Current Balance                           ===";
        cout << "\n===                                     4.Account Info                              ===";
        cout << "\n===                                     5.Exit                                      ===";
        cout << "\n=======================================================================================";

        cout << "\nEnter your choice : \n";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\n1.Deposit";
            cout << "\n Enter Account pin (Account Number) : ";
            cin >> accno;
            if (accno == ba->getaccountNumber())
            {
                ba->deposit();
            }
            else
            {
                cout << "Invalid account no\n";
            }
        }
        else if (choice == 2)
        {
            cout << "\n2.Withdraw";
            cout << "\n Enter Account pin (Account Number) : ";
            cin >> accno;
            if (accno == ba->getaccountNumber())
            {
                ba->withdraw();
            }
            else
            {
                cout << "Invalid account no\n";
            }
        }
        else if (choice == 3)
        {
            cout << "\n3.Current Balance";
            cout << "\n Enter Account pin (Account Number) : ";
            cin >> accno;
            if (accno == ba->getaccountNumber())
            {
                ba->currentbalance();
            }
            else
            {
                cout << "Invalid account no\n";
            }
        }
        else if (choice == 4)
        {
            cout << "\n4.Account Information ";
            cout << "\n Enter Account pin (Account Number) : ";
            cin >> accno;
            if (accno == ba->getaccountNumber())
            {
                ba->displayAccountInfo();
            }
            else
            {
                cout << "Invalid account no\n";
            }
        }
        else if (choice == 5)
        {
            cout << "Exit.......";
            break;
        }
        else
        {
            cout << "Invalid Choice :-";
        }
    }

    // account related information
    int choics = 0;
    while (choics != 4)
    {

        cout << "\n=====================Bank Information chenged other wise choice 5======================";
        cout << "\n===                         1.Saving Account(intrest rate)                          ===";
        cout << "\n===                         2.Cheaking Account (overdraft Limit)                    ===";
        cout << "\n===                         3.Fixed Deposit Account (duration in months)            ===";
        cout << "\n===                         4.Exit                                                  ===";
        cout << "\n=======================================================================================";

        cout << "\nEnter Your choice : ";
        cin >> choics;

        double bal = ba->getBalance();

        switch (choics)
        {
        case 1:
            cout << "\n1.Saving Account(intrest rate)";
            cout << "\n Enter Account pin (Account Number) : ";
            cin >> accno;
            if (accno == ba->getaccountNumber())
            {
                sa.calculateInterest(bal);
            }
            else
            {
                cout << "Invalid account no\n";
            }
            break;

        case 2:
            cout << "\n2.Cheaking Account (overdraft Limit)";
            cout << "\n Enter Account pin (Account Number) : ";
            cin >> accno;
            if (accno == ba->getaccountNumber())
            {
                ca.setoverdraft(bal);
            }
            else
            {
                cout << "Invalid account no\n";
            }
            break;

        case 3:
            cout << "\n3.Fixed Deposit Account (duration in months)";
            cout << "\n Enter Account pin (Account Number) : ";
            cin >> accno;
            if (accno == ba->getaccountNumber())
            {
                fd.calculateInterest(bal);
            }
            else
            {
                cout << "Invalid account no\n";
            }
            break;

        case 4:
            cout << "Exit....." << endl;
            break;

        default:
            cout << "Invalide Choice......!" << endl;
        }
    }

    return 0;
}