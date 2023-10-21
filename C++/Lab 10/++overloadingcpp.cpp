// ++ overloading
//operator overloading
#include<iostream>
using namespace std;

class Complex
{
   public:
		int real,img;
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;		
		}
		Complex(int real,int img )
		{
			this->real = real;
			this->img = img;
			
		}
		friend Complex operator ++ ( Complex&);
		friend Complex operator -- ( Complex&);
	
};
Complex operator ++(Complex& c1)
{

	c1.real =c1.real + 1;
	c1.img =c1.img+ 1;
	Complex temp=c1;
	
	return temp;
}

Complex operator --(Complex& c1)
{

	c1.real =c1.real -1;
	c1.img =c1.img- 1;
	Complex temp=c1;
	
	return temp;
}



int main()
{
	Complex c1(23,10);
	Complex c2=++c1;
	
	c2.display();
	Complex c3=--c1;
	c3.display();
	

}
