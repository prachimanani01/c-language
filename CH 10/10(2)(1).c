#include<stdio.h>
int arysum(){
	
	int n;
	int i,sum=0;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	int ary[n];
	for(i=0;i<n;i++){
		printf("Enter a[%d] : ",i);
		scanf("%d",&ary[i]);	
	}
	
	for(i=0;i<n;i++){
		sum+=ary[i];	
	}
	
	return sum;
}
void main(){

	int s;
	s=arysum();
	printf("Sum of an array: %d",s);

}