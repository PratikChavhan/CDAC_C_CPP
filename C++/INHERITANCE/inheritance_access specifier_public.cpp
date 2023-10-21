#include<iostream>
using namespace std;
class A
{
	int c;
	public:
		int a;
	protected:
		int b;
	public:
		void display()
		{
			cout<<"in disp of a\n";
		}
};
class B : public A
{
	public:
		void show()
		{
			A::display();
			cout<<b<<endl;
		}
};
class C : public B
{
	public:
		void show()
		{
			cout<<b<<endl;
		}
};
int main()
{
	B bobj;
	bobj.show();
	bobj.display();
	C cobj;
	cobj.show();
}
