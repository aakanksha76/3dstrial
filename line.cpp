#include "line.h"

Line::Line(int x, int y, int rc) {
	start = new Point(x, y);
	end = new Point(x+4, y);
}

Line::~Line() {
	delete start;
	delete end;
}