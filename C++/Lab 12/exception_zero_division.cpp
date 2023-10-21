#include<iostream>
using namespace std;
float Division(int x, int y)
{
	if(y == 0)
	{
		throw " zero division error";
	}
	else
		return (float)x/y; 
}


int main()
{
	int a, b;
	float res;
	
	try
	{
		cout<<"enter the value of a, b\n";
		cin>>a>>b;
		res = Division(a, b);
		cout<<res<<endl;	
	}
	catch(char const * e)
	{
		cout<<e<<endl;
	}
	cout<<"end of main\n";
	return 0;
}
