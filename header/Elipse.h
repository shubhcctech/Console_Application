#pragma once
#include <iostream>
 
class Elipse {

 
public:
    Elipse();
    void setDimensions(int minAxis,int maxAxis);
    void setArea();
    void setCircumference();
    double area() ;
    double circumference();

    private:
    int mMinAxis;
    int mMaxAxis;
    double mArea;
    double mCircumference;
};