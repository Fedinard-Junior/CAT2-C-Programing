#include<stdio.h>
#include<string.h>
struct employee{
	char name[20];
	int Id;
	char department[20];
	float salary;
	char email[50];
}structureemployee;
 
 int main(){
 	//declare a variable of employee
 	strcpy(structureemployee.name,"John Doe");
 	structureemployee.Id=6234;
 	strcpy(structureemployee.department,"Human Resource");
 	structureemployee.salary=50000;
 	strcpy(structureemployee.email,"john.doe@company.com");
 	
//print the employee details
printf("name:%s\n",structureemployee.name);
printf("Id:%d\n",structureemployee.Id);
printf("department:%s\n",structureemployee.department);
printf("salary:%.2f\n",structureemployee.salary);
printf("email:%s",structureemployee.email);
return 0;
 }		