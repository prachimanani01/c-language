#include<stdio.h>
#include<conio.h>
void main(){
int a[20],no,i,j,temp;
clrscr();
printf("Enter the size of array:-\n");
scanf("%d",&no);

for(i=0;i<no;i++){
     printf("a[%d]",i);
     scanf("%d",&a[i]);
}
     printf("Ascending order\n");
      for(i=0;i<no;i++){
      for(j=i+1;j<no;j++){
       if(a[i] > a[j]){
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       }
      }
}
printf("%d ",a[no-2]);
getch();
}























