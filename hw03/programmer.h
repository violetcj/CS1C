#pragma once
#include "employee.h"
/************************************************************************
programmer

base class: employee

derived from the employee class, class that holds more data members 
relating to the profession this class represents:
deptNum (department number)
supervisor
raise
cppId(does the programmer know C++?)
javaId(does the programmer know java?)

adds on member functions that change these new data members, and a 
modified print function.
changeDeptNum
changeSupervisor
changeRaise
printPro

constructor: 
initializes data members from both the employee class data members and
the ones written in this class

non-default constructor:
initializes data members differently, will be called when a bool value 
is passed through as a parameter
************************************************************************/
class programmer :
	public employee
{
public: 

	programmer(); //constructor

	programmer(string userDeptNum,string userSupervisor, 
			   int userRaise, bool cpp, bool java) : employee(string userNam, int userId, string userPhoneNum, int userAge, char userGender, string userJobTitle, int userSalary, int userMonth, int userDay, int userYear); //non-default constructor
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
	void printPro(); 
/********************************************************************
changeDeptNum

when called, prompts the user to change the value stored in 'deptNum'

-  pre: none
- post: new value stored in 'deptNum' data member
*********************************************************************/
	void changeDeptNum();
/************************************************************************
changeSupervisor

when called, prompts the user to change the value stored in 'supervisor'

-  pre: none
- post: new value stored in 'supervisor' data member
*************************************************************************/
	void changeSupervisor();
/*******************************************************************
changeRaise

when called, prompts the user to change the value stored in 'raise'

-  pre: none
- post: new value stored in 'raise' data member
*******************************************************************/
	void changeRaise();
/********************************************************************
changeCpp

will swap the current value for 'cppId'. if value holds 'true', will
swap to false, and vice versa.

-  pre: none
- post: opposite bool value stored in 'cppId' data member
*********************************************************************/
	void changeCpp();
/********************************************************************
changeJava

will swap the current value for 'javaId'. if value holds 'true', will
swap to false, and vice versa.
-  pre: none
- post: opposite bool value stored in 'javaId' data member
*********************************************************************/
	void changeJava();
private:

	string deptNum;    //department number 
	string supervisor; //supervisor
	int raise;         //raise
	bool cppId;        //C++ identifier
	bool javaId;       //java identifier
};

