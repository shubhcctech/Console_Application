#include "../header/Elipse.h"
#include<cmath>
using namespace std;
 
Elipse::Elipse() : area(0), circumference(0) {}
 
void Elipse::setDimensions(int minAxis,int maxAxis) {
    if (minAxis >= 0 && maxAxis) {
        this->minAxis = minAxis;
        this->maxAxis = maxAxis;
        
        
        setArea();
        setCircumference();
    } else {
        cerr << "Dimentions are non-negative." << endl;
    }
}
 
void Elipse::setArea() {
    area = 3.14*minAxis*maxAxis;
}
 
void Elipse::setCircumference() {
    circumference = 3.14 * (3 * (maxAxis + minAxis) - sqrt((3 * maxAxis + minAxis) * (maxAxis + 3 * minAxis)));
}
 
double Elipse::getArea() {
    return area;
}
 
double Elipse::getCircumference()  {
    return circumference;
}
 