// calculate length of string w/o using string handling function.
#include<stdio.h>
void ustrlen(char* p);
int main()
{
	char a[100];
	printf("Enter string: ");
//	scanf("%s",a);
	gets(a);
	
	//	char a[] = "hello world";
	char *b = a;
	ustrlen(a);
}
void ustrlen(char* p)
{
	int len=0;
	while(*p != '\0')
	{
		p++;
		len++;
	}
	printf("%d", len);
}
