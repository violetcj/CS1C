#include "programmer.h"
/***********************************************
programmer()(default constructor)

when object is created without parameters, will
initialize all data members with values labled
in the MIL
************************************************/
programmer::programmer() 
	: deptNum(" "), supervisor(" "), raise(0), cppId(false), javaId(false)
{
}
/**************************************************
programmer(bool which)(non-default constructor)

when object is created with a bool parameter, will
initalize all data members with values labeled
below

pre: bool can either be true or false to call this 
     constructor
post: initializes all data members of object type
      'programmer' and it's base class 'employee'
	  data members
***************************************************/
programmer::programmer(string userDeptNum,string userSupervisor, int userRaise, bool cpp, bool java) 
	:employee(), deptNum(userDeptNum), supervisor(userSupervisor), raise(userRaise), cppId(cpp), javaId(java)
{
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