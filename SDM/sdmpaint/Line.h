#ifndef LINE_H
#define LINE_H
#include <iostream>
using namespace std;
#include "Shape.h"

class Line : public Shape
{
	public:
		void display();
	 	Line(Point ,Point,int );
		Point p1,p2;
		int t;
		Line();
		~Line();
	protected:
};

#endif
