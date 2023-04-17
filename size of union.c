#include<stdio.h>
#include<conio.h>
struct myunion
{
	int num1;
	float num2;
};
int main()
{
	union myunion un;
	printf("\n size of union:%d",sizeof(un));
	un.num1=10;
	printf("\nnum1:%d,num2:%f",un.num1,un.num2);
	un.num2=10.34f;
	printf("\n num1:%d,num2:%f,un.num1,un.num2");
	return 0;
}
