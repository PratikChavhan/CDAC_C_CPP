// adding 2 object
#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		demo()
		{
			a=10;
		}                               
		int add(demo d1)
		{
			a=d1.a;
			return this->a+a; 
		}
};
int main()
{
	demo d;
	demo d1;
	cout<<"result = "<<d.add(d1);
	return 0;
}
