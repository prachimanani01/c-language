#include<stdio.h>

main()
{
	
	int n;
	printf("enter size of array:- ");
	scanf("%d",&n);
	int a[n];
	int i;
	int sum=0;
	
	for(i=0;i<n;i++){
		printf("enter value of a[%d]:- ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		sum = a[i] * a[i];
		printf("square is %d\n",sum);
	}
	
}