#include<stdio.h>
main(){
    int m[10][10] , t[10][10],m,n,i,j;

    printf("Enter the row and column of matrix:-");
    scanf("%d %d",&m,&n);
  
   printf("Enter the element of matrix :-");
   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d", &m[i][j]);
    }
   }
   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        t[j][i]=m[i][j];
    }
}
printf("The transpose of matrix:-\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d", t[i][j]);
    }
    printf("\n");
}
}
