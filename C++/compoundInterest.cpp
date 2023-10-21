// Caculate compound interest 
// Amount = principal* (1 + rate / 100)  time)

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double principal,time ,rate,compoundi,amount;
	principal = 10000;
	time = 2;
	rate = 5;
	amount = principal * pow(1 + rate/100,time);
	compoundi = amount - principal;
	cout<<"Amount: "<<amount<<" "<<"Compound Interest: "<<compoundi;
	
	
}

