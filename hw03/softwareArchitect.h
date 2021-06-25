#pragma once
#include "employee.h"
/*********************************************************************
softwareArchitect

base class: employee

derived from the employee class, class that holds more data members
relating to the profession this class represents:
deptNum (department number)
supervisor
raise
experience (years of experience)

dds on member functions that change these new data members, and a
modified print function.
changeDeptNum
changeSupervisor
changeRaise
changeExperience
softPrint

constructor:
initializes data members from both the employee class data members and
the ones written in this class

non-default constructor:
initializes data members differently, will be called when a bool value
is passed through as a parameter
***********************************************************************/
class softwareArchitect :
	public employee
{
public:

	softwareArchitect();           //constructor
	softwareArchitect(string userNam, int userId, string userPhoneNum, int userAge, char userGender, string userJobTitle, int userSalary, int userMonth, int userDay, int userYear, int userDeptNum,string userSupervisor, 
			   int userRaise, int userExperience) : employee(userNam, userId, userPhoneNum, userAge, userGender, userJobTitle, userSalary, userMonth, userDay, userYear){};  //non-default constructor

/********************************************************************************
softPrint

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
Years of Experience:

pre: none
post: printss current values in all data members of object type 
      'softwareArchitect'
*********************************************************************************/
	void softPrint();
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
/************************************************************************
changeExperience

when called, prompts the user to change the value stored in 'experience'

-  pre: none
- post: new value stored in 'experience' data member
*************************************************************************/
    void changeExperience();

private: 
	int deptNum;       //department number(int)
	string supervisor; //supervisor(string)
	int raise;         //raise(int)
	int experience;    //years of experience(int)
};

