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
class B : private A
{
	public:
		void show()
		{
			A::display();
			cout<<b;
		}
};
class C : private B
{
	public:
		void show()
		{
//			cout<<b;
		}
};
int main()
{
	B bobj;
//	bobj.show();
//	bobj.display();
	C cobj;
//	cobj.show();
}
