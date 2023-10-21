// fact of given number
#include<iostream>
using namespace std;
int main(){
	
	int fact;
	cout<<"Enter the num that u want to calculate factorial of\n"<<endl;
	cin>>fact;
	for(int i=1;i<=fact;i++){
		fact=fact*i;
	}
	
	cout<<"The factorial of a number is "<<fact;
	
	
}
