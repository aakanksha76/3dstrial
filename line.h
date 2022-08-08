#pragma once
#include "point.h"


class Line {
public:
	Line(int, int, int);
	~Line();
	//int calculateLength() const;
private:
	Point* start;
	Point* end;
};
