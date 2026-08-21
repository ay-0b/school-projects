#ifndef DAIRY_H
#define DAIRY_H
 
#include <iostream>
#include <string>
#include <vector>
#include "Categories.h"
#include "Cart.h"
using namespace std;

class Dairy : public Categories{
    private:
    vector<string> items;
    vector<double> prices;
    
    public:
    Dairy(){
    }
    void chooseDairy() {
        int dairyChoice;
        while(true) {
            cout<<"\nChoose Dairy Item(s)\n";
            cout<<"1. Milk($5.99)\n2. Eggs($4.49)\n";
            cout<<"3. Ice-Cream($6.99)\n0. Done\n";
            cout<<"Enter choice: ";
            cin>>dairyChoice;
            if(dairyChoice==0){
                break;
            }else if(dairyChoice==1){
                items.push_back("Milk");
                prices.push_back(5.99);
            }else if(dairyChoice==2){
                items.push_back("Eggs");
                prices.push_back(4.49);
            }else if(dairyChoice==3){
                items.push_back("Ice-Cream");
                prices.push_back(6.99);
            }
        } 
    }
    void addCart(Cart& c){
        for(int i=0; i<items.size(); i++){
            c.addItem(items.at(i), prices.at(i));
        }
    }
};
#endif