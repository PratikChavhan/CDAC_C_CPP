#include "Square.h"
#include <iostream>
using namespace std;
Square::Square()
{
}
 Square::Square(Point a,Point b,int c){
			this->p1.x=a.x;
			this->p1.y=a.y;
			this->p2.x=b.x;
			this->p2.y=b.y;
			this->t=c;
		}
		void Square:: display(){
			  cout<<"Co-ordinate of Square are"<<endl;
			  cout<<"("<<"("<<this->p1.x<<","<<this->p1.y<<")"<<", "<<"("<<this->p2.x<<","<<this->p2.y<<")"<<", thickness="<<t<<")"<<")"<<endl;
       
			  }	
			 
Square::~Square()
{
}
