#include "circle.h"
extern const double PI = 3.14159;

Circle::Circle(double r, int x, int y) {
	//x,y has already present in point
	//calling th point constructor
	setPoint(x, y);
	setRadius(r);
}

void Circle::setRadius(double r) {
	radius = (r > 0.0 ? r : 0.0);
}

double Circle::getRadius() const {
	return radius;
}

double Circle::calculateArea() const {
	return PI * radius * radius;
}

ostream& operator<<(ostream& out, const Circle& c) {
	out << "\nCenter at : " << static_cast<Point>(c)\
		<< "\nRadius at : " << c.radius << " \nArea = " << c.calculateArea();
	return out;
}

void Circle::print() const {
	Point::print();
	cout << "Radius: " << radius << endl;
}
