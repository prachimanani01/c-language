#include<stdio.h>


void main(){
int i,j,s,p,k;

for(i=5;i>=1;i--)
{
  for(j=1;j<=i;j++)
  {
  printf("%d",j);
  }
  for(s=4;s>=i;s--)
  {
  printf(" ");
  }
  for(p=i;p<=4;p++)
  {
  printf(" ");
  }
  for(k=i;k>=1;k--)
  {
  printf("%d",k);
  }

printf("\n");
}

}
