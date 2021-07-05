#pragma once
#include <iostream>
#include <iomanip>

using namespace std; 

struct item {
	string name;
	float price; 
	int quantity;
}; 

const int MAX_SIZE = 50;

class ManageInventory
{
public:
	ManageInventory() : count(0), ppInventoryItems{ new item * [size] }{};
	/*ManageInventory(int size) : size{ size }, count{ 0 }, ppInventoryItems{ new item * [size] }{};*/
	//~ManageInventory(); 
	void addItem(string name, float price, int quantity);

private: 
	int size = MAX_SIZE;
	int count{ 0 };
	item** ppInventoryItems;
};

 