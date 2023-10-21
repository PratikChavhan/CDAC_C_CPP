//integer array operation
#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int *b=a;
	
	printf("the address of 1st ele %d",(a+3));
	printf("the adress of the 1st element %d", *(a+3));
	b=b+3;
		printf("the address of 1st ele %d",(b));
	return 0;
}
