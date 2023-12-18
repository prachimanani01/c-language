#include<stdio.h>

void main()
{
    char string[10000];
    int length=0,a=1,i;

    printf("Enter a string name:-");
    gets(string);

    for(i=0;string[i]!=0;i++)
    {
        length++;
    }

    for(i=0;i< length/2;i++)
    {
        if( string[i] != string[length-1-i] )
        {
            a=0;
            break;
        }
    }

    if(a==1) printf("This string is PALINDROME....!");
    
    else printf("This string is NOT PALINDROME....!");
  
}