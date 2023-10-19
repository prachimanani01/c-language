#include<stdio.h>
#include<string.h>
struct emp {
	int id,salary;
	
};
int main(){
	char name;
	struct emp e1;
	e1.id=111;
	strcpy(name,"aagna");
	e1.salary=5000;
	
	printf("\n------------Print Employee-------------");
	printf("\n ID:-%d\n",e1.id);
	printf("\n NAME:-%s\n",e1.name);
	printf("\n SALARY:-%d\n",e1.salary);
	
}
