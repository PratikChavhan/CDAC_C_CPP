// Square using pointer
#include <stdio.h>
void square(int*);
int main()
{
	int a;
	printf("Enter the number that u want to square");
	scanf("%d",&a);
	square(&a);
	printf("The square of the number is %d",a);
	return 0;
	
}
void square(int* p){
	*p=*p * *p;
	printf("The square of the number %d",*p);
}
