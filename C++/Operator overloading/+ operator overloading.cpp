//operator overloading
#include<iostream>
using namespace std;

class Date1
{

		
	public:
		int dd, mm, yy;
		void display()
		{
			cout<<dd<<"/"<<mm<<"/"<<yy<<endl;		
		}
		Date1()
		{
			
		}
		Date1(int dd,int mm, int yy)
		{
			this->dd = dd;
			this->mm = mm;
			this->yy = yy;
		}
		friend Date1 operator + ( Date1&, int);
		friend Date1 operator - ( Date1&, int);
	
};
Date1 operator +(Date1& d1,int a)
{
	Date1 temp(0,0,0);
	temp.dd = d1.dd + a;
	temp.mm = d1.mm + 6;
	temp.yy = d1.yy + 10;
	return temp;
}
Date1 operator -(Date1& d1,int a)
{
	Date1 temp(0,0,0);
	temp.dd = d1.dd - a;
	temp.mm = d1.mm - 6;
	temp.yy = d1.yy - 10;
	return temp;
}

class Time1
{

		
	public:
		int hh, mm, ss;
		void display()
		{
			cout<<hh<<":"<<mm<<":"<<ss<<endl;		
		}
		Time1()
		{
			
		}
		Time1(int hh,int mm, int ss)
		{
			this->hh = hh;
			this->mm = mm;
			this->ss = ss;
		}
		friend Time1 operator + ( Time1&, int);
		friend Time1 operator - ( Time1&, int);
	
};
Time1 operator +(Time1& t1,int a)
{
	Time1 temp(0,0,0);
	temp.hh = t1.hh + a;
	temp.mm = t1.mm + 6;
	temp.ss = t1.ss + 10;
	return temp;
}
Time1 operator -(Time1& t1,int a)
{
	Time1 temp(0,0,0);
	temp.hh = t1.hh - a;
	temp.mm = t1.mm - 6;
	temp.ss = t1.ss - 10;
	return temp;
}

int main()
{
	Date1 d1(23,10,2023);
	d1.display();
	Date1 d2;
	d2 = d1 + 6;
	d2.display();
	d2 = d1 - 4;
	d2.display();

	Time1 t1(10,15,45);
	t1.display();
	Time1 t2;
	t2 = t1 + 6;
	t2.display();
	t2 = t1 - 4;
	t2.display();
}




