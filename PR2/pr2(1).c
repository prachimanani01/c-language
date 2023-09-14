#include<stdio.h>


void main()
{
    int a;

    printf("enter the number: ");
    scanf("%d",&a);

    (a%2==0)?printf("num is even")
            :printf("num is odd");

}