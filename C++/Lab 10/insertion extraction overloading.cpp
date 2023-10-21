/// io console managment

#include<iostream>
using namespace std;
class Complex
{
	private:
		int real, img;
	public:
		Complex(int r=0 , int i=0 )
		{
			real = r;
			img = i;
			}	
	      friend void operator << (ostream& out, const Complex& c);
			friend void operator >> (istream& in, Complex& c);
};
void operator << (ostream& out, const Complex& c)
{
	out << c.real;
	out<<"+"<<c.img<<"i"<<endl;
}
void operator >> (istream& in, Complex& c)
{
	cout<<"Enter real part\n";
	in >> c.real;
	cout<<"Enter imaginary part\n";
	in >> c.img;
}
int main()
{
	Complex c1;
	cin>>c1;
	cout<<"The complex object : ";
	cout<< c1;
	return 0;
}
