/**********************************************************
 * NAME: CJ Carroll
 * HW09: Virtual Functions and Abstract Classes
 * CLASS: CS1C
 * SECTION: 7/13/21
 **********************************************************/
#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
/***********************************************************************************
 * printPerimeter
 *
 * function designed for use with classes using the interface of the shape class
 * calls the calcPerimeter function and prints what that function returns
 * IN: Pointer pointing to object of type shape (Shape* obj)
 * OUT: Perimeter of the object
 ***********************************************************************************/
void printPerimeter(Shape* obj);
/***********************************************************************************
 * printArea
 *
 * function designed for use with classes using the interface of the shape class
 * calls the calcArea function and prints what that function returns
 * IN: Pointer pointing to object of type shape (Shape* obj)
 * OUT: Area of the object
 ***********************************************************************************/
void printArea(Shape* obj);

int main() {
    //input for user for rectangle
    int length; //input for user
    int width;  //input for user

    //input for user for triangle
    double base;
    double height;
    double hyp;

    auto* rectTest = new Rectangle(); //ptr obj of type Rectangle
    auto* triTest = new Triangle(); //ptr obj of type Triangle

    cout << "Rectangle " << endl << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;

    rectTest->setLength(length); //setting length dm
    rectTest->setWidth(width); //setting width dm

    cout << "Triangle " << endl << "Base: ";
    cin >> base;
    cout << "Height: ";
    cin >> height;
    cout << "Hypotenuse: ";
    cin >> hyp;

    triTest->setBase(base); //setting base dm
    triTest->setHeight(height); //setting height dm
    triTest->setHyp(hyp); //setting hyp dm


    cout << endl << "Testing rectTest: Object of derived class Rectangle" << endl;
    printPerimeter(rectTest); //call for rectTest

    printArea(rectTest); //call for rectTest

    cout << endl <<  "Testing triTest: Object of derived class Triangle" << endl;
    printPerimeter(triTest); //call for triTest

    printArea(triTest); //call for triTest

    //deallocate memory
    delete rectTest;
    delete triTest;
}

//def for printPerimeter
void printPerimeter(Shape* obj){
    cout << endl << "Printing Perimeter. . ." << endl
    << "Perimeter = " << obj->calcPerimeter() << endl;

}

//def for printArea
void printArea(Shape* obj){
    cout << endl << "Printing Area. . ." << endl
     << "Area = " << obj->calcArea() << endl;
}