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

(a<b)
    ?(a<c)
       ?printf("a is min")
       :printf("c is min")
    : (b<c)
       ?printf("b is min")
       :printf("c is min");      
}