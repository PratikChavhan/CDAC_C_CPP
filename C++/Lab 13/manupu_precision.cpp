#include<iostream>
#include <sstream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b;
	float result;
	cout<<"Enter an odd number: ";
	cin>>a;
	cout<<"Enter an even number: ";
	cin>>b;


	result = (float)a / (float) b;
	cout<<setfill('*')<<setw(25)<<ends;
	cout<<"+"<<endl;
	cout<<"Result: "<<setprecision(3)<<result;

}
