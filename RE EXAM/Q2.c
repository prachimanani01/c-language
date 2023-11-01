#include<stdio.h>

main()
{
    int marks,maths,sci,guj,eng,hin,sum,percentage,total;

    printf("enter the marks of maths :- ");
    scanf("%d",&maths);
    printf("enter the marks of sci :- ");
    scanf("%d",&sci);
    printf("enter the marks of guj :- ");
    scanf("%d",&guj);
    printf("enter the marks of eng :- ");
    scanf("%d",&eng);
    printf("enter the marks of hin :- ");
    scanf("%d",&hin);

    sum=maths+sci+guj+eng+hin;
    percentage = (sum*100)/500;
    printf("percentage = %d\n",percentage);

    if(percentage>=91 && percentage<=100)
    {
        printf("A1 grade..");
    }
    else if(percentage>=81 && percentage<=90)
    {
        printf("A2 grade..");
    }
    else if(percentage>=71 && percentage<=80)
    {
        printf("B1 grade..");
    }
    else if(percentage>=61 && percentage<=70)
    {
        printf("B2 grade..");
    }
    else if(percentage>=51 && percentage<=60)
    {
        printf("C1 grade..");
    }
    else if(percentage>=41 && percentage<=50)
    {
        printf("C2 grade..");
    }
    else if(percentage>=33 && percentage<=40)
    {
        printf("D grade..");
    }
    else if(percentage>=21 && percentage<=32)
    {
        printf("E1 grade..");
    }
    else
    {
        printf("E2 grade..");
    }
}