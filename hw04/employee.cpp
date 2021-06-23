#include "employee.h"
/***********************************************
default constructor

when object is created without parameters, will
initialize all data members with values labled
below
************************************************/
employee::employee() {
	name = "Jimmy Fallon";
	ID = 12345;
	phoneNum = "949-555-1234";
	age = 40;
	gender = 'M';
	jobTitle = "Comedian";
	salary = 100000;
	hireDate.month = 8;
	hireDate.day = 31;
	hireDate.year = 2014;
}

/**************************************************
non-default constructor

when object is created with a bool parameter, will
initalize all data members with values labeled
below
***************************************************/
employee::employee(bool which) {
	name = "James Corden";
	ID = 87654;
	phoneNum = "703-703-1234";
	age = 37;
	gender = 'M';
	jobTitle = "Talk Show Host";
	salary = 900000;
	hireDate.month = 12;
	hireDate.day = 25;
	hireDate.year = 2014;
}
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
*******************************************************/
void employee::print() {
	cout << "Name:                " << name << '\n';
	cout << "ID:                  " << ID << '\n';
	cout << "Phone #:             " << phoneNum << '\n';
	cout << "Age:                 " << age << '\n';
	cout << "Gender:              " << gender << '\n';
	cout << "Job Title:           " << jobTitle << '\n';
	cout << "Salary:              $" << salary << '\n';
	cout << "Hire Date:           " << hireDate.month << "/"
		<< hireDate.day << "/"
		<< hireDate.year << '\n';
}


/**********************************************************************
changePhoneNum

when called, prompts the user to change the value stored in 'phoneNum'

-  pre: none
- post: new value stored in 'phoneNum' data member
***********************************************************************/
void employee::changePhoneNum() {
	cout << "Enter new Phone Number(Enter in format XXX-XXX-XXXX): ";
	getline(cin, phoneNum);
}
/*******************************************************************
operator==

overloads the relational operator '=='. Will compare two employee
objects phoneNum data member, returns true if they are the same 
value, will return false if they aren't the same value
*******************************************************************/
bool employee::operator==(const employee& empObj)const {
	if (phoneNum == empObj.phoneNum) {
		return true;
	}
	else {
		return false;
	}
}
/**********************************************************************
addToAge

passes in an int variable. Will add the variable to the object's 'age' 
data member, and will assign this sum to the 'age' data member. Will 
then tell the user by how much the age increased, decreased, or if it 
stayed the same. 

pre: 'addTo' has to be of type 'int'
post: will tell user what the 'age' member the amount it has been 
increased/decreased or if it stayed the same.
***********************************************************************/
void employee::addToAge(int addTo) {
	age = age + addTo;
	if (addTo < 0) {
		cout << "The age has been decreased by " << addTo * -1 << " years.\n";
		cout << "Age: " << age;
	}
	else if (addTo > 0) {
		cout << "The age has been increased by " << addTo << " years.\n";
		cout << "Age: " << age;
	}
	else {
		cout << "The age has not been changed.\n";
		cout << "Age: " << age;
	}//endif
}
/************************************************************************
operator+

overloads the binary operator '+'. When adding a int to an object, the 
objects 'age' data member will be added/subtracted by the int.
************************************************************************/
void employee::operator+(int num) {
	age = age + num;
}
/**********************************************************************
operator>>

overloads the extraction operator. when using 'input >> empObj', the 
program will prompt the user to enter a new value for each data member
**********************************************************************/
istream& operator>>(istream& input, employee& empObj) {
	
	cout << "Name: ";
	getline(input, empObj.name);
	cin.ignore(10000, '\n');
	cout << "ID: ";
	input >> empObj.ID;
	cout << "Phone #(XXX-XXX-XXXX): ";
	input >> empObj.phoneNum;
	cout << "Age: ";
	input >> empObj.age;
	cout << "Gender: ";
	input >> empObj.gender;
	cout << "Job Title: ";
	input >> empObj.jobTitle;
	cout << "Salary: ";
	input >> empObj.salary;
	cout << "Hire Date: \n";
	cout << "Month: ";
	input >> empObj.hireDate.month;
	cout << "Day: ";
	input >> empObj.hireDate.day;
	cout << "Year: ";
	input >> empObj.hireDate.year;

	return input;
}
/*************************************************************************
operator<< 

overloads the inseetion operator. when using 'output << empObj', the 
program will output each data member's current value; similar to print()
from hw03.
*************************************************************************/
ostream& operator<<(ostream& output, employee& empObj) {
	output << "Name:                " << empObj.name << '\n';
	output << "ID:                  " << empObj.ID << '\n';
	output << "Phone #:             " << empObj.phoneNum << '\n';
	output << "Age:                 " << empObj.age << '\n';
	output << "Gender:              " << empObj.gender << '\n';
	output << "Job Title:           " << empObj.jobTitle << '\n';
	output << "Salary:              $" << empObj.salary << '\n';
	output << "Hire Date:           " << empObj.hireDate.month << "/"
		<< empObj.hireDate.day << "/"
		<< empObj.hireDate.year << '\n';
	return output;
}