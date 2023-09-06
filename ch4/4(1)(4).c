#include<stdio.h>

main()
{
    int x,y,z;

    printf("enter x\n");
    scanf("%d",&x);
    printf("enter y\n");
    scanf("%d",&y);

    z = (x*x) + (2*x*y) + (y*y);

    printf("z = %d",z);
}