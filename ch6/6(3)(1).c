#include<stdio.h>

main()
{
    int n,i,b=0;

    printf("enter any number:- ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        b=b+i;
        printf("%d ",i);
    }
    printf("ans is %d",b);
}