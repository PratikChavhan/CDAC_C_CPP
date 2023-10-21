#include<iostream>
using namespace std;
#include<string.h>
class student
{
	int rno;
	char name[];
	public:
		void show();
		student(int, char[]);
		student(student&);
};
void student::show()
{
	cout<<rno<<" "<<name<<endl;
}
student::student(int r, char* nm)
{
	this->rno = r;
	strcpy(this->name,nm);
}
student::student(student& stud)
{
	this->rno=stud.rno;
    strcpy(this->name,"PRATIK");
}
int main()
{
	student s1(1, "pratik");
	s1.show();
	student s2(s1);
	s2.show();
}

