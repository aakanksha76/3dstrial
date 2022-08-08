#pragma once

class Shape {

public:
	virtual double calculateArea() const { return 0.0; }; //have a body
	virtual double calculateVolume() const { return 0.0; };// not pure virtual functions(v.f.)
	virtual void drawShape() const = 0;
	virtual void print() const = 0; //pure v.f.

};
void virtualViaPointer(const Shape* baseptr);
void virtualViaReference(const Shape& baseClassRef);