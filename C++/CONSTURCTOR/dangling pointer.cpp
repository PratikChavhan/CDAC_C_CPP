/// dangling pointer
#include<iostream>
#include<string.h>
using namespace std;
class string1{
	int len;
	char* name;
	public:
		string1(char*);
		void display();
		~string1();
};
string1::string1(char* n){
	len=strlen(n);
	name=new char[this->len+1];
	strcpy(name,n);
}
 void string1::display(){
 	cout<<len<<" "<<this->name;
 }
 string1::~string1(){
 	cout<<"Destructor is called"<<endl;
 	if(this->name){
 		delete [] name;
	 }
	 name=NULL;
 }
 int main(){
 	string1 s1("pratik");
 	  s1.display();
 	{
 		string1 s2(s1);
 		s2.display();
 		s2.~string1();
	 }
	 s1.display();
 	
 }
