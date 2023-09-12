#include<stdio.h>


void main(){
int a;
int b;
int c;

printf("enter a value of first number: ");
scanf("%d",&a);
printf("enter b value of second number: ");
scanf("%d",&b);
printf("enter c value of third number: ");
scanf("%d",&c);

if(a>b)
{
   if(a>c)
   {
      printf("A is min...");
   }
   else
   {
      printf("C is min...");
   }
}
else
{
   if(b>c)
   {
      printf("B is min...");
   }
   else
   {
      printf("C is min...");
   }
}

}
