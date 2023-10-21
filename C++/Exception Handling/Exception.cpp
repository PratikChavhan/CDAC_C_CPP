// Exception handling 
#include<iostream>
#include<string.h>
using namespace std;

class Excep
{

public:
	 void	division(int a,int b){
	       if(b==0){
	       	throw"Exception got handle";
		   }
		 	a/b;
		}
	
};

int main()
{
  Excep e1;
  	 try{
  	  e1.division(12,0);
	}
		 catch(char const* msg ){
		 	cout<<msg;
		 }
 
 }
