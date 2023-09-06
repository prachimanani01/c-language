#include<stdio.h>

main()
{
    int a=5;
    int b=6;
    int c;

    c=a;
    a=b;
    b=c;

    printf("value of c=%d\n",c);
    printf("value of a=%d\n",a);
    printf("value of b=%d\n",b);

}