/// user defined string function
#include<iostream>
#include<string.h>
using namespace std;
class String1
{
	int len;
	char* ptr;
	public:
		String1();
		String1(int len);
		String1(char* ptr1);
		String1(char* ptr1,int len);
		void display();
};
String1::String1()
{
	int len;
	cout<<"\nEnter the length of string: "<<endl;
	cin>>len;
	this->len=len;
	char name[this->len+1];
	ptr=new char[this->len+1];
	cout<<"\nEnter the string: "<<endl;
	cin>>name;
	strcpy(ptr,name);
	
}
String1::String1(int x)
{
	this->len=x;
	ptr=new char[this->len+1];
	char name[this->len+1];
	cout<<"\nEnter the string: ";
	cin>>name;
	strcpy(ptr,name);
}
String1::String1(char* name)
{
	this->len=strlen(name);
	ptr=new char[this->len+1];
	strcpy(ptr,name);
}
String1::String1(char* name,int x)
{
	this->len=x;
	ptr=new char[this->len+1];
	strcpy(ptr,name);
}
void String1::display()
{
	cout<<len<<" "<<ptr;
}
int main()
{
	String1 s1;
	s1.display();
	String1 s2(5);
	s2.display();
	String1 s3("pratik");
	s3.display();
	String1 s4("Pratik",6);
	s4.display();
}
