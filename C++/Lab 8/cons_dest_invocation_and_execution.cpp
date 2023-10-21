#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"inside default of A"<<endl;
		}
	
};
class B:virtual public A
{
	public:
		B()
		{
			cout<<"inside default B"<<endl;
		}
		
};
class C:virtual public A
{
	public:
		C()
		{
			cout<<"inside default of C"<<endl;
		}
	
};
class D: public B, public C
{
	public:
	D()
	{
		cout<<"Inside defult of D"<<endl;
	}
};
int main()
{
	A* a=new D();
}
