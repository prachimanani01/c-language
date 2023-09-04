#include<stdio.h>

void main()
{
     int p,r,t,interest;
     
     printf("enter the p:");
     scanf("%d",&p);
     printf("enter the r:");
     scanf("%d",&r);
     printf("enter the t:");
     scanf("%d",&t);
     interest=p*r*t/100;
     printf("interest = %d",interest);
}
     
