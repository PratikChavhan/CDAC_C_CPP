#include<stdio.h>
void userstrcpy(char*,char*);
int main()
{
	char s[10];
	char p[10];
	printf("enter string\n");
	scanf("%s",s);
	userstrcpy(p,s);
	printf("old string is %s\n",p);
	strcpy(p,s);
	printf("new string is %s\n",p);
	return 0;
}
void userstrcpy(char*m,char*n)
{
 while(*n!='\0')
{
*m=*n;
 m++;
 n++;
}
*m='\0';
 
}
