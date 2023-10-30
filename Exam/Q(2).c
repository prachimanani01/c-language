#include <stdio.h>

int main()
{
    int no1, no2;

    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &no1, &no2);

    
    switch(no1 > no2)
    {   
        
        case 1: 
            printf("%d is maximum", no2);
            break;

        
        case 2: 
            printf("%d is maximum", no1);
            break;
    }

    return 0;
}