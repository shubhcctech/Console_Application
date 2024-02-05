#include "../header/Triangle.h"
#include <cmath>
using namespace std;
 
Triangle::Triangle() : area(0), perimeter(0) {}
 
void Triangle::setDimensions(int side1, int side2, int side3) {
    if (side1 >= 0 && side2 >= 0&&side3>=0) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
       
        setArea();
        setPerimeter();
    } else {
        cerr << "Dimentions are non-negative." << endl;
    }
}
 
void Triangle::setArea() {
    double semi = (side1+side2+side3)/2;
    double cal = (semi)*(semi-side1)*(semi-side2)*(semi-side3);
    area = pow(cal,0.5);

    
}
 
void Triangle::setPerimeter() {
    perimeter = side1+side2+side3;
}
 
double Triangle::getArea() {
    return area;
}
 
int Triangle::getPerimeter()  {
    return perimeter;
}
 