#include<stdio.h>
#include<string.h>

main()
{
    char s[200];
    int count=0,i;

    printf("enter the string :- ");
    gets(s);

    for(i=0;s[i]!='0';i++)
    {
        if(s[i]==' '&&s[i+1]!='')
        count++;
    }

    printf("number of words in given string are :- %d",count+1);

}