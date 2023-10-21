// concate 
#include<stdio.h>
void conc(char*,char*);
int main(){
	char a[15];
	char b[10];
	printf("Enter 2 strings");
	scanf(" %s %s",&a,&b);
	conc(&a,&b);
	printf("%s",a);
	return 0;
}
void conc(char* p,char* q){
	while(*p !='\0'){
		p++;
	}
		while(*q !='\0'){
			*p=*q;
		p++;
		q++;
	}
	*p='\0';
}
