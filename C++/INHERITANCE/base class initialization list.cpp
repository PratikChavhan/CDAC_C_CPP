#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(int a)
		{
			cout<<"para of A \n";
			this->a = a; 
		}
		void display()
		{
			cout<<"disp of A\n";
			cout<<a<<endl;
		}
};
class B:public A
{
	int b;
	public:
		B(int p,int q):A(p)
		{
			cout<<"para of B\n";
//			a=p;
			b=q;
		}
		void display()
		{
			A::display();
			cout<<"Display of B\n";
			cout<<b<<endl;
		}
};
int main()
{
	B bobj(10, 20);
	bobj.display(); 
}
