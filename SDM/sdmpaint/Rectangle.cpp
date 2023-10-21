#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle()
{
}
   Rectangle::Rectangle(Point a,Point b,int c){
			this->p1.x=a.x;
			this->p1.y=a.y;
			this->p2.x=b.x;
			this->p2.y=b.y;
			this->t=c;
		}
		void Rectangle:: display(){
			  cout<<"Co-ordinate of Rectangle are"<<endl;
			  cout<<"("<<"("<<this->p1.x<<","<<this->p1.y<<")"<<", "<<"("<<this->p2.x<<","<<this->p2.y<<")"<<", thickness="<<t<<")"<<")"<<endl;
       
			  


}	
	
