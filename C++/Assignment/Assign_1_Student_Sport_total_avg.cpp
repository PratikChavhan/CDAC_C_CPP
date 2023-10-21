// result
#include<iostream>
using namespace std;
class Student{
	int roll,mark1,mark2;
	public:
	   Student(){
		cout<<"Enter the roll"<<endl;
		cin>>this->roll;
			cout<<"Enter the mark1"<<endl;
		cin>>this->mark1;
			cout<<"Enter the mark2"<<endl;
		cin>>this->mark2;	
		}
	  int sum_class(){
		
			return mark1+mark2;
		}
	
	
};
class Sport{
	int sm;
	public:
	 Sport(){
		cout<<"Enter the sport mark"<<endl;
		cin>>this->sm;
			
		}
		 int sum_sport(){
				
			return sm;
		}
		
	
};

class Result: public Student,public Sport{
	public :
	    int total;
	 
	   	float avg;
		void display(){
		   
		  this->total=Student::sum_class()+Sport::sum_sport();
		  cout<<"The total marks of the student "<<this->total<<endl;
		  this->avg=(float)total/3;
		  cout<<"The average marks of the student "<<this->avg<<endl;
      
		}
};

int main(){

	Result r;
	r.display();

	
}



