#pragma once
#include <iostream>
 
class Line {

public:
    Line();
    void setDimensions(int x1, int x2,int y1,int y2);
    void setLength();
    int length();

    private:
        int x1,x2,y1,y2;
        int length;
 
};
 

 