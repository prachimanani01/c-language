#include<stdio.h>
#include<string.h>

main()
{
    char ch[30],n;
    int i,j=0;
    
    printf("enter the string :- ");
    gets(ch);

    printf("enter the character you want to count :- ");
    scanf("%d",&n);

    for(i=0;i<ch[i]!='\0';i++)
    {
        if(ch[i]==n)
        {
            j++;
        }
    printf("\n total = %d",j);
    }
}
