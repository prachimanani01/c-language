#include<stdio.h>


void main(){
int first_angle;
int second_angle;
int third;

printf("enter value of first_angle :");
scanf("%d",&first_angle);
printf("enter value of second_angle :");
scanf("%d",&second_angle);

third = 180 - (first_angle+second_angle);
printf("ans is %d",third);

}