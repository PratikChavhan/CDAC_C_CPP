/// Computers and printers multiple inheritance
#include<iostream>
using namespace std;
class Computer
{
	 int ram=10;
	public:
	
		Computer()
		{
		
			cout<<"inside default of Computer"<<endl;
		}
	    friend void display(Computer obj);
};
class Printer1:public Computer
{
	
	public:
		Printer1()
		{
			cout<<"inside default Printer1"<<endl;
		}
		
		
	
};
class Printer2:public Computer
{
	public:
		Printer2()
		{
		
			cout<<"inside default of Printer2"<<endl;
		}
	
		
};
void display(Computer c){
			
				
			cout<<"Virtual inside no_1 Printer  "<<c.ram<<endl;
		}
int main()
{
	Computer c;
Printer1 p1;
display(c);

}
