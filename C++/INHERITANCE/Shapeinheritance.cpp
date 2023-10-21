/// shape
#include<iostream>
using namespace std;
class Shape{
	public:
		virtual void area()=0;
		  virtual void display(){};
};

class Square: public Shape{
	public:
		int s;
		void area(){
			cout<<"Enter the side of suqare"<<endl;
			cin>>s;
			
			
		}
			  void display(){
			cout<<"Area of square "<<s*s<<endl;
			};
};

class Rectangle : public Shape{
	public:
		int l,b;
		void area(){
			cout<<"Enter the length of rectangle"<<endl;
			cin>>l;
			cout<<"Enter the length of rectangle"<<endl;
			cin>>b;
		
			
		}
		 void display(){
			cout<<"Area of rectangle "<<l*b<<endl;
			};
};

int main(){
	Shape* ptr=new Square();
	ptr->area();
    ptr->display();
   	Shape* ptr1=new Rectangle();
   	ptr1->area();
    ptr1->display();
}
