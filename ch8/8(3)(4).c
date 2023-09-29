#include <stdio.h>
 main() {
    int r=5;
    int c=5;
    int sum=0;
    int i,j;
    int a[r][c];

    
    printf("Enter array elements: ");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Even boundary elements in the array: \n");
    
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            
                if(i==0||i==4||j==0||j==4) {
                    printf("%d ",a[i][j]);
                    sum=sum+a[i][j];
                }
                else{
                	printf("  ");
				}
            }printf("\n");
        }
    
    
    printf("Sum of even boundary elements: %d \n", sum);

    
}