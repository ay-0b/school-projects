#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <iostream>
#include <string>
using namespace std;

// this is the base class for all product categories
class Categories {
protected:
    int choice;
    string categoryName;

public:
    Categories(){
        choice = 0;
        categoryName = "";
    }

    void chooseCategory(){
        cout << "Choose a category:" << endl;
        cout << "1. Dairy" << endl;
        cout << "2. Produce" << endl;
        cout << "3. Medicine" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            categoryName = "Dairy";
        } else if(choice == 2){
            categoryName = "Produce";
        } else if(choice == 3){
            categoryName = "Medicine";
        } else {
            categoryName = "Invalid";
        }
    }

    int getChoice(){
        return choice;
    }

    string getCategoryName(){
        return categoryName;
    }
};
#endif