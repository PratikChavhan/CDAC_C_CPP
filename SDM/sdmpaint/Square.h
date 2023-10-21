#ifndef SQUARE_H
#define SQUARE_H
#include <iostream>
using namespace std;
#include "Shape.h"

class Square : public Shape
{
	public:
	    Square(Point ,Point,int );
		Point p1,p2;
		int t;
		void display();
		Square();
		~Square();
	protected:
};

#endif
