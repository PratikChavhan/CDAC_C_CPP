#include<iostream>
using namespace std;
class A
{
	int c;
	public:
		int a=10;
	protected:
		int b=3;
	public:
		void display()
		{
			cout<<"in disp of a\n";
		}
};
class B : protected A
{
	public:
		void show()
		{
			A::display();
		
			cout<<b<<endl;
		}
};
class C : protected B
{
	public:
		void show()
		{
			A::display();
			cout<<a<<" "<<b;
		}
};
int main()
{
	B bobj;
	bobj.show();
//	bobj.display();
	C cobj;
	cobj.show();
}
