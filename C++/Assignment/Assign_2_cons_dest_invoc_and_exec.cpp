#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"inside default of A"<<endl;
		}
		~A()
		{
			cout<<"destructor of of A";
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"inside default B"<<endl;
		}
		~B()
		{
			cout<<"destructor of B"<<endl;
		}
};
class C:public A
{
	public:
		C()
		{
			cout<<"inside default of C"<<endl;
		}
		~C()
		{
			cout<<"destructor of C"<<endl;
		}
};
int main()
{
	A a1; // contructor of a called
	B b1; // cons of A then cons of B called
	C c1; // cons of A then cons of C called
	 a1.~A();
	 b1.~B();
}
