#pragma once
#include "point.h"

class Circle : public Point {
	friend ostream& operator<<(ostream&, const Circle&);
public:
	Circle(double r = 0.0, int x = 0, int y = 0);
	void setRadius(double);
	double getRadius() const;
	virtual double calculateArea() const;
	virtual void drawShape() const { cout << "Circle :"; }
	virtual void print() const;
protected:
	double radius;

};