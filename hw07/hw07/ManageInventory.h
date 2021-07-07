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
     * PRE:
     *  cost: float value representing an item's cost
     * POST:
     *  (sales tax is returned)
     **********************************************************************************************/
    float salesTax(float cost);
};

class ManageInventory
{
public:
	ManageInventory() : count(0), ppInventoryItems( new item * [size] ){};
    ManageInventory(const ManageInventory &cpInv);
	~ManageInventory();

	void addItem(string name, int quantity, float price);

	void print();

    void addToCart(int item, int amount);

    void purchase();

    void printReceipt();

private: 
	int size = 50;
	int count{ 0 };
	item** ppInventoryItems;
    int cart[5] = {0};
};

 