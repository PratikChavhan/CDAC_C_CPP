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
		 void operator =(const Complex& );
		
	
};
void  Complex:: operator =(const Complex& c1)
{
    
	this->real =c1.real ;
	this->img =c1.img;

	
	
}




int main()
{
	Complex c1(23,10);
	c1.display();
	Complex c2(10,33) ;
	c2=c1;
	c2.display();
	

}
