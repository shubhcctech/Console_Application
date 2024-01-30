#pragma once
 
#include <iostream>
 
class Triangle {
private:
    int side1,side2,side3;
    double area;
    int perimeter;
 
public:
    Triangle();
    void setDimensions(int side1, int side2,int side3);
    void setArea();
    void setPerimeter();
    double getArea() ;
    int getPerimeter();
};
 

 