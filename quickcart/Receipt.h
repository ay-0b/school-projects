#ifndef RECEIPT_H
#define RECEIPT_H
 
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class Receipt {
private:
    vector<string> items;
    vector<double> prices;
    
public:
    void addItem(const string& item, double price){
        items.push_back(item);
        prices.push_back(price);
    }
    
    void showReceipt() const {
        double total=0;
        cout<<string(26, '-')<<endl;
        cout<<setw(22)<<setfill(' ')<<"Quick Cart Receipt"<<endl;
        cout<<string(26, '-')<<endl;
        
        for(int i=0; i<items.size();++i){
            cout<<left<<setw(15)<<setfill(' ')<<items.at(i)
            <<" - $"<<prices.at(i)<<endl;
            total += prices.at(i);
        }
        cout<<"Total: $"<<total<<endl;
    }
};
#endif