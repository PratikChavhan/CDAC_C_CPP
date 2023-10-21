//overloading subscript
#include<iostream>
using namespace std;
class Subscript{
	int size;
	int* ptr;
	public:
		Subscript(int* p=NULL,int s=0){
			size=s;
			ptr=p;
			if(s!=0){
				ptr=new int[s];
				for(int i=0;i<s;i++){
					ptr[i]=p[i];
				}
			}
		}
		
		int& operator [](int in){
			if(in>=size){
				cout<<"Array out of bound";
			}
			return ptr[in];
		}
		void print ()const{
			for(int i=0;i<size;i++){
					cout<<ptr[i]<<" ";
				}
		}
		
};
int main(){
	int arr[]={1,2,3,4};
	Subscript a(arr,4);
	a.print();
	a[2]=6;
	a.print();
	
}
