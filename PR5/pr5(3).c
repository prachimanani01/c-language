#include<stdio.h>

void main()
{
	int a[50],no,i,sum=0;
	
	printf("enter size od array:-");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("a[%d]:-",i);
		scanf("%d",&a[i]);
	}
	printf("array element\n");
	for(i=0;i<no;i++)
	{
		printf("a[%d]:-",i);
		printf("%d\n",a[i]);
		sum=sum+a[i];
	}
	printf("sum=%d",sum);

}

