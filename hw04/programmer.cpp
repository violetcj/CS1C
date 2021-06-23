#include "programmer.h"
/***********************************************
programmer()(default constructor)

when object is created without parameters, will
initialize all data members with values labled
below
************************************************/
programmer::programmer() {
	name = "Sam Software";
	ID = 54321;
	phoneNum = "819-123-4567";
	age = 21;
	gender = 'M';
	jobTitle = "Programmer";
	salary = 223000;
	hireDate.month = 12;
	hireDate.day = 24;
	hireDate.year = 2011;
	deptNum = "5432122";
	supervisor = "Joe Boss";
	raise = 4;
	cppId = true;
	javaId = false;
}
/**************************************************
programmer(bool which)(non-default constructor)

when object is created with a bool parameter, will
initalize all data members with values labeled
below
***************************************************/
programmer::programmer(bool which) {
	name = "Mary Coder";
	ID = 65432;
	phoneNum = "310-555-5555";
	age = 28;
	gender = 'F';
	jobTitle = "Programmer";
	salary = 770123;
	hireDate.month = 2;
	hireDate.day = 8;
	hireDate.year = 2010;
	deptNum = "6543222";
	supervisor = "Mary Leader";
	raise = 7;
	cppId = true;
	javaId = true;
}
/********************************************************************************
printPro

will print the private data members along with the data members from the employee
class
Name:
ID:
Phone #:
Age:
Gender:
Job Title:
Salary:
Hire Date:
Department Number:
Supervisor:
Raise(%):
C++ Knowledge:
Java Knowledge:

pre: none
post: prints all current values of each data member
*********************************************************************************/
void programmer::printPro() {
	print(); //employee::print();
	cout << "Department Number:   " << deptNum << '\n';
	cout << "Supervisor:          " << supervisor << '\n';
	cout << "Raise(%):            " << raise << "%\n";
	cout << "C++ Knowledge:       ";
	if (cppId) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}//endif
	cout << "Java Knowledge:      ";
	if (javaId) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}//endif

}

/********************************************************************
changeDeptNum

when called, prompts the user to change the value stored in 'deptNum'

-  pre: none
- post: new value stored in 'deptNum' data member
*********************************************************************/
void programmer::changeDeptNum() {
	cout << "Enter new Department #: ";
	getline(cin, deptNum);
}

/************************************************************************
changeSupervisor

when called, prompts the user to change the value stored in 'supervisor'

-  pre: none
- post: new value stored in 'supervisor' data member
*************************************************************************/
void programmer::changeSupervisor() {
	cout << "Enter new Supervisor name: ";
	getline(cin, supervisor);
}
/*******************************************************************
changeRaise

when called, prompts the user to change the value stored in 'raise'

-  pre: none
- post: new value stored in 'raise' data member
*******************************************************************/
void programmer::changeRaise() {
	cout << "Enter new raise(%): ";
	cin >> raise;
}
/********************************************************************
changeCpp

will swap the current value for 'cppId'. if value holds 'true', will
swap to false, and vice versa.

-  pre: none
- post: opposite bool value stored in 'cppId' data member
*********************************************************************/
void programmer::changeCpp() {
	if (cppId) {
		cppId = false;
	}
	else {
		cppId = true;
	}//endif
	cout << "C++ knowledge updated\n";
}
/********************************************************************
changeJava

will swap the current value for 'javaId'. if value holds 'true', will
swap to false, and vice versa.

-  pre: none
- post: opposite bool value stored in 'javaId' data member
*********************************************************************/
void programmer::changeJava() {
	if (javaId) {
		javaId = false;
	}
	else {
		javaId = true;
	}//endif
	cout << "Java knowledge updated\n";
}
/***********************************************************************
cmpPhoneNum

when called, compares the 'phoneNum' value between two objects, one of 
type 'employee' and one of type 'programmer'. will tell the user if the 
two values are equal or not equal.

pre: initialized object of type employee 'empObj' 
     initialized object of type programmer 'proObj'
post: will tell user if the phone numbers are the same or different
************************************************************************/
void cmpPhoneNum(employee& empObj, programmer& proObj) {
	if (proObj.phoneNum == empObj.phoneNum)
	{
		cout << "The two phone numbers are the same!\n\n";
	}
	else
	{
		cout << "The two phone numbers are NOT the same!\n\n";
	}
}