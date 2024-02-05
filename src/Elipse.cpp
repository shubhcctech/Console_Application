#include "../header/Elipse.h"
#include<cmath>
using namespace std;
 
Elipse::Elipse() : mArea(0), mCircumference(0) {}
 
void Elipse::setDimensions(int minAxis,int maxAxis) {
    if (minAxis >= 0 && maxAxis) {
        this->mMinAxis = minAxis;
        this->mMaxAxis = maxAxis;
        
        
        setArea();
        setCircumference();
    } else {
        cerr << "Dimentions are non-negative." << endl;
    }
}
 
void Elipse::setArea() {
    mArea = 3.14*mMinAxis*mMaxAxis;
}
 
void Elipse::setCircumference() {
    mCircumference = 3.14 * (3 * (mMaxAxis + mMinAxis) - sqrt((3 * mMaxAxis + mMinAxis) * (mMaxAxis + 3 * mMinAxis)));
}
 
double Elipse::area() {
    return mArea;
}
 
double Elipse::circumference()  {
    return mCircumference;
}
 