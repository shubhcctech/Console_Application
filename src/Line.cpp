#include "../header/Line.h"
#include <cmath>
using namespace std;
 
Line::Line() : length(0) {}
 
void Line::setDimensions(int x1, int x2, int y1,int y2) {
   
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
       
  
        setLength();
    
}
 

 
void Line::setLength() {
    length=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
 

 
int Line::length()  {
    return length;
}
 