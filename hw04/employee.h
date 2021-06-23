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

has the following member functions:
employee(); [constructor]
employee(bool which)' [non-default constructor]

void changePhoneNum();
void operator+(int num);
bool operator==(const employee& empObj)const; 

and has the following friend functions:
friend void addToAge(employee& empObj, int addTo);
friend istream& operator>>(istream& input, employee& empObj);
friend ostream& operator<<(ostream& output, employee& empObj);
********************************************************/
class employee
{
public:
	string   name;     //name 
	long int ID;       //ID
	string   phoneNum; //phone number 
	int      age;      //age
	char     gender;   //gender
	string   jobTitle; //job title
	long int salary;   //salary
	date     hireDate; //hire date; an object of the date class

	friend istream& operator>>(istream& input, employee& empObj);
	friend ostream& operator<<(ostream& output, employee& empObj);

	employee(); //constructor

	employee(bool which); //non-default constructor

	void print();

	void changePhoneNum();

	void addToAge(int addTo);

	void operator+(int num);

	bool operator==(const employee& empObj)const;


};

