#pragma once
 
#include <iostream>
 
class Rectangle {

public:
    Rectangle();
    void setDimensions(int l, int w);
    void setArea();
    void setPerimeter();
    int area() ;
    int getPerimeter();

    private:
    int length;
    int width;
    int area;
    int perimeter;
 
};
 

 