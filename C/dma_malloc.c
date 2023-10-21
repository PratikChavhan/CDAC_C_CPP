#include<stdio.h>
#include<stdlib.h>
int main()
{
	// malloc(n * sizeof(int))
	int n,i,sum = 0;
	printf("Enter length of array ");
	scanf("%d",&n);
	int* ptr = (int*)malloc(n*sizeof(int));
	printf("accept array elements: ");
	for(i=0; i<n; i++)
	scanf("%d",(ptr+i));
	for(i=0; i<n; i++)
	sum = sum+ *(ptr + i);
	printf("summation = %d\n",sum);
	free(ptr);
}
