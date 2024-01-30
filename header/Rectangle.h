#pragma once
 
#include <iostream>
 
class Rectangle {
private:
    int length;
    int width;
    int area;
    int perimeter;
 
public:
    Rectangle();
    void setDimensions(int l, int w);
    void setArea();
    void setPerimeter();
    int getArea() ;
    int getPerimeter();
};
 

 