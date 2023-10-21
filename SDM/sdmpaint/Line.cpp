#include "Line.h"
#include <iostream>
using namespace std;
Line::Line()
{}
 Line::	Line(Point a,Point b,int c){
			this->p1.x=a.x;
			this->p1.y=a.y;
			this->p2.x=b.x;
			this->p2.y=b.y;
			this->t=c;
		}
		void Line:: display(){
			   cout<<"Co-ordinate of Line are"<<endl;
			  cout<<"("<<"("<<this->p1.x<<","<<this->p1.y<<")"<<", "<<"("<<this->p2.x<<","<<this->p2.y<<")"<<", thickness="<<t<<")"<<")"<<endl;
       
			  }
Line::~Line()
{
}
