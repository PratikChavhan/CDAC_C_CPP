// poer of number
#include<iostream>
using namespace std;
int main(){
	
	int base,exponent,power=1;
	cout<<"Enter the base of number";
	cin>>base;
	cout<<"Enter the exponent of nmber";
	cin>>exponent;
	for(int i=1;i<=exponent;i++){
		power=power *base;
	}
	cout<<"The power of number"<<power;
}
