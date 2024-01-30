#include "../header/Circle.h"
#include<cmath>
using namespace std;
 
Circle::Circle() : area(0), circumference(0) {}
 
void Circle::setDimensions(int radius) {
    if (radius >= 0 ) {
        this->radius = radius;
        
        //width = w;
        setArea();
        setCircumference();
    } else {
        cerr << "Dimentions are non-negative." << endl;
    }
}
 
void Circle::setArea() {
    area = 3.14*pow(radius,2);
}
 
void Circle::setCircumference() {
    circumference = 2*3.14*radius;
}
 
double Circle::getArea() {
    return area;
}
 
double Circle::getCircumference()  {
    return circumference;
}
 