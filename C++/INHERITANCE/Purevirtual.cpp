// multilevel inheritence
#include<iostream>
using namespace std;
class Employee
{
	int id;
	public:
		Employee(){
			cout<<"Defult of employee"<<endl;
			id=0;
		}
		Employee(int a){
				cout<<"para of employee"<<endl;
			id=a;
		}
		void display(){
				cout<<id<<endl;
		}
		virtual int findSal()=0;
	
};
 class Wageemployee: public Employee{
 		int hr;
 		int rate;
	public:
		Wageemployee(){
			cout<<"\nDefult of Wageemployee"<<endl;
			rate=0;
			hr=0;
		}
		Wageemployee(int a,int b,int c):Employee(c){
				cout<<"\npara of Wageemployee"<<endl;
			rate=a;
			hr=b;
		}
		void display(){
			Employee::display(); 
							cout<<rate<<endl;
								cout<<hr<<endl;
			
		}
			int findSal(){
			return rate*hr;
		}
 };
 class SalesManger: public Wageemployee{
 		int comm;
 		int sales;
	public:
	SalesManger	(){
			cout<<"\nDefult of SalesManger"<<endl;
			sales=0;
			comm=0;
		}
	SalesManger	(int a,int b,int c,int d,int e):Wageemployee(a,b,c){
				cout<<"\npara of SalesManger"<<endl;
		sales=d;
		
		comm=e;
		}
		void display(){
		Wageemployee	::display();
							cout<<sales<<endl;
								cout<<comm<<endl;
			
		}
			int findSal(){
			return 	(Wageemployee::findSal())+ sales*comm ;
		}
 };
int main()
{
	Employee* ptr=new 	Wageemployee (14, 1, 23);
	

	cout<<ptr->findSal()<<endl;



  Employee* ptr1=new SalesManger (10, 12, 2, 15, 2);

	cout<<ptr1->findSal()<<endl;
}
