#include "ManageInventory.h"

int main() {
	
	ManageInventory* inv;
    ManageInventory* copyInv = NULL;

    inv->addItem("Nike Basketball Shoes", 22, 145.99);
    inv->addItem("Under Armour T-Shirt", 33, 29.99);
    inv->addItem("Brooks Running Shoes", 11, 111.44);
    inv->addItem("Asics Running Shoes", 20, 165.88);
    inv->addItem("Nike Shorts", 77, 45.77);

    cout << "[Inventory After Initialization]" << endl;
    inv->print();
    cout << endl;

    inv->addToCart(0, 2);
    inv->addToCart(1, 3);
    inv->addToCart(4, 4);
    inv->addToCart(2, 1);

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