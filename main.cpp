    #include <iostream>
    #include "header/Rectangle.h"
    #include "header/Circle.h"
    #include "header/Square.h"
    #include "header/Line.h"
    #include "header/Triangle.h"
    #include "header/Elipse.h"
    using namespace std;
    
    int main()
    {
        
        
        
        
        
        
        while (1)
        {
            cout << "<<<WELCOME>>>" << endl;
            cout << "Select shape of your choice"<<endl;
            cout << "(1).Rectangle " << endl
                << "(2).Circle " << endl
                << "(3).Square " << endl
                << "(4).Triangle" << endl
                << "(5).Elipse " << endl
                << "(6).Line " << endl
                << "(7).Exit"<<endl;
               
            int selection;
            cin >> selection;
            
    
            switch (selection)
            {
            case 1:
                Rectangle rectangle;
                cout << "<<<Rectangle>>>" << endl;
                int length, breath;
                cout << "Enter the length and breath for Rectangle" << endl;
            
                cin >> length >> breath;
                cout << "Properties of Rectangle are as follows: " << endl;
                rectangle.setDimensions(length,breath);
                cout << "Perimeter of Rectangle for length: "<<length<<" and breadth: "<<breath<<" "<< "is: "<<rectangle.getPerimeter()<< endl;
                cout << "Area of Rectangle for length: "<<length<<" and breadth: "<<breath<<" is: "<<rectangle.getArea()<<endl;
                break;
            case 2:
                Circle circle;
                cout << "<<<Circle>>>" << endl;
                cout << "Enter the radius for Circle" << endl;
                float radius;
            
                cin >> radius;
                cout << "Properties of Rectangle are as follows: " << endl;
                circle.setDimensions(radius);
                cout << "Circumference for radius: "<<radius<<" is: "<<circle.circumference()<< endl;
                cout << "Area of Circle for radius: "<<radius<<" is: "<<circle.area()<<endl;
                break;

            case 3:
                Square square;
                cout << "<<<Square>>>" << endl;
                int side;
                cout << "Enter the side for Square" << endl;
            
                cin >> side;
                cout << "Properties of Square are as follows: " << endl;
                square.setDimensions(side);
                cout << "Perimeter of Square for length: "<<side<< " is: "<<square.getPerimeter()<< endl;
                cout << "Area of Square for length: "<<side<<" is: "<<square.getArea()<<endl;
                break;

            case 4:
                Triangle triangle;
                cout << "<<<Triangle>>>" << endl;
                int side1, side2,side3;
                cout << "Enter the sides of Triangle" << endl;

                cin >> side1 >> side2>>side3;
                cout << "Properties of Triangle are as follows: " << endl;
                triangle.setDimensions(side1,side2,side3);
                cout << "Perimeter of triangle for sides: "<<side1<<" "<<side2<<" and "<<side3 <<" is: "<<triangle.getPerimeter()<< endl;
                cout << "Area of triangle for sides: "<<side1<<" "<<side2<<" and "<<side3 <<" is: "<<triangle.getArea()<< endl;
                break;
            case 5:
                Elipse elipse;
                cout << "<<<Elipse>>>" << endl;
                cout << "Enter the Major and Minor Axis for Elipse" << endl;
                float minAxis,maxAxis;
            
                cin >> minAxis>>maxAxis;
                cout << "Properties of Elipse are as follows: " << endl;
                elipse.setDimensions(maxAxis,minAxis);
                cout << "Circumference of Elipse for Major Axis: "<<maxAxis<<" and Minor Axis "<<minAxis<<" is: "<<elipse.circumference()<< endl;
                cout << "Area of Elipse for Major Axis: "<<maxAxis<<" and Minor Axis "<<minAxis<<" is: "<<elipse.area()<< endl;
                break;
             case 6:
                Line line;
                cout << "<<<Line>>>" << endl;
                int x1,x2,y1,y2;
                cout << "Enter the Coordinates for a line" << endl;

                cin >> x1 >> x2>>y1>>y2;
                cout << "Properties of Length are as follows: " << endl;
                line.setDimensions(x1,x2,y1,y2);
                cout << "Length of Line for Cordinates: "<<x1<<" "<<x2<<" "<<y1 <<" and "<<y2<<" is: "<<line.length()<< endl;
                break;

            case 7:
                exit(1);
                break;

            }

        }

        return 0;

    }

                


    