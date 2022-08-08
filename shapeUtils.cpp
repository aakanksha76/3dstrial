#include "main.h"
#include <iostream>
using namespace std;

void virtualViaPointer(const Shape* baseptr) {
	baseptr->drawShape();
	baseptr->print();
	cout<<"\n Area is :"<<baseptr->calculateArea()\
		<<"  and volume is "<< baseptr->calculateVolume()<<"\n";
}

void virtualViaReference(const Shape& baseClassRef) {
	
}