// swap pass by address
#include<iostream>
using namespace std;
void swap(int*, int*);
int main()
{
	int a,b;
	cout<<"enter a & b"<<endl;
	cin>>a>>b;
	cout<<"Before Swapping a & b"<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<"After Swapping a & b"<<a<<" "<<b<<endl;
	
	return 0 ;
}
void swap(int* p, int* q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
	cout<< "After swapping p & q"<<*p<<" "<<*q<<endl; 
}
