#pragma once
#include "main.h"
#include <iostream>
using namespace std;

//overloading the operator

class Point:public Shape  {

	friend ostream& operator<<(ostream&, const Point&);
public:
	Point(int = 0, int = 0);
	void setPoint(int, int);	
	int getX() const { return x; }
	int getY() const { return y; }
	virtual void drawShape() const { cout << "Point :"; }
	virtual void print() const;
protected:
	int x;
	int y;
	

};