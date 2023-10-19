#include<stdio.h>

struct Emp{
	int id ,age,exp;
	char name[40];
	char city[15];
	char cname[20];
	char role[16];
};
int main()
{
	int no,i;
	struct Emp e[50];
 	printf("How many record add:-");
 	scanf("%d",&no);
 	for(i=0;i<no;i++)
 	{
 		printf("Enter Emp id:-\n");
 		scanf("%d",&e[i].id);
		printf("Enter Emp name:-\n");
 		scanf("%s",&e[i].name);
 		printf("Enter Emp age:-");
 		scanf("%d",&e[i].age);
 		printf("Enter Emp experience:-");
 		scanf("%d",&e[i].exp);
 		printf("Enter Emp city:-");
 		scanf("%s",&e[i].city);
 		printf("Enter Emp company name:-");
 		scanf("%s",&e[i].cname);
 		printf("Enter Emp role:-");
 		scanf("%s",&e[i].role);
	
 }
}








