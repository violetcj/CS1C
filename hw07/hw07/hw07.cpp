/************************************************
* Name: CJ Carroll
* Assignment: HW07 - Pointers and Dynamic Arrays
* Class: CS1C; M-Th 3:00 - 5:20 P.M.
* Professor: John Kath
**********************************************/
#include "ManageInventory.h"

using namespace inventory; 

int main() {
	
	ManageInventory* inv;
    ManageInventory* copyInv = NULL;

    //adding inventory items to the inv object
    inv->addItem("Nike Basketball Shoes", 22, 145.99);
    inv->addItem("Under Armour T-Shirt", 33, 29.99);
    inv->addItem("Brooks Running Shoes", 11, 111.44);
    inv->addItem("Asics Running Shoes", 20, 165.88);
    inv->addItem("Nike Shorts", 77, 45.77);

    cout << "[Inventory After Initialization]" << endl;
    inv->print();
    cout << endl;

    //calling addToCart for each thing bought
    inv->addToCart(0, 2);
    inv->addToCart(1, 3);
    inv->addToCart(4, 4);
    inv->addToCart(2, 1);

    //print receipt
    cout << "[Receipt]";
    inv->purchase();
    cout << endl;

    cout << "[Inventory After Purchase]" << endl;
    inv->print();
    cout << endl;

    copyInv = new ManageInventory(*inv); // invoke copy constructor

    cout << "[Inventory After Copy]" << endl;
    copyInv->print();
    cout << endl;

    delete inv;
    delete copyInv;
	return 0;
}