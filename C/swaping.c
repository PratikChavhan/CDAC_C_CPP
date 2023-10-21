// swaping using pointer
//#include <stdio.h>
//void swap(int*,int*);
//int main()
//{
//int a=10;
//int b=20;
//swap(&a,&b);
//	printf(" the value of a and b are %d  %d",a,b);	
//return 0;
//}
//void swap(int* p,int*q){
//	int temp;
//	temp=*p;
//	*p=*q;
//	*q=temp;
//	printf(" the value of p and q are %d  %d",*p,*q);
//}








#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=30;
    int b=45;
    swap(&a,&b);
    printf("the swapping no's are %d,%d",a,b);
    
}
void swap(int*p,int*q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
