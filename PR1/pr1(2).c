#include<stdio.h>
						
void main ()
{
int base_salary,HRA,DA,TA;

printf("enter value of basic salary:");
scanf("%d",& base_salary);
printf("enter value of HRA:");
scanf("%d",& HRA);
printf("enter value of DA:");
scanf("%d",& DA);
printf("enter value of TA:");
scanf("%d",& TA);

base_salary=base_salary+(base_salary*HRA/100)+(base_salary*DA/100)+(base_salary*TA/100);
printf("ans is %d",base_salary);

}

