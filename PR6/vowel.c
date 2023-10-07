#include<stdio.h>
#include<string.h>

main()
{
    int i,vcount=0,ccount=0;
    char str[30];

    printf("enter the string :- ");
    gets(str);

    for(i=0;i<strlen(str);i++)
    {
        str[i]=tolwer(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vcount++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            ccount++;
        }
    }

    printf("number of vowels :- %d\n",vcount);
    printf("number of consonant :- %d\n",ccount);
    

}

