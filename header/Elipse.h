#pragma once
#include <iostream>
 
class Elipse {
private:
    int minAxis;
    int maxAxis;
    double area;
    double circumference;
 
public:
    Elipse();
    void setDimensions(int minAxis,int maxAxis);
    void setArea();
    void setCircumference();
    double getArea() ;
    double getCircumference();
};