#pragma once
#include "Point.h"
#include "cmath"
class Polygon
{
protected:
	int size;
	Point* points;
public:
	int getSize();
	Polygon();
	Polygon(int, Point*);
	void setPoint(int, const Point&);
	void setPoint(int, double, double);
	double area(); 
	~Polygon();
};

