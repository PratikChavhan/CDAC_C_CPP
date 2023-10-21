// character array
#include<stdio.h>
int main(){
	char arr[12]="Hello World";
	char *b=&arr[3];
	printf("%s \n",&arr[2]);
	printf("%s \n",(arr+3));
	printf("%c \n",b[1]);
	printf("%s \n",(b+1));
	printf("%d \n",arr[0]);
	return 0;
	
}
