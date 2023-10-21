#include "Point.h"
#include <iostream>

using namespace std;
Point::Point()
{	
	x=0;
	y=0;	
}
Point::Point(int x1,int y1)
{
	this->x=x1;
	this->y=y1;
}
 void Point::  display(){
 	cout<<"("<<this->x<<", ";
 	cout<<this->y<<")";
 	cout<<endl;
 };
Point::~Point()
{
}
