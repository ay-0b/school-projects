# Bank Account System

A console-based banking system written in C++, built as a group mid-term project (GA1-7) for CSCI 272-1. The program lets a user create an account, then deposit, withdraw, check their balance, view account info, and review transaction history through a menu-driven interface.

## How it works

On startup, the program collects the account owner's name, account number, and an initial deposit, then presents a menu:

1. Deposit
2. Withdraw
3. Show Balance
4. Show Account Info
5. Show Transaction History
6. Exit

Withdrawals are rejected if funds are insufficient, and all deposits/withdrawals are logged to a transaction history that can be reviewed at any time.

## Design

The `BankAccount` class encapsulates account state (owner, account number, balance, transaction history) behind a small public interface (`deposit`, `withdrawl`, `getBalance`, `display`, `showHistory`), demonstrating encapsulation and getter/setter-style access control.

## Build & run

```bash
g++ -std=c++17 -o bank main.cpp
./bank
```

## Concepts used

Classes and encapsulation, input validation loops, `vector`-based history tracking, and menu-driven console programs in C++.
