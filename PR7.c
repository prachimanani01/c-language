#include<stdio.h>

int sum(int x,int y)
{
	return x+y;			
}

int minus(int c,int d)
{
	return c-d;			
}

int into(int i,int j)
{
	return i*j;			
}

int devide(int m,int n)
{
	return m/n;			
}

int modulo(int s,int t)
{
	return s%t;			
}

void main()
{
	int a,b;
	int choice;
	printf("enter value of A:-");
	scanf("%d",&a);
	
	printf("\nenter value of B:-");
	scanf("%d",&b);
	
	printf("\npress 1 for addition(+)....\n");
	printf("press 2 for substraction(-)....\n");
	printf("press 3 for multiplication(*)....\n");
	printf("press 4 for division(/)....\n");
	printf("press 5 for modulo(%%)....\n");
	printf("press 0 for EXIT....");
	do
	{
		printf("\nenter your choice:-");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("addtion of a and b is %d...\n",sum(a,b));
				break;
		    	
		    case 2:
				printf("substraction of a and b is %d...\n",minus(a,b));
				break;
				
			case 3:
				printf("multiplication of a and b is %d...\n",into(a,b));
				break;
				
			case 4:
				printf("division of a and b is %d...\n",devide(a,b));
				break;
					
			case 5:
				printf("modulo of a and b is %d...\n",modulo(a,b));
				break;
				
			case 0:
				printf("you are exited....\n");
				break;
				
			default:
		    	printf("your entered number is not valid...\n");
		    	break;
		}	
	}
	while(choice!=0);
	
}
