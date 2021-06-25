/*********************************************************
Name: CJ Carroll
Date: 6/22/2021
Class: CS1C
Professor: John Kath
Assignment: HW03: Class Constructors, Inheritance, & Init
**********************************************************/
#include <iostream>
#include <iomanip> 
#include <string>
#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "softwareArchitect.h"
using namespace std;
/*****************************************************************************
HW03

creates 2 objects of class 'employee', two objects of class 'programmer',
two objects of class 'softwareArchitect'. They are all printed using print 
member functions, then the default constructors will be modified by the user.
The modified values will be listed when the user is done modifying the object.
*******************************************************************************/
int main() {

    employee clientI;        //object with 'employee' class(default constructor)
    employee clientII("Katie Couric", 77777, "203-555-6789", 
                       58, 'F', "News Reporter", 500500, 3, 1, 2005); //object with 'employee' class(non-default constructor)

    programmer clientIII;       //object with 'programmer' class(default constructor)
    programmer clientIV("Sam Software", 54321, "819-123-4567", 21, 'M', "Programmer", 223000, 12, 24, 2011, "5432122", "Joe Boss", 4, true, false);  //object with 'programmer' class(non-default constructor)

    softwareArchitect clientV;        //object with 'softwareArchitect' class(default constructor)
    softwareArchitect clientVI("Alex Arch", 88888, "819-123-4444", 31, 'M', "Architect",323000, 12, 24, 2009, 5434222, "Big Boss", 5, 4); //object with 'softwareArchitect' class(non-default constructor)
     
    //printing inital info for clientI
    cout << "Two CS1C Employee's Info: \n\n"
        << "First Employee info:\n";
    clientI.print();

    //printing inital info for clientII
    cout << "\nSecond Employee Info: \n";
    clientII.print();

    //printing initial info for clientIII
    cout << "\nTwo Programmer's Info: \n\n";
    cout << "First programmer info:\n";
    clientIII.printPro();

    //printing intial info for clientIV
    cout << "\nSecond programmer info:\n";
    clientIV.printPro();

    //printing intial info for clientV
    cout << "\nTwo Software Architect's Info:\n";
    cout << "First Architect:\n";
    clientV.softPrint();

    //printing initial info for clientVI
    cout << "\nSecond Architect:\n";
    clientVI.softPrint();

    //prompting user to change each data member for clientI
    cout << "\n\nInitiating Changes on the employee#1. . . \n";
    clientI.changeName();     //changes name data member 
    clientI.changeID();       //changes ID data member
    clientI.changePhoneNum(); //changes phoneNum data member
    clientI.changeAge();      //changes age data member
    clientI.changeGender();   //changes gender data member
    clientI.changeJobTitle(); //changes jobTitle data member
    clientI.changeSalary();   //changes salary data member 
    clientI.changeHireDate(); //changes hireDate data member 
    cin.ignore(100000, '\n');
    //printing results of the changes done to clientI
    cout << "\nAfter changes on employee#1...\n";
    clientI.print();

    //prompting user to change each data member for clientIII
    cout << "\n\nInitiating changes on programmer#1. . .\n";
    clientIII.changeName();       //changes name data member 
    clientIII.changeID();         //changes ID data member
    clientIII.changePhoneNum();   //changes phoneNum data member
    clientIII.changeAge();        //changes age data member
    clientIII.changeGender();     //changes gender data member
    clientIII.changeJobTitle();   //changes jobTitle data member
    clientIII.changeSalary();     //changes salary data member 
    clientIII.changeHireDate();   //changes hireDate data member 
    cin.ignore(1000000, '\n');
    clientIII.changeDeptNum();    //changes deptNum data member
    clientIII.changeSupervisor(); //changes supervisor data member
    clientIII.changeRaise();      //changes raise data member
    clientIII.changeCpp();        //swaps cppId data member
    clientIII.changeJava();       //swaps javaId data member
    cin.ignore(100000, '\n');

    //printing results of the changes done to clientIII
    cout << "\nAfter changes on programmer#1...\n";
    clientIII.printPro();

    //prompting user to change each data member for clientV
    cout << "\n\nInitiating changes on architect#1. . .\n";
    clientV.changeName();       //changes name data member 
    clientV.changeID();         //changes ID data member
    clientV.changePhoneNum();   //changes phoneNum data member
    clientV.changeAge();        //changes age data member
    clientV.changeGender();     //changes gender data member
    clientV.changeJobTitle();   //changes jobTitle data member
    clientV.changeSalary();     //changes salary data member 
    clientV.changeHireDate();   //changes hireDate data member 
    clientV.changeDeptNum();    //changes deptNum data member
    cin.ignore(1000000, '\n');
    clientV.changeSupervisor(); //changes supervisor data member
    clientV.changeRaise();      //changes raise data member
    clientV.changeExperience(); //changes experience data member

    //printing results of the changes done to clientV
    cout << "\nAfter changes on architect#1...\n";
    clientV.softPrint();


    cout << "\n\nEnd of Program"; 
    return 0;
}