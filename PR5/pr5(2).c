#include<stdio.h>
main(){
    int i,a[5],no;
    printf("Enter the size of array :-");
    scanf("%d",&no);
    for(i=0;i<no;i++){
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\nReverse element :-");
    for(i=no;i>=0;i--){
        printf("%d\n",a[i]);
    }

}
