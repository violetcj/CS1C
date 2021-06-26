#include "softwareArchitect.h"
/***********************************************
softwareArchitect()(default constructor)

when object is created without parameters, will
initialize all data members with values labled in 
the member initialization list
************************************************/
softwareArchitect::softwareArchitect() 
	: deptNum(0), supervisor(" "), raise(0), experience(0)
{
}
/**************************************************
softwareArchitect(bool which)(non-default constructor)

when object is created with a bool parameter, will
initalize all data members with values labeled in 
the member initialization list
***************************************************/
softwareArchitect::softwareArchitect(string userNam, int userId, string userPhoneNum, int userAge, char userGender, string userJobTitle, 
int userSalary, int userMonth, int userDay, int userYear, int userDeptNum,string userSupervisor, int userRaise, int userExperience) 
	
	: employee(userNam, userId, userPhoneNum, userAge, userGender, userJobTitle, userSalary, userMonth, userDay, userYear),
	deptNum(userDeptNum), supervisor(userSupervisor), raise(userRaise), experience(userExperience)
{
}
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
void softwareArchitect::softPrint() {
	print();
	cout << "Department Number:   " << deptNum << '\n';
	cout << "Supervisor:          " << supervisor << '\n';
	cout << "Raise(%):            " << raise << "%\n";
	cout << "Years of Experience: " << experience << " year(s)\n";
}
/********************************************************************
changeDeptNum

when called, prompts the user to change the value stored in 'deptNum'

-  pre: none
- post: new value stored in 'deptNum' data member
*********************************************************************/
void softwareArchitect::changeDeptNum() {
	cout << "Enter new Department #: ";
	cin >> deptNum;
}
/************************************************************************
changeSupervisor

when called, prompts the user to change the value stored in 'supervisor'

-  pre: none
- post: new value stored in 'supervisor' data member
*************************************************************************/
void softwareArchitect::changeSupervisor() {
	cout << "Enter new supervisor: ";
	getline(cin, supervisor);
}
/*******************************************************************
changeRaise

when called, prompts the user to change the value stored in 'raise'

-  pre: none
- post: new value stored in 'raise' data member
*******************************************************************/
void softwareArchitect::changeRaise() {
	cout << "Enter new raise(%): ";
	cin >> raise; 
}
/************************************************************************
changeExperience

when called, prompts the user to change the value stored in 'experience'

-  pre: none
- post: new value stored in 'experience' data member
*************************************************************************/
void softwareArchitect::changeExperience() {
	cout << "Enter new experience(in years): ";
	cin >> experience;
}