//area 
#include<stdio.h>
//void t_area(int,int,int*);
//int main()
//{
//	int len,bre,area;
//	printf("Enter the length and breath ");
//	scanf("%d  %d",&len,&bre);
//	t_area(len,bre,&area);
//	printf("The area is %d ",area);
//	return 0;
//}
//void t_area (int p,int q,int* a){
//	*a=p*q;
//	
//}







#include<stdio.h>
void v_area(int,int,int*);
int main() 
{
	int a=20;
	int area;
	int b=30;
	v_area(a,b,&area);
	printf("the area is %d",area);
}
void v_area(int p,int q,int*a)
{
	*a=p*q;
}
