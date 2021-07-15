#include "ManageInventory.h"

using namespace inventory; 

float inventory::salesTax(float cost){
    float tempTax = 0; //the sales tax that would be added to the argument cost

    //generate sales tax amount
    tempTax = cost * salesTaxRate;

    //round to the nearest cent
    tempTax *= 100;
    tempTax *= 0.01;

    return tempTax;
}

ManageInventory::ManageInventory(const ManageInventory &cpInv)
        : size(cpInv.size), count(0), ppInventoryItems (new item*[size]) {

    for(int i = 0; i < cpInv.count; ++i){

        item* p_tempItem = new item; //alloc new memory for temp ptr

        //temp ptr gets assigned current values of selected element of passed obj
        p_tempItem->name = cpInv.ppInventoryItems[i]->name;
        p_tempItem->quantity = cpInv.ppInventoryItems[i]->quantity;
        p_tempItem->price = cpInv.ppInventoryItems[i]->price;

        //shallow copied values above get assinged to current element of array
        ppInventoryItems[count] = p_tempItem;
        p_tempItem = nullptr;


        ++count; //count incremented

    }
}

ManageInventory::~ManageInventory() {
    for(int i = 0; i < count; i++){
        delete ppInventoryItems[i]; //frees memory in each element
    }
    delete[] ppInventoryItems; //frees memory of array 


}

void ManageInventory::addItem(string name, int quantity, float price){
    item* p_tempItem = new item; //alloc new memory for temp pointer

    //ptr takes in passed in values for name, quantity, and price
    p_tempItem->name = name;
    p_tempItem->quantity = quantity;
    p_tempItem->price = price;

    //values are assigned to inital most free element, based on count. 
    ppInventoryItems[count] = p_tempItem;
    p_tempItem = nullptr;

    ++count; //count incremented 

}

void ManageInventory::print() {
    const int LCOL = 25;


    if(count > 0){
        cout << left << fixed << setprecision(2);

        for(int i = 0; i < count; ++i){
            //output formatting
            cout << setw(LCOL) << ppInventoryItems[i]->name << ": " << ppInventoryItems[i]->quantity << " @ $" << ppInventoryItems[i]->price << endl;
        }
        cout << right << setprecision(6);
        cout.unsetf(ios::fixed);
    }else{
        cout << "\t>No items in inventory." << endl;
    }

}

void ManageInventory::addToCart(int item, int amount) {
    //item refers to elements of the array of item obj
    cart[item] = amount;

}

void ManageInventory::purchase() {

    //remove items in cart from inventory and 'empty' cart
    for(int i = 0; i < 5; ++i){
        ppInventoryItems[i]->quantity -= cart[i];
    }
    cout << endl;
    printReceipt();

    //reset cart elements to 0
     for(int i = 0; i < 5; ++i){
         cart[i] = 0;
     }


}

void ManageInventory::printReceipt() {
    const int LCOL = 25;
    float subtotal = 0;
    float taxAmt = 0;
    float total = 0;

    for(int i = 0; i < 5; ++i){
        cout << left << fixed << setprecision(2);
        if(cart[i] > 0){
            //output receipt line
            cout << setw(LCOL) << ppInventoryItems[i]->name << ' ' << cart[i] << " @ $" << ppInventoryItems[i]->price << endl;

            //calc subtotal
            subtotal += ppInventoryItems[i]->price;

            //calc sales tax
            taxAmt += inventory::salesTax(ppInventoryItems[i]->price);
        } //endif
    } //endfor
    total = subtotal + taxAmt;
    cout << endl;

    //print total at the bottom, subtotal, tax, and the total 
    cout << "SUBTOTAL: $" << subtotal << endl
         << "TAX:      $" << taxAmt << endl
         << "TOTAL:    $" << total << endl;
}