#include<stdio.h>

main(){
int i,j,s,k;

for(i=5;i>=1;i--){
	for(s=1;s<=i;s++){
		printf(" ");
	}
	for(j=i;j<=5;j++)
	{
		printf("*");
	}
	for(k=4;k>=i;k--){
		printf("*");
	}
printf("\n");	
}
	
}
