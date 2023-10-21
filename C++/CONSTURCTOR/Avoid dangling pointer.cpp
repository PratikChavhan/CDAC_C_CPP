#include<iostream>
using namespace std;
#include<string.h>
class String1
{
	int len;
	char* ptr;
	public:
		String1(char* );
		void display();
		~String1();
		String1(String1&);
};
String1::String1(char* ptr1)
{
	len = strlen(ptr1);
	ptr = new char[len + 1];
	strcpy(ptr,ptr1);
}
String1::String1(String1& new_S)
{
	this->len = new_S.len;
	this->ptr = new char[this->len+1];
	strcpy(this->ptr,new_S.ptr);
}
void String1::display()
{
	cout<<this->len<<" "<<this->ptr<<endl;
}
String1::~String1()
{
	cout<<"\nDestructor Called\n";
	if(ptr!=NULL)
	{
		delete[] ptr;
		
	}ptr = NULL;
}
int main()
{
	String1 s1("Pratik");
	s1.display();
	{
		String1 s2(s1);
		s2.display();
		s2.~String1();
	}
	s1.display();
}
