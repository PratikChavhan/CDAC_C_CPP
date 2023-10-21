// = overloading
//operator overloading
#include<iostream>
using namespace std;

class Complex
{   
int real,img;
   public:
		
			Complex( )
		{
			this->real = real;
			this->img = img;
			
		}
	
		Complex(int real,int img )
		{
			this->real = real;
			this->img = img;
			
		}
			void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;		
		}
		 bool operator ==(const Complex& );
		
	
};
bool  Complex:: operator ==(const Complex& c1)
{
    if (this->real == c1.real && this->img ==c1.img)
    return true;
    else
    return false;
	
}
int main()
{
	Complex c1(23,10);
	c1.display();
	Complex c2(10,33);
	c2.display();
	if(c2==c1)
	{
		cout<<"Complex nos are equals";
	}
	else 
	{
			cout<<"Complex nos not are equals";
	}
}
