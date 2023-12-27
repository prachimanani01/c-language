#include<stdio.h>

void main(){
	
	int i,j,k;
	for (i=5;i>=1;i--){
		for(k=i;k>=1;k--){
			printf(" ");
		}
		for(j=5;j>=i;j--){
			if(j==5){
				printf("*");
			}else{
				printf(" ");
			}
		}
		for(j=i+1;j<=5;j++){
			if(j==5){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
