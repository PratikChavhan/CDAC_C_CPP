#include<stdio.h>
#include<string.h>
void strev(char *p, char *q);
int strcom(char *main,char *temp);
int main()
{
	char a[10];
	char b[10];
	printf("enter string");
	gets(a);
	strcpy(b,a);
	strev(a,b);
	
	if(strcom(a,b)){
	printf("not same");
}
	else{
		printf("same");
	}
	return 0;
}
void strev(char *p,char *q)
{
	while(*p!='\0')
	{
		p++;
	}
	p--;
	while(*q!='\0')
	{
		*q=*p;
		p--;
		q++;
	}
	*q='\0';
	
}
int strcom(char *main,char *temp)
{
	while(*main!='\0')
	{
		if(*main==*temp)
		{
			main++;
			temp++;
		}
		else if(*main<*temp){
			return -1;			
		}
		else{
			return 1; 
		}
		
	}
}
