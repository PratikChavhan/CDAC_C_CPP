// sdm application
/// shape
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Point{
	public:
		int x,y;
		Point(){
			x=0;
			y=0;
		}
		Point(int x1,int y1)
		{
			this->x=x1;
		   this->y=y1;
		}
};
class Shape:public Point{
	public:
	
		int thickness;
			void set_thickness(int t){
			this->thickness=t;
		}
		int get_thickness(){
		   return this->thickness;	
		}
		

		  virtual void display(){
		  cout<<thickness<<" px\n";
		  };
};

 
class Line: public Shape{
	public:
		int x,y;
			void setco_Ordinate(int a,int b){
			this->x=a;
			this->y=b;
		}
	
		Line(){
			x=0;
			y=0;
		}
	
		 void display(){
			  
			  cout<<"The line is from "<<this->x<<" "<<this->y<<endl;
			  
			  cout<<"The line thickness "<<this->thickness<<endl;

}
};



class Square: public Shape{
	public:
		
	
			void setco_Ordinate(int a){
			this->x=a;
			this->y=a;
			
		}
			  void display(){
			  
			cout<<"Start point of square  "<<"0,0"<<endl;
		    	cout<<"End point of square  "<<this->x<<" "<<this->y<<endl;
		       cout<<"The line thickness "<<this->thickness<<endl;
			};
};

class Rectangle : public Shape{
	public:
		
	    	void set_Len_Bre(int a,int b){
			this->x=a;
			this->y=b;
			
		}

		 void display(){
		   cout<<"Start point of rectangle  "<<"0,0"<<endl;
		    	cout<<"End point of rectangle  "<<this->x<<" "<<this->y<<endl;
		       cout<<"The rectangle thickness "<<this->thickness<<endl;
			};
};

int main(){
     
     int choice;
     cout<<"1 line \n2 rectangle \n3 square\n4 ellipse"<<endl;
     cin>>choice;
     
             if(choice==1){
              Line l;
             l.set_thickness(3);
           
             l.display();}
            
	      if(choice==2){
             Rectangle r;
             r.set_Len_Bre(4,6);
             r.set_thickness(6);
             
             r.display();
            
         }
       if(choice==3){
       	 Square s;
       	 s.setco_Ordinate(7);
             s.set_thickness(2);
            
             s.display();
       	
	   }
               
}
