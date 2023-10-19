#include<stdio.h>
#include<string.h>
struct stud {
	int id,age,std,no;
	char name[50];
	char course[10];
	char school[50];
	char city[15];
};
int main(){
	int i,no;
	printf("How many record add:-");
    scanf("%d",&no);
 	for(i=0;i<no;i++)
	{
		struct stud s[40];

		printf("\n------------Print student-------------");
		printf("\n ID:-%d\n",s[i].id);
		printf("\n NAME:-%s\n",s[i].name);
		printf("\nAGE:-%d\n",s[i].age);
		printf("\nStandard:-%d\n",s[i].std);
		printf("\nCity:-%s\n",s[i].city);
	}
}
