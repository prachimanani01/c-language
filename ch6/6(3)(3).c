#include<stdio.h>

main()
{
    int n,i,ans;

    printf("enter the number of multiplication :- ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        ans=n*i;
        printf("%d * %d = %d\n",n,i,ans);
    }
    
}