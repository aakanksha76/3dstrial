#include "cylinder.h"
extern const double PI; //defined in circle.cpp

Cylinder::Cylinder(double h, double r, int x ,int y) : Circle(r,x,y){
	setHeight(h);
}

void Cylinder::setHeight(double h) {
	height = (h>=0?h:0);
}

double Cylinder::calculateArea() const {
	return 2 * Circle::calculateArea() +
		2 * PI * radius * height;
}

double Cylinder::calculateVolume() const {
	return Circle::calculateArea() * height;
}

void Cylinder::print() const {
	Circle::print();
	cout << "height: " << height << endl;
}