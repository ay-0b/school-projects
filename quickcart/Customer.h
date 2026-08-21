#ifndef CUSTOMER_H
#define CUSTOMER_H
 
#include <iostream>
#include <string>
#include "Cart.h"
#include "Receipt.h"
using namespace std;

class Customer {
private:
    string name;
    Cart cart;
    Receipt* receipt;
    
public:
    Customer(string n) {
        name = n;
        receipt = nullptr;
    }
    void setReceipt(Receipt& r) {
        receipt = &r;
    }
    Cart& getCart() {
        return cart;
    }

    void addCart(string item, double price) {
        cart.addItem(item, price);
    }
    void viewCart() {
        cout<<"\nCustomer: "<<name<<endl;
        cart.showCart();
    }
    void checkout() {
        if(receipt==nullptr) {
            cout<<"No receipt needed.\n";
            return;
        }
    cart.fillReceipt(*receipt);
    }
    void printReceipt() {
        if(receipt!=nullptr){
            receipt->showReceipt();
        }
    }
};
#endif