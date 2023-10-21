// calloc
#include<stdio.h>
#include<stdlib.h>
int main(){
	char *ptr;
	int n,m;
	printf("enter size char");
	scanf("%d",&n);
   
	ptr=(char*) calloc(n,sizeof(char)+1);
	
	
		printf("Enter the name\n");
		scanf("%s",ptr);
	
		
		printf("%s\n",ptr);
		
	
}
