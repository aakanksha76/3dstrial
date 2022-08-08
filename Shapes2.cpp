// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include "main.h"


int main()
{

    Point p1(2, 4);
    p1.drawShape();
    p1.print();
    cout << "Area is " << p1.calculateArea() << " and volume is " << p1.calculateVolume()<< endl;
    Circle c1(5,10,5);
    c1.drawShape();
    c1.print();
    cout << " Circle Area is " << c1.calculateArea() << " and volume is " <<c1.calculateVolume() << endl;
    Cylinder cy(6,8, 2, 9);
    cy.drawShape();
    cy.print();
    cout << " Cylinder Area is " << cy.calculateArea() << " and volume is " << cy.calculateVolume() << endl;
    Shape* shape[3] = { &p1, &c1, &cy };
    for (int i = 0; i < 3; ++i) {
        virtualViaPointer(shape[i]);
    }
    cout << "\n virtualReference :\n";
    for (int i = 0; i < 3; ++i) {
        virtualViaReference(*shape[i]);
    }

    /*
    Point* pointPtr = 0, p(30, 50);
    Circle* circlePtr = 0, c(2.7, 120, 89);
    cout << "Point p :" <<p<< "\nCircle c :" << c << "\n";


    pointPtr = &c;
    cout << "\n\nCircle c (via *pointPtr): "<< *pointPtr<<"\n";

    //Treat a circle as acirlce with some casting
    //cast base class pointer to derived class pointer

    circlePtr = static_cast<Circle*>(pointPtr);
    cout << "\n\nCircle c (via *circlePtr): " << *circlePtr\
        << "\nArea of c (via circlePtr): " << circlePtr->calculateArea() << "\n";

    //Dangerous: Treat a point as a Circle
    pointPtr = &p; // assign address of point to pointPtr

    //cast base-class pointer to derived-class pointer
    circlePtr = static_cast<Circle*>(pointPtr);
    cout << "\n\nPoint p (via *circlePtr):" << *circlePtr\
        << "\nArea of object circlePtr points to: "\
        << circlePtr->calculateArea() << endl<<"\n=====================\n";
    //circlePtr = &p;   can never assign base-class address to child class pointer
    Cylinder cyl(5.7, 2.5, 12, 23);
    
    cout << "\nCylinder area is :";
    cout << cyl.calculateArea();
    cout << "\nCylinder volume is :";
    cout << cyl.calculateVolume();

    */

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
