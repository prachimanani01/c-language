#include<stdio.h>

main()
{
    int i,j,count=0,sum=0;
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\n",array[i][j]);
            count++;
            sum += array[i][j];
        }
    }

    printf("length of array = %d\n ",count);
    printf("average of array = %d\n",sum/count);
}