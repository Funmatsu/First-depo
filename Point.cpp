#include "Point.h"

Point::Point(double construct_x, double construct_y): x(construct_x), y(construct_y) {}
Point::Point():x(0), y(0) {}
 double Point::getx() const {
	return x;
}
 double Point::gety() const {
	return y;
}
void Point::setx(double set_x){
	x = set_x;
}
void Point::sety(double set_y) {
	y = set_y;
}
Point::~Point() {
	cout << " Point destructor called ";
}

