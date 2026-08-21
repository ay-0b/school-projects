#ifndef PRODUCE_H
#define PRODUCE_H
 
#include <iostream>
#include <string>
#include <vector>
#include "Categories.h"
#include "Cart.h"
using namespace std;

class Produce : public Categories{
    private:
    vector<string> items;
    vector<double> prices;
    
    public:
    Produce(){
    }
    void chooseProduce() {
        int produceChoice;
        while(true) {
            cout<<"\nChoose Produce Item(s)\n";
            cout<<"1. Brocoli($2.50)\n2. Lettuce($1.99)\n";
            cout<<"3. Carrots($2.99)\n0. Done\n";
            cout<<"Enter choice: ";
            cin>>produceChoice;
            if(produceChoice==0){
                break;
            }else if(produceChoice==1){
                items.push_back("Brocoli");
                prices.push_back(2.50);
            }else if(produceChoice==2){
                items.push_back("Lettuce");
                prices.push_back(1.99);
            }else if(produceChoice==3){
                items.push_back("Carrots");
                prices.push_back(2.99);
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