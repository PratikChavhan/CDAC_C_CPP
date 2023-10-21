#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int y=0;
		for(int i=0; i<5; i++)
	{
	for(int x = 1; x<=i+1; x++)
	{
			 if(x%2!=0){
			 	cout<<a;
			 }
			 else{
			 	cout<<y;
			 }
		}
		cout<<endl;
	}
	
//	for(int i=0; i<5; i++)
//	{
//		for(int x = 1; x<=i+1; x++)
//		{
//			 cout<<x%2;
//		}
//		cout<<endl;
//	}
}
