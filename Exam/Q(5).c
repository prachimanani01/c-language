#include <stdio.h>

void interest(float a,float r,float t);

int main() {
  float amount,rate,time;

  printf("Enter amount :- ");
  scanf("%f",&amount);

  printf("Enter rate :- ");
  scanf("%f", & rate);

  printf("Enter time :- ");
  scanf("%f", & time);

  interest(amount, rate, time);

  return 0;
}

void interest(float a,float r,float t) {
  float SI;

  SI=(a*r*t)/100;

  printf("simple interest = %d",SI);
}

