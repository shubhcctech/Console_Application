#pragma once

#include<iostream>
 
class Circle {
 
public:
    Circle();
    void setDimensions(int radius);
    void setArea();
    void setCircumference();
    double area() ;
    double circumference();
private:
    double mRadius;
    double mArea;
    double mCircumference;
};