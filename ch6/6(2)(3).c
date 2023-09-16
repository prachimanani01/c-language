#include<stdio.h>
 main()
 {
 	int n=2,i;
 	
 	printf("enter number:- ");
 	scanf("%d",&i);
 	
 	do
 	{
 		printf("%d ",n);
 		n=n+2;
	}while(n<=i);
 }