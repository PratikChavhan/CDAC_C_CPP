// array of object
#include<iostream>
using namespace std;
class Student{
  int id;
  char name[10];
 int dod;
  public:
  void getData(){
  	cout<<"Enter the details ";
  	cin>>id>>name>>dod;
  }
  void display(){
  	cout<<id<<" "<<name<<" "<<dod;
  }
};

int main(){
	Student s[3];
	int i=0;
	for(i=0;i<3;i++){
		s[i].getData();
		s[i].display();
	}
	
}
