#include<stdio.h>


void main(){
float  unit,total_amount,sur_charge;

printf("enter electricity:");
scanf("%f",&unit);

if(unit<=50){
  total_amount = unit*0.50;
 }else if (unit<=150){
  total_amount = 25+((unit-50)*0.75);
 }else if (unit<=250){
  total_amount = 100 + ((unit-150)*1.20);
 }else if (unit>=250){
  total_amount = 220+((unit - 250)*1.50);
}

sur_charge = total_amount * 0.20;
total_amount =total_amount + sur_charge;
printf("total bill is %0.0f",total_amount);


}