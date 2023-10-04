#include<stdio.h>
#include<conio.h>
void main(){
int i,j,check=0,a[10][10],b[10][10]row,col;

clrscr();
printf("\n print A matrix:-");
printf("enter rows:-")
scanf("%d",&row);
printf("enter column:-");
scanf("%d",&col);
for(i=0;i<row;i++){
  for(j=0;j<col;j++){
     printf("a[%d][%d]",i,j);
     scanf("%d",&a[i][j]);

  }
}
printf("print B matrix:-")
printf("enter rows:-")
scanf("%d",&row);
printf("enter column:-");
scanf("%d",&col);
for(i=0;i<row;i++){
  for(j=0;j<col;j++){
     printf("b[%d][%d]",i,j);
     scanf("%d",&b[i][j]);

     }
     }
     for(i=0;i<row;i++){
  for(j=0;j<col;j++){
       if()a[i][j]!=b[i][j]{

       check=1;
       break;
	 }
	 }
       }
       if(check==1){
	printf("both matrix are not equal");
       }else{
	printf("both matrix are equal");
       }
getch();





}