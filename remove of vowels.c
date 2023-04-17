#include<stdio.h>
#include<string.h>
int main()
{
	char n[100];
	int i,j;
	printf("enter the string");
    fgets(n, sizeof(n), stdin);
	for (i=0;i<strlen(n);i++)
	{
	for (j=0;j<i;j++)
	{
	if (n[i]!="a" && n[i]!="e" && n[i]!="i" && n[i]!="o" && n[i]!="u"&&
	    n[i]!="A" && n[i]!="E" && n[i]!="I" && n[i]!="O" && n[i]!="U")
    {
	    n[j++]=n[i];
    }
	}
}
	n[j]="\n";
printf("the remove of vowels %s",n[j]);
}
