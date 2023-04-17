#include<stdio.h>
struct employee
{
	char name[500];
	int empid;
	int age;
	float salary;
};
int main()
{
	struct employee emp;
	printf("enter employee details");
	printf("\nname");
	scanf("%d",emp.name);
	printf("\nemployee id");
	scanf("%d",emp.empid);
	printf("\nemploye age");
	scanf("%d",emp.age);
	printf("\nemployee salary");
	scanf("%d",emp.salary);
	printf("\n Entered employee detail are !") ;
    printf("\n Name: %s",emp.name);
    printf("\n Id: %d",emp.empid);
    printf("\n Id: %d",emp.age);
    printf("\n Salary: %f\n",emp.salary);
    return 0;
}
