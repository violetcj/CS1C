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

and adds a friend function
cmpPhoneNum

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

	friend void cmpPhoneNum(employee& empObj, programmer& proObj);

	programmer(); //constructor

	programmer(bool which); //non-default constructor

	void printPro();

	void changeDeptNum();
	void changeSupervisor();
	void changeRaise();
	void changeCpp();
	void changeJava();

private:

	string deptNum;    //department number 
	string supervisor; //supervisor
	int raise;         //raise
	bool cppId;        //C++ identifier
	bool javaId;       //java identifier
};

