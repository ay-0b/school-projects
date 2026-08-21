#include <iostream>
#include "Customer.h"
#include "Categories.h"
#include "Dairy.h"
#include "Produce.h"
#include "Medicine.h"
#include "Receipt.h"
using namespace std;


int main(){
    Customer cust("Cust");
    
    Categories cat;
    cat.chooseCategory();
    
    if(cat.getChoice()==1){
        Dairy d;
        d.chooseDairy();
        d.addCart(cust.getCart());
    } else if(cat.getChoice()==2){
        Produce p;
        p.chooseProduce();
        p.addCart(cust.getCart());
    } else if(cat.getChoice()==3){
        Medicine m;
        m.chooseMedicine();
        m.addCart(cust.getCart());
    }
    
    cust.viewCart();
    
    Receipt r;
    cust.setReceipt(r);
    cust.checkout();
    cust.printReceipt();
    
    return 0;
}
