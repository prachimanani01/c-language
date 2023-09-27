#include<stdio.h>

main()
{
    int n,m;

    printf("enter first year :- ");
    scanf("%d",&n);
    printf("enter second year :- ");
    scanf("%d",&m);

    int size = ((m-n)/4) + 1;
    int array[size];
    int i,j=0;

    for(i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            array[j] = i;
            j++;
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }

}
