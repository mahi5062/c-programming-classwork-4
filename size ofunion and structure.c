#include <stdio.h>
union unionJob
{
   char name[60];
   float salary;
   int workerid;
} 
uJob;
struct structJob
{
   char name[60];
   float salary;
   int workerid;
} 
sJob;
int main()
{
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\n size of structure = %d bytes", sizeof(sJob));
   return 0;
}

