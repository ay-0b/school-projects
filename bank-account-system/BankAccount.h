#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount {
private:
    string ownerName;
    int accountNumber;
    double balance;
    vector<string> history;
    double initialBalance;
public:
    //constructor
    BankAccount(const string& x, int y, double z) {
        ownerName = x;
        accountNumber = y;
        balance = z;
        initialBalance = z;
    }

    //functions
    void deposit(double amount) {
        cout << "Deposited: $" << amount << endl; 
        balance += amount;
        history.push_back("Deposited $" + to_string(amount).substr(0, 6));
    }
    bool withdrawl(double amount) {
        cout << "Withdrew: $" << amount << endl;
        if (amount > balance) {
            cout << "Insufficient funds. \n";
        }
        else{
            balance -= amount;
            history.push_back("Withdrew $" + to_string(amount).substr(0, 6));
            if (balance == 0) {
                cout << "Balance is now zero.\n";
            }
        }
        return balance;
    }
    double getBalance() const {
        return balance;
    }
    void display() const {
        cout << "\nOwner name: " << ownerName << endl
            << "Account number: " << accountNumber << endl
            << "Balance: $" << balance << endl;
    }
    void showHistory() const {
        cout << "\nAccount created with initial deposit: $" << initialBalance << endl;
        for (const auto& i : history) {
            cout << i << endl;
        }
    }

};
