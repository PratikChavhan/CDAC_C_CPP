#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;
#include "Point.h"

class Shape : public Point
{
	public:
			int thickness;
			void set_thickness(int );
				int get_thickness();
				 virtual void display();
		Shape();
		~Shape();
	protected:
};

#endif
