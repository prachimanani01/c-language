#include<stdio.h>
main(){
    int i,n,a[4];
    printf("Enter the size of array:-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);

    }
    printf("all negative element :-");
     for(i=0;i<n;i++){
        if(a[i]<0){
            printf("%d",a[i]);
        }
}
}
