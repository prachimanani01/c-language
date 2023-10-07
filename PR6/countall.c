#include<stdio.h>
#include<string.h>

int main()
{
    char ch[30];
    int splch,digit,alp,i;

    alp=digit=splch=i=0;

    printf("count total number of alphabet,digit and special characters :- ",\n);

    printf("enter the string :- ");

    fgets(ch,size_of,ch);

    while(ch[i]!='\0')
    {
        if((ch[i]>='0'&&ch[i]<='9') || (ch[i]>='A'&&ch[i]<='Z'))
        {
            alp++;
        }
        else if(ch[i]>='0'&&ch[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }
        i++;
    }

    printf("number of alphabets in the string is :- %d\n",alp);
    printf("number of digit in the string is :- %d\n",digit);
    printf("number of special characters in the string is :- %d\n\n",splch);
    
}
