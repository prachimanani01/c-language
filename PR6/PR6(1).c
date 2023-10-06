#include<stdio.h>
#include<string.h>

main()
{
	char ch[20];
	
	printf("enter the string :-\n");
	gets(ch);
	printf("lower to upper %s",strupr(ch));
}
