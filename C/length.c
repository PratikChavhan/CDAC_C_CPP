// concat
#include <stdio.h> 
int len(char*);
int main(){
	int l;
	char a[]="pune";
//	printf("%d",sizeof(a));
     l=len(a);
	printf("%d",l);
	return 0;
}

int len(char* p){
	int l;
	while(*p !='\0'){
		l++;
		p++;
	}
	return l;
}
