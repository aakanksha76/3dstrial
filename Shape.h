#pragma once

class Shape {

public:
	virtual double caluclateArea() const { return 0.0; }; //have a body
	virtual double caluclateVolume() const { return 0.0; };// not pure virtual functions(v.f.)
	virtual void drawShape() const = 0;
	virtual void print() const = 0; //pure v.f.

};
