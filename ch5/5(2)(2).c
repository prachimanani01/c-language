#include<stdio.h>


void main()
{
int a,b,c,d;


printf("enter a value of first number: ");
scanf("%d",&a);
printf("enter b value of second number: ");
scanf("%d",&b);
printf("enter c value of third number: ");
scanf("%d",&c);
printf("enter d value of third number: ");
scanf("%d",&d);

if(a>b)
{
   if(a>c)
   {
      if(a>d)
      {
         printf("A is max");
      }
      else
      {
         printf("D is max");
      }
   }
   else
   {
      printf("C is max");
   }
}
else
{
   if(b>c)
   {
      if(b>d)
      {
         printf("B is max");
      }
      else
      {
         printf("D is max");
      }
   }
   else
   {
      printf("C is max");
   }
}

}
