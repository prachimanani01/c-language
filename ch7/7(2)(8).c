#include<stdio.h>


void main(){
int i,j,s,k,r;
for(i=5;i>=1;i--)
{

    for(j=1;j<=i;j++)
   {
   printf("%d",j);
   }
    for(s=4;s>=i;s--){
   printf("  ");
   }

   for(k=1;k<=i;k++){
   printf("%d",k);
   }

printf("\n");
}
for(i=1;i<=5;i++)
{

   for(j=1;j<=i;j++)
   {
   printf("%d",j);
   }
   for(s=4;s>=i;s--){
   printf("  ");
   }
   for(r=1;r<=i;r++)
   {
   printf("%d",r);
   }
printf("\n");
}


}
