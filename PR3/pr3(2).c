#include<stdio.h>

main()
{
    int n,i=1;

    printf("enter your number:- ");
    scanf("%d",&n);

    if(n<10)
    {
        printf("total number of digit %d",i);
    }else if(n<100)
    {
        i+=1;
        printf("total number of digit %d",i);
    }else if(n<1000)
    {
        i+=2;
        printf("total number of digit %d",i);
    }else if(n<10000)
    {
        i+=3;
        printf("total number of digit %d",i);
    }
}