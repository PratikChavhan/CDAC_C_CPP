///using sort method
/// containment
#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
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
		
		int getRollno(){
			return roll;
		}
};

bool comparator(Student& s1, Student& s2){
	
	return s1.getRollno() < s2.getRollno();
}

int main()
{
	Student s[4];
	for(int i=0;i<4;i++){
		s[i].setStudData();
	}
    int n=sizeof(s)/sizeof(s[0]);
	sort(s,s+n,comparator);
	
	for(int i=0;i<4;i++){
		s[i].display();
	}
}

