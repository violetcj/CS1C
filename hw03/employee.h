#pragma once 
#include <iostream>
#include <iomanip> 
#include <string>
#include "date.h"

using namespace std; 
/********************************************************
employee

object holding an info for a 'CS1C Employee'.
holds the info:
name, 
ID, 
phone number, 
age, 
gender, 
job title, 
salary, 
hire date. 
contains member functions that changes each of these 
data members, and a function to where all
the current data members are listed. 

constructor: initalizes data members.

non-default constructor: initializes data members with
different info from the default constructor,
is called when a bool is passed through the 
parameter
********************************************************/
class employee
{
public:
	employee(); //constructor

 	employee(string userNam, int userId, string userPhoneNum, 
	 int userAge, char userGender, string userJobTitle, 
	 int userSalary, int userMonth, int userDay, int userYear); //non-default constructor
/*****************************************************
print 

when called, will print the current values stored in
each of the data members with the format:
Name:
ID:
Phone #:
Age:
Gender:
Job Title:
Salary:
Hire Date:

-  pre: none
- post: outputs all current data member values
*******************************************************/
	void print(); 
/******************************************************************
changename

when called, prompts the user to change the value stored in 'name'

-  pre: none
- post: new value stored in 'name' data member
******************************************************************/
	void changeName();
/*****************************************************************
changeID

when called, prompts the user to change the value stored in 'ID'

-  pre: none
- post: new value stored in 'ID' data member
******************************************************************/
	void changeID(); 
/**********************************************************************
changePhoneNum

when called, prompts the user to change the value stored in 'phoneNum'

-  pre: none
- post: new value stored in 'phoneNum' data member
***********************************************************************/
	void changePhoneNum();
/*******************************************************************
changeAge

when called, prompts the user to change the value stored in 'age'

-  pre: none
- post: new value stored in 'age' data member
*******************************************************************/
	void changeAge();
/********************************************************************
changeGender 

when called, prompts the user to change the value stored in 'gender'

-  pre: none
- post: new value stored in 'gender' data member
*********************************************************************/
	void changeGender();
/**********************************************************************
changeJobTitle

when called, prompts the user to change the value stored in 'jobTitle'

-  pre: none
- post: new value stored in 'jobTitle' data member
***********************************************************************/
	void changeJobTitle();
/********************************************************************
changeSalary

when called, prompts the user to change the value stored in 'salary'

-  pre: none
- post: new value stored in 'salary' data member
********************************************************************/
	void changeSalary();
/*******************************************************************
changeHireDate

when called, prompts the user to change the month, day, and year 
data members stored in 'hireDate'

-  pre: none
- post: new value stored in 'month', 'day', and 'year' data members
*******************************************************************/
	void changeHireDate();

	private:
	string   name;     //name 
	long int ID;       //ID
	string   phoneNum; //phone number 
	int      age;      //age
	char     gender;   //gender
	string   jobTitle; //job title
	long int salary;   //salary
	date     hireDate; //hire date; an object of the date class


};

