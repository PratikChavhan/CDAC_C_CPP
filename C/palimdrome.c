//palimdrome
#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	char b[10];
	printf("Enter 1 strings");
	scanf("%s ",&a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(a,b)==0){
		printf("Strings are palimdrome ");
	}
	else{
		printf("Strings are not palimdrome");
	}
	return 0;
}
