#include<iostream>
#include<stdlib.h>
int main()
{
	// malloc(n * sizeof(int))
	int n;
	printf("Enter length of array ");
	scanf("%d",&n);
	int* ptr = (int*)malloc(n*sizeof(int))
	printf("accept array elements: ");
	for(int i=0; i<5; i++)
	scanf("%d",(ptr+i));
	for(i=0; i<n; i++)
	int sum = sum+ *(ptr + i);
	printf("summation = %d\n",sum);
	free(ptr);
}
