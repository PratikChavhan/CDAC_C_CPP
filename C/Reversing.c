// reversing an array
#include<stdio.h>
int main(){
	int no[5];
	int i;

	for( i=0;i<=4;i++){
		scanf("%d \n",&no[i]);
		
	}
		for( i=0;i<5;i++){
		printf("%d  ",no[i]);
		
	}
		for( i=4;i>=0;i--){
		printf("%d ",no[i]);
	}
	
//		for( i=4;i<=0;i--){
//		printf("%d ",no[i]);
//	}
}
