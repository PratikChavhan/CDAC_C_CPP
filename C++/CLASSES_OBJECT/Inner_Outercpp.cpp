#include<iostream>
using namespace std;

class Outer
{
	public:
		Outer()
		{
			cout<<"Default of outer\n";	
		}
				static void print(int a)
				{
				
					cout<<"Number is \n"<<a;
				}
				
				void makeneg(int a)
				{
					a=-a;
					cout<<"Number is \n"<<a;
				}
		class Inner
		{
			public:
				
				Inner()
				{
					cout<<"Default of inner\n";	
				}
				
				static void even(int a)
				{
					if (a%2 == 0)
					cout<<"Number is Even\n";
				}
				
				void odd(int a)
				{
					if (a%2 != 0)
					cout<<"Number is Odd\n";
				}	
		};
};

int main()
{
	Outer o1;
	o1.print(12);
	o1.makeneg(10);
    Outer::Inner();
    
	Outer::Inner i;
    i.odd(9);
    
//	Outer::Inner::even(3);
//	o1.Inner();
//	Inner i1();
	
	
	
	
	
}
