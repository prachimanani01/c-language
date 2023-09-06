#include<stdio.h>

main()
{
    int a,b;

    printf("enter a ");
    scanf("%d",&a);
    printf("enter b ");
    scanf("%d",&b);

    a = a-b;
    b = a+b;
    a = b-a;

    printf("after swap a = %d\n",a);
    printf("after swap b = %d\n",b);
}