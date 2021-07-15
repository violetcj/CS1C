#pragma once
#include <iostream>
#include <iomanip>

using namespace std; 

struct item {
	string name;
	float price; 
	int quantity;
};

namespace inventory{
    const int MAX_SIZE = 50;
    const float salesTaxRate = 0.0825;

    /*********************************************************************************************
     * salesTax
     * Calculates and returns sales tax based on an item's cost, rounded to avoid fractions of cents
     * Pre:
     *  cost: float value representing an item's cost
     * Post:
     *  (sales tax is returned)
     **********************************************************************************************/
    float salesTax(float cost);


class ManageInventory
{
public:
    //default constructor
	ManageInventory() : count(0), ppInventoryItems( new item * [size] ){};

    //copy constructor
    ManageInventory(const ManageInventory &cpInv);

    //destructor
	~ManageInventory();

    /*****************************************************
    addItem
    Adds an item to an array of the object type item
    Pre: 
        name: name of the item being added
        quantity: quantity of the item
        price: price of the item
    Post: 
        element added to the array
    ******************************************************/
	void addItem(string name, int quantity, float price);
    /******************************************************
    print
    prints the current inventory
    Pre:
        none
    Post:
        current inventory is outputted to the terminal
    ******************************************************/
	void print();
    /************************************************************************
    addToCart
    adds item to a shopping cart
    Pre:
        item: selected element in item array pointed to by ppInventoryItems
        amount: amount of selected items to  purchase
    Post:
        items are added to cart
    ************************************************************************/
    void addToCart(int item, int amount);
    /***********************************************************************
    purchase
    purchase items from inventory that are currently in the cart 
    Pre: 
        ManageInventory.cart[] - array of amount of items to purchase 
    Post: 
        ManageInventory.cart[] - the elements are now set to 0
        ppInventory->quantity - Values are subtracted from total quantity 
    ***********************************************************************/
    void purchase();
    /********************************************************************
    printReceipt
    prints a receipt based on ManageInventory->cart[] 
    Pre: 
        ManageInventory->cart[] - array of amount of items to purchase 
    Post: 
        reciept is printed to the terminal

    ********************************************************************/
    void printReceipt();

private: 
	int size { MAX_SIZE };
	int count { 0 };
	item** ppInventoryItems;
    int cart[5] = {0};
};

 };