#include <stdio.h>
#include <conio.h>
struct employee
{
	char name[500]="dia";
	int empid=45;
	float salary=123.67;
    }ab;
    
	int main() {
	    struct employee ab;
		printf("\nemployee details are");
		printf("\nname:%s",ab.name);
		printf("\nid:%d",ab.empid);
		printf("\nsalary:%f\n",ab.salary);
		return 0;
	
	}
