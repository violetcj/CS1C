#ifndef UNTITLED1_SHAPE_H
#define UNTITLED1_SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:

    //virtual deconstructor
    virtual ~Shape(){};

    //pure virtual function
    virtual int calcPerimeter() = 0;

    //pure virtual function
    virtual double calcArea() = 0;
};


#endif //UNTITLED1_SHAPE_H
