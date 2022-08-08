#pragma once
#include "circle.h"

class Cylinder :public Circle {
	friend ostream& operator<<(ostream&, const Cylinder&);
public:
	Cylinder(double h=0.0,double r=0.0, int x=0, int y=0);
	void setHeight(double);
	//double getHeight() ;
	 virtual double calculateArea() const;
	 virtual double calculateVolume() const;
	 virtual void printShapeName() const { cout << "\nCylinder:"; }
	 virtual void print() const;
protected:
	double height;
};