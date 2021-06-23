/*********************************************************
Name: CJ Carroll
Date: 6/22/2021
Class: CS1C
Professor: John Kath
Assignment: HW03: Class Constructors, Inheritance, & Init
**********************************************************/
#include "programmer.h"
/********************************************************************************
HW04

Demonstrates the function of friend functions and overloaded operators in class.
shows the outcome of:
Prompt 1: comparing class data members using a friend function
Prompt 2: comparing class data members using an overloaded equality operator
Prompt 3: adding to a data member using a member function
Prompt 4: adding to a data memebr using an overloaded addition operator
Prompt 5: prompting the user to input values for all data members 
		  and outputs those data members using overloaded insertion
		  and extraction operators. 

**********************************************************************************/
int main() {
	const int TESTER = 5;

	employee clientI;         //employee type
	employee clientII;        //employee type
	employee clientIII(true); //employee type non-default constructor 

	programmer clientIV;      //progrrammer type 

	//Prompt 1
	cout << "Demonstrating prompt 1: friend function:\n";

	cmpPhoneNum(clientI, clientIV);

	//Prompt 2: two instances
	cout << "Demonstrating Prompt 2: Overloaded equality operator:\n";
	cout << "Testing 'clientI' and 'clientII'\n";
	if (clientI == clientII) {
		cout << "The phone numbers are the same!\n\n";
	}
	else {
		cout << "The phone numbers are NOT the same!\n\n";
	}
	cout << "Testing 'clientI' and 'clientIII'\n";
	if (clientI == clientIII) {
		cout << "The phone numbers are the same!\n\n";
	}
	else {
		cout << "The phone numbers are NOT the same!\n\n";
	}

	//Prompt 3
	cout << "Demonstrating prompt 3: Addition member function:\n";
	cout << "Adding 'TESTER' to clientI. Before: ";
	cout << clientI.age << "\n";
	clientI.addToAge(TESTER);
	
	//Prompt 4
	cout << "\n\nDemonstrating prompt 4: Overloaded addition operator:\n";
	cout << "Adding TESTER to clientII. . .\n";
	cout << "Before: " << clientII.age;
	clientII + TESTER;
	cout << "\nAfter: " << clientII.age;

	//Prompt 5
	cout << "\n\nDemonstrating prompt 5: Overloaded insertion and extraction operators:\n";

	cin >> clientIII;

	cout << '\n\n' << clientIII;


	cout << "\n\nEnd of program\n\n";



	return 0;
}