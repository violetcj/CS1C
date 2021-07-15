#ifndef UNTITLED1_RECTANGLE_H
#define UNTITLED1_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:

    int length; //length of rectangle
    int width;  //width of rectangle
public:
    /****************************************************************
     * default constructor
     *
     * Pre: none
     * Post: initializes values of int length and int width using MIL
     ****************************************************************/
    Rectangle()
            : length(2), width(5) {};
    /********************************************************************
     * non-default constructor
     *
     * Pre: int userLength, int userWidth
     * Post: initializes length with userLength and width with userWidth
     ********************************************************************/
    Rectangle(int userLength, int userWidth)
            : length(userLength), width(userWidth){};
    /***************************************************************************
     * calcPerimeter
     *
     * calculates the perimeter of a rectangle using the length and width
     * variables. Adds together length time 2 with width times 2. Returns an
     * int value equal to the perimeter
     * virtual function from abstract class 'Shape'
     *
     * Pre: none
     * Post: Returns an int value resembling the perimeter of the values length
     * and width
     **************************************************************************/
    int calcPerimeter() override { return ((2*length) + (2*width)); }
    /**********************************************************************
     * calcArea
     *
     * calculates the area of a rectangle using length and width variables
     * will multiply length and width and will return that value
     * virtual function from abstract class 'Shape'
     *
     * Pre: initialized length and width
     * Post: returns double type value equal to area of length and width
     **********************************************************************/
    double calcArea() override { return length*width; }
    /*************************************************************
     * setLength
     *
     * setter for length data member
     *
     * Pre: length of type int
     * Post: changes value stored in length
     *************************************************************/
    void setLength(int length);
    /**************************************************************
     * setWidth
    *
    * setter for width data member
    *
    * Pre: width of type int
    * Post: changes value stored in width
    *************************************************************/
    void setWidth(int width);
};


#endif //UNTITLED1_RECTANGLE_H

