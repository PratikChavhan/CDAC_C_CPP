#include<iostream>
using namespace std;
int main()
{
	for(int num = 1; num<=10; num++)
	{
		for(int times = 1; times<=10; times++)
		{
			cout<<num<<" * "<<times<<" = "<<num*times<<endl;
		}
		cout<<"*************************************\n";
	}
	return 0;
}

