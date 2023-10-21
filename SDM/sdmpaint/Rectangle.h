#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;
#include "Shape.h"

class Rectangle : public Shape
{
	public:
			Rectangle(Point ,Point,int );
	     	Point p1,p2;
		    int t;
				 void display();
		Rectangle();
	protected:
};

#endif
