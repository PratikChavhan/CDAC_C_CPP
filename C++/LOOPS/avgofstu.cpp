// Avg and name of student
#include<iostream>
using namespace std;
int main(){
	int n,m,sum=0;
	float avg;
	cout<<"Enter the number of subj"<<endl;
	cin>>n;
	cout<<"Enter the length of name of student"<<endl;
	cin>>m;
	cout<<"Enter the name of student"<<endl;
	char name[m+1];
	cin>>name;
	int *marks=new int[n];
	
	for(int i=0;i<n;i++){
		cout<<"Enter the mark of student"<<endl;
	cin>>marks[i];
	sum=sum+marks[i];
	}
	avg=(float) sum/n;
	cout<<name<<" "<<avg;
	
}
