#include<stdio.h>

main()
{
	int n,m;
	
	printf("enter the size of array n :- ");
	scanf("%d",&n);
	printf("enter the size of array m :-");
	scanf("%d",&m);
	
	int a[n];
	int b[m];
	int c[n+m];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		c[i] = a[i];
	}
	
	for(i=0;i<m;i++)
	{
		printf("enter b[%d]",i);
		scanf("%d",b[i]);
		c[i+n] = b[i];
	}
	
	printf("sum of a and b are below :- \n");
	
	for(i=0;i<n+m;i++)
	{
		printf("%d",c[i]);
	}
	
return;
}
