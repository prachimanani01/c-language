#include<stdio.h>

main()
{
    int no,first,last,sum;

    printf("enter the value of number:- ");
    scanf("%d",&no);
    last=no%10;

    while(no>=10)
    {
    no=no/10;
    }
    first=no;
    sum=first+last;
    printf("sum of first and last number %d ",sum);

}