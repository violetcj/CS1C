#include "employee.h"
/***********************************************
default constructor

when object is created without parameters, will 
initialize all data members with values labled
below
************************************************/
employee::employee() 
	: name(" "), ID(00000), phoneNum("000-000-0000"), age(0), gender(' '), jobTitle(" "), salary(0)
{

}

/**************************************************
non-default constructor

when object is created with a bool parameter, will
initalize all data members with values labeled 
below
***************************************************/
employee::employee(string userNam, int userId, string userPhoneNum, int userAge, char userGender, string userJobTitle, int userSalary, int userMonth, int userDay, int userYear) 
	: name(userNam), ID(userId), phoneNum(userPhoneNum), age(userAge), gender(userGender), jobTitle(userJobTitle), salary(userSalary)
{
	hireDate.month = userMonth;
	hireDate.day = userDay;
	hireDate.year = userYear; 
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

-  pre: none
- post: outputs all current data member values
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

/******************************************************************
changename

when called, prompts the user to change the value stored in 'name'

-  pre: none
- post: new value stored in 'name' data member
******************************************************************/
void employee::changeName(){
	cout << "Enter new name: ";
	getline(cin,name); 
}

/*****************************************************************
changeID

when called, prompts the user to change the value stored in 'ID'

-  pre: none
- post: new value stored in 'ID' data member
******************************************************************/
void employee::changeID() {	
	cout << "Enter new ID: ";
	cin >> ID; 
}

/**********************************************************************
changePhoneNum

when called, prompts the user to change the value stored in 'phoneNum'

-  pre: none
- post: new value stored in 'phoneNum' data member
***********************************************************************/
void employee::changePhoneNum() {
	cout << "Enter new Phone Number(Enter in format XXX-XXX-XXXX): "; 
	cin.ignore(100000, '\n');
	getline(cin, phoneNum); 
}

/*******************************************************************
changeAge

when called, prompts the user to change the value stored in 'age'

-  pre: none
- post: new value stored in 'age' data member
*******************************************************************/
void employee::changeAge() {
	cout << "Enter new age: ";
	cin >> age;
}

/********************************************************************
changeGender 

when called, prompts the user to change the value stored in 'gender'

-  pre: none
- post: new value stored in 'gender' data member
*********************************************************************/
void employee::changeGender() {
	cout << "Enter new gender(use m, f, or x): ";
	cin.ignore(10000, '\n');
	cin.get(gender);
}

/**********************************************************************
changeJobTitle

when called, prompts the user to change the value stored in 'jobTitle'

-  pre: none
- post: new value stored in 'jobTitle' data member
***********************************************************************/
void employee::changeJobTitle() {
	cout << "Enter new job title: ";
	cin.ignore(10000, '\n');
	getline(cin, jobTitle);
}

/********************************************************************
changeSalary

when called, prompts the user to change the value stored in 'salary'

-  pre: none
- post: new value stored in 'salary' data member
********************************************************************/
void employee::changeSalary() {
	cout << "Enter new salary: ";
	cin >> salary; 
}

/*******************************************************************
changeHireDate

when called, prompts the user to change the month, day, and year 
data members stored in 'hireDate'

-  pre: none
- post: new value stored in 'month', 'day', and 'year' data members
*******************************************************************/
void employee::changeHireDate() {
	cout << "Enter new hire date: \n"
		<< "Month: ";
	cin >> hireDate.month;
	cout << "Day: ";
	cin >> hireDate.day; 
	cout << "Year: ";
	cin >> hireDate.year; 
}