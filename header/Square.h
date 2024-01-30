#pragma once
#include <iostream>
 
class Square {
private:
    int side;
    int area;
    int perimeter;
 
public:
    Square();
    void setDimensions(int side);
    void setArea();
    void setPerimeter();
    int getArea() ;
    int getPerimeter();
};
 
