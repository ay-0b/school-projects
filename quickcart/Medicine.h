#ifndef MEDICINE_H
#define MEDICINE_H
 
#include <iostream>
#include <string>
#include <vector>
#include "Categories.h"
#include "Cart.h"
using namespace std;

class Medicine : public Categories{
    private:
    vector<string> items;
    vector<double> prices;
    
    public:
    Medicine(){
    }
    void chooseMedicine() {
        int medicineChoice;
        while(true) {
            cout<<"\nChoose Medicine Item(s)\n";
            cout<<"1. Vitamins($14.00)\n2. Digestives($8.99)\n";
            cout<<"3. Allergy Pills($17.49)\n0. Done\n";
            cout<<"Enter choice: ";
            cin>>medicineChoice;
            if(medicineChoice==0){
                break;
            }else if(medicineChoice==1){
                items.push_back("Vitamins");
                prices.push_back(14.00);
            }else if(medicineChoice==2){
                items.push_back("Digestives");
                prices.push_back(8.99);
            }else if(medicineChoice==3){
                items.push_back("Allergy Pills");
                prices.push_back(17.49);
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