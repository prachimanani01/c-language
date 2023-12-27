#include<stdio.h>

void main(){
	int i,j,k=1;
	char c='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{	
			if(j%2==0)
			{
			 printf("%d",k++);
			 }
			  else{
			    	printf("%c",c++);
				}    
			}
			printf("\n");
		}
	}
			