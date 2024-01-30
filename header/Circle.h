#pragma once

#include<iostream>
 
class Circle {
 
public:
    Circle();
    void setDimensions(int radius);
    void setArea();
    void setCircumference();
    double getArea() ;
    double getCircumference();
private:
    double radius;
    double area;
    double circumference;
};