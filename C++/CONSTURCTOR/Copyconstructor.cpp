/// copy constructor
#include<iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
		date();
		date(date  &d3 );
		date(int,int,int);
		void diplaydate();
		
};

date::date(int dd,int mm,int yy){
	this->dd=dd;
	this->mm=mm;
	this->yy;
}
void date::diplaydate()
{
	cout<<dd<<" "<<mm<<" "<<yy<<endl;
}
date::date(date& d3){
   this->dd=d3.dd;
   this->mm=d3.mm;
   this->yy=d3.yy=18;	
}
date::date(){
	
}

int main()
{
	date d1(8,8,17);
	d1.diplaydate();
	date d2(d1);
	d2.diplaydate();
	d1.diplaydate();
}
