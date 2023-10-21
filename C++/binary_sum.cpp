// Add two numbers/binary numbers/characters

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int a = 10, b = 20;
	cout<<"Addition of integer= "<<a+b<<endl;
	
	char ch1 = 'a', ch2 = 'A';
	int ch_add = ch1 + ch2;
	cout<<"Addition of char= "<<ch_add;
	
	string a1,b1,f1;
	int len,car,re,i;
	cout<<"Enter first binary number ";
	cin>>a1;
	cout<<"Enter second binary number ";
	cin>>b1;
	len=a1.size();
	car=0;
	f1="";
	for (i=len-1;i>-1;i--){
		
		re=car;
		if(a1[i]=='1'){
			re=re+1;
		}
		else{
			re=re+0;
		}
			if(b1[i]=='1'){
			re=re+1;
		}
		else{
			re=re+0;
		}
		if(re%2==1){
			f1='1'+f1;
		}
			else{
			f1='0'+f1;
		}
		if(re<2){
			car=0;
		}
		else{
			car=1;
		}
	}
	if(car!=0){
		f1='1'+f1;
	}
	cout<<"The binary is"<<f1;
	
	
	return 0;
}


