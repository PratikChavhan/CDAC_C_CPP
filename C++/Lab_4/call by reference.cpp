#include<iostream>
using namespace std;
void swap(int&, int&);
int main()
{
	int a = 10;
	int b = 30;
	cout<<a<<endl<<b;
	swap(a, b);  
}
void swap(int& num1, int& num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout<<"\n"<<num1<<"\n"<<num2;
}
