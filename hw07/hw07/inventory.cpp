#include "inventory.h"

void ManageInventory::addItem(string name, float price, int quantity) {

	cerr << "Before Item added: " << count << endl; 
	ppInventoryItems[count]->name = name; 
	ppInventoryItems[count]->price = price; 
	ppInventoryItems[count]->quantity = quantity;
	count++;
	cerr << "After Item added: " << count << endl;
}