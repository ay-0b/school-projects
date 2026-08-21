Bank System Project


#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include "BankAccount.h"

using namespace std;

int main() {
    string ownerName;
    int accountNumber;
    double initialDeposit;
    double amount;
    int choice = 0;

    cout << "Welcome" << endl;
    cout << setfill('=') << setw(20) << "Banking System" << setw(20) << "" << setfill(' ') << endl;

    cout << "Enter owner name: ";
    getline(cin, ownerName);

    cout << "Enter account number: ";
    cin >> accountNumber;
    while (cin.fail() || accountNumber <= 0) {
        cout << "Invalid input. Enter a positive account number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> accountNumber;
    }

    cout << "Enter initial deposit: ";
    cin >> initialDeposit;
    while (cin.fail() || initialDeposit <= 0) {
        cout << "Invalid input. Enter a positive value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> initialDeposit;
    }

    BankAccount bankInfo(ownerName, accountNumber, initialDeposit);

    cout << "\nWhat would you like to do today?" << endl;

    while (choice != 6) {
        cout << "\nMenu:" << endl;
        cout << "1) Deposit" << endl;
        cout << "2) Withdraw" << endl;
        cout << "3) Show Balance" << endl;
        cout << "4) Show Account Info" << endl;
        cout << "5) Show Transaction History" << endl;
        cout << "6) Exit" << endl;
        cout << "Enter choice number: ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number from 1-6." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice. Please enter a number from 1-6." << endl;
        }

        else if (choice == 1) {
            cout << "Enter deposit amount: ";
            cin >> amount;

            while (cin.fail() || amount <= 0) {
                cout << "Invalid input. Enter a positive value: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> amount;
            }

            bankInfo.deposit(amount);
        }

        else if (choice == 2) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            while (cin.fail() || amount <= 0) {
                cout << "Invalid input. Enter a positive value: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> amount;
            }

            bankInfo.withdrawl(amount);  
        }

        else if (choice == 3) {
            cout << fixed << setprecision(2);
            cout << "Current balance: $" << bankInfo.getBalance() << endl;
        }

        else if (choice == 4) {
            bankInfo.display();
        }

        else if (choice == 5) {
            bankInfo.showHistory();
        }

        else if (choice == 6) {
            cout << "Goodbye!" << endl;
        }
    }

    return 0;
}

//Reflection

//
