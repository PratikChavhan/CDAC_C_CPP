/// inheritence calling'
#include<iostream>
using namespace std;
class A{
  int a;
  public:
  	A(){
  		cout<<"Default of a"<<"\n";
	  }
  void display(){
  	cout<<"Inside a class"<<"\n";
  }	
};
class B:public A{
	public:
		B(){
			cout<<"Default of B"<<"\n";
		}
		void display(){
			A::display();
			cout<<"Inside B class"<<"\n";
		}
};
int main(){
	B bobj;
	bobj.display();
	
}
