#include<stdio.h>

main()
{
    int a,b,addition,subtraction,multiplication,divison,modulo;
    a=12;
    b=6;
    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    divison = a / b;
    modulo = a % b;

    printf("addition %d + %d = %d\n",a,b,addition);
    printf("subtraction %d - %d = %d\n",a,b,subtraction);
    printf("multiplication %d * %d = %d\n",a,b,multiplication);
    printf("divison %d / %d = %d\n",a,b,divison);
    printf("modulo %d %% %d = %d\n",a,b,modulo);
    
    
    
    
}