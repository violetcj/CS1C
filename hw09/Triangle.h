#ifndef UNTITLED1_TRIANGLE_H
#define UNTITLED1_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
private:
    double base;  //base of triangle
    double height; //height of triangle
    double hyp; //hypotenuse of triangle

public:
    /*********************************************************
     * default constructor
     *
     * Pre:
     * Post: Initializes values of base, height, and hyp
     ********************************************************/
    Triangle()
        : base(2), height(2), hyp(4){}; //used for testing purposes
    /*********************************************************************
     * non-default constructor
     *
     * Pre: double userBase, double userHeight, double userHyp
     * Post: Initializes base, height, and hyp using userBase, userHeight,
     * and userHyp
     *********************************************************************/
    Triangle(double userBase, double userHeight, double userHyp)
        : base(userBase), height(userHeight), hyp(userHyp) {};
    /*********************************************************************
     * calcPerimeter
     *
     * calculates the perimeter of values based on a triangle. Will add the
     * three sides together and return that value
     * virtual function from abstract class 'Shape'
     *
     * Pre: base, height, hyp
     * Post: all values added together
     ********************************************************************/
    int calcPerimeter() { return base+height+hyp; }
    /*
     * calcArea
     *
     * calculates the area of values based on a triangle. Multiply base
     * and height and 0.5 and returns the value obtained
     * virtual function from abstract class 'Shape'
     *
     * Pre: base, height
     * Post: base and height values multiplied together and by 0.5
     *******************************************************************/
    double calcArea() { return 0.5*base*height; }
    /*******************************************************************
     * setBase
     *
     * setter for base data member
     *
     * Pre: base of type double
     * Post: parameter base is set as the value of the base data member
     *******************************************************************/
    void setBase(double base);
    /**********************************************************************
     * setHeight
     *
     * setter for height data member
     *
     * Pre: height of type double
     * Post: parameter height is set as the value of the height data member
     **********************************************************************/
    void setHeight(double height);
    /*******************************************************************
     * setHyp
     *
     * setter for hyp data member
     *
     * Pre: hyp of type double
     * Post: parameter hyp is set as the value of the hyp data member
     *******************************************************************/
    void setHyp(double hyp);


};



#endif
