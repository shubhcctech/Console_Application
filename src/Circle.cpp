#include "../header/Circle.h"
#include<cmath>
using namespace std;
 
Circle::Circle() : mArea(0), mCircumference(0) {}
 
void Circle::setDimensions(int radius) {
    if (radius >= 0 ) {
        this->mRadius = radius;
        
        //width = w;
        setArea();
        setCircumference();
    } else {
        cerr << "Dimentions are non-negative." << endl;
    }
}
 
void Circle::setArea() {
    mArea = 3.14*pow(mRadius,2);
}
 
void Circle::setCircumference() {
    mCircumference = 2*3.14*mRadius;
}
 
double Circle::area() {
    return mArea;
}
 
double Circle::circumference()  {
    return mCircumference;
}
 