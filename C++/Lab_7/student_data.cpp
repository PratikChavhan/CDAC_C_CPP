//sorting 
#include<iostream>
using namespace std;
class Student
{
	int roll,mark;
	char dob[15];
  	public:
	    void setdata()
		{
		  	cout<<"The roll n of student \t \n";
		  	cin>>roll;
	    	cout<<"The mark of student \t \n";
	    	cin>>mark;
	    	cout<<"The dob of student \t \n";
	    	cin>>dob;
	  	
		}
		  
        void display()
		{
        	cout<<"Roll No.: "<<roll<<"\t";
        	cout<<"\tMark: "<<mark;
        	cout<<"\tD4OB: "<<dob<<endl;
		}
	  
};
int main()
{
	Student s1[2];
	for(int i=0;i<=2;i++)
	{
	
		s1[i].setdata();
	}
	for(int i=0;i<=2;i++)
	{
		
		s1[i].display();
	}
	
}

