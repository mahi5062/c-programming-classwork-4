#include <stdio.h>

union data 
{
  int integer;
  float floatingpoint;
};
int main() 
{
  union data d;
  char input_type;

  printf("Enter the type of input you want (i for integer, f for floating point):");
  scanf("%c", &input_type);

  if (input_type == 'i') 
  {
    printf("Enter an integer value:");
    scanf("%d", &d.integer);
    printf("The value you entered is: %d\n", d.integer);
  }
  else if (input_type == 'f') 
  {
    printf("Enter a floating point value:");
    scanf("%f", &d.floatingpoint);
    printf("The value you entered is: %f\n", d.floatingpoint);
  }
  else 
  {
    printf("Invalid input type entered.\n");
  }

  return 0;
}
