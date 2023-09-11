#include<stdio.h>

main()
{
    int a;

    printf("enter anumber:- ");
    scanf("%d",&a);

    if(a<0)
    {
        printf("given number is negative");
    }
    else if(a=0)
    {
        printf("given number is neutral");
    }
    else
    {
       printf("given number is Positive"); 
    }
}