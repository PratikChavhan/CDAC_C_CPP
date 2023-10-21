 // Dynamic array of object
 #include<iostream>
 using namespace std;
 class Complex
 {
 	int real,img;
 	public:
 		void get(){
 			cout<<"Enter the real and img value  "<<endl;
 			cin>>real>>img;
		 }
		 void display(){
		 	cout<<real<<"+"<<img<<"i"<<endl;
		 	
		 }
		 
 };
 int main(){
 	int n;
 	cout<<"Enter the size of dynamic array "<<endl;
 	cin>>n;
 	Complex *c1=new Complex[n];
 	
 	for(int i=0;i<n;i++){
 		c1[i].get();
	 }
	 	for(int i=0;i<n;i++){
 		c1[i].display();
	 }
 	
 }
 
