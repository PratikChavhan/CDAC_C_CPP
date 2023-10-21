 #include<iostream>
using namespace std;
int main()
{
	int ptr1[5]; // int array declaration
	int *ptr2[5]; // int array of pointer declaration	
	cout<<"Enter five numbers"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>ptr1[i];
	}
	for(int i=0; i<5; i++)
	{
		ptr2[i] = &ptr1[i];
	}
	cout<<"The values are "<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<*ptr2[i]<<endl;
	}
	cout<<"Size of ptr1: "<<sizeof(ptr1)<<endl;
	cout<<"Size of ptr2: "<<sizeof(ptr2)<<endl;
	return 0;
}
