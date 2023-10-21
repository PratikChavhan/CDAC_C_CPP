//operator overloading
#include<iostream>
using namespace std;

class Date1
{

			int dd, mm, yy;
	public:
	     Date1()
	     {
		 dd=12;
	     mm=04;
	     yy=1900;
	    }
	    
		friend void add  (Date1);
			
};

	void add(Date1 d){
	cout<<d.dd<<"/";
	cout<<d.mm<<"/";
	cout<<d.yy;
}

int main()
{
	Date1 d;


	add(d);
	
}




