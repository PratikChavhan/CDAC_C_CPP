/// containment
#include<iostream>
#include<string.h>
using namespace std;
class Date1{
		 public:
				int dd;
            	int mm;
            	int yy;
			Date1()
			{
//				
			}
//	
        void setDate1(){
        	cout<<"Enter the day"<<endl;
        	cin>>this->dd;
        	cout<<"Enter the month"<<endl;
        		cin>>this->mm;
        		cout<<"Enter the year"<<endl;
        		cin>>this->yy;
        	
		}
		void display()
		{
			cout<<"Date1 is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
		}
	
};
class Student{
    
	public:
		int roll;
	string name;
	Date1 ad ;
		Student()
		{
				cout<<"Enter the roll "<<endl;
        	cin>>this->roll;
        	cout<<"Enter the name "<<endl;
        		cin>>this->name;
        		ad.setDate1();
        	
			}	

      void setStudData(){
      	
	  }
	void display(){
		cout<<"The name of student "<<name<<endl;
		cout<<"The roll no of student "<<roll<<endl;
	
	    ad.display();
	}
};


int main()
{


	Student s[4];
	for(int i=0;i<4;i++){
		s[i].setStudData();
	}

	for(int i=0;i<4;i++){
	   for(int j=i+1;j<4;j++){
		if(s[i].roll>s[j].roll){
			Student temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}	
	}
	for(int i=0;i<4;i++){
		s[i].display();
	}
}


