#include "../header/Rectangle.h"
using namespace std;
 
Rectangle::Rectangle() : area(0), perimeter(0) {}
 
void Rectangle::setDimensions(int length, int width) {
    if (length >= 0 && width >= 0) {
        this->length = length;
        this->width=width;
        
        setArea();
        setPerimeter();
    } else {
        cerr << "Dimentions are non-negative." << endl;
    }
}
 
void Rectangle::setArea() {
    area = length * width;
}
 
void Rectangle::setPerimeter() {
    perimeter = 2 * (length + width);
}
 
int Rectangle::area() {
    return area;
}
 
int Rectangle::getPerimeter()  {
    return perimeter;
}
 