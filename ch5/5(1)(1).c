#include<stdio.h>

void main(){
int a,b;

printf("enter a value of the first number:\n");
scanf("%d",&a);
printf("enter a value of the second number:");
scanf("%d",&b);

if(a<b)
{
    printf("a is min");
}
else
{
    printf("b is min");
}

}