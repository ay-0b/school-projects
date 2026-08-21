#ifndef CART_H
#define CART_H
 
#include <iostream>
#include <string>
#include <vector>
#include "Receipt.h"
using namespace std;


class Cart {
private:
    vector<string> items;
    vector<double> prices;

public:
    void addItem(string item, double price) {
    items.push_back(item);
    prices.push_back(price);
    }
    void fillReceipt(Receipt& r) {
        for(int i=0;i<items.size();i++){
            r.addItem(items.at(i), prices.at(i));
        }
    }
    void showCart() const {
        double total = 0;
        cout << "\nCart Items:\n";
        for (int i = 0; i < items.size(); i++) {
            cout << items[i] << " - $" << prices[i] << endl;
            total += prices[i];
        }

        cout << "Total: $" << total << endl;
    }
};
#endif