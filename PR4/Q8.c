#include<stdio.h>

void main(){
	int i,j;
	for(i=81;i<=85;i++){
		for(j=81;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}