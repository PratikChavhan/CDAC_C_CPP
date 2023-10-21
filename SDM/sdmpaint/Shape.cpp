#include "Shape.h"
#include <iostream>
using namespace std;
Shape::Shape()
{
}
void Shape::set_thickness(int t){
			this->thickness=t;
		}
	int Shape::get_thickness(){
		   return this->thickness;	
		}
		

	 void Shape::display(){
		  cout<<thickness<<" px\n";
		  }
Shape::~Shape()
{
}
