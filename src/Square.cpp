#include "../header/Square.h"
#include<cmath>
using namespace std;
 
Square::Square() : area(0), perimeter(0) {}
 
void Square::setDimensions(int side) {
    if (side >= 0) {
        this->side = side;
        
       
        setArea();
        setPerimeter();
    } else {
        cerr << "Dimentions are non-negative." << endl;
    }
}
 
void Square::setArea() {
    area = pow(side,2);
}
 
void Square::setPerimeter() {
    perimeter = 4*side;
}
 
int Square::getArea() {
    return area;
}
 
int Square::getPerimeter()  {
    return perimeter;
}
 