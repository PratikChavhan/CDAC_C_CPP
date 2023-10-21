#include<iostream>
using namespace std;

template <class T>
T swap1(T&a, T&b)
{
	T temp = a;
	a =b;
	b = temp;
}
int main()
{
	float a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<"Before swap: a="<<a<<" & b="<<b<<endl;
	swap1(a,b);
	cout<<"After swap a="<<a<<" & b="<<b<<endl;
}
