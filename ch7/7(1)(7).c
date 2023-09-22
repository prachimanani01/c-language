#include<stdio.h>

main()
{
    int i,j;
    char ch='A';

    for(i=1;i<=5;i++)
    {
        ch=ch+i;
        for(j=i;j>=1;j--)
        {
            ch--;
            printf("%c",ch);
        }
     ch='A';   
    printf("\n");    
    }
}