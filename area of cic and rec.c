#include <stdio.h>

union shape 
{
  float radius;
  struct {
    float length;
    float width;
  } 
  rectangle;
};

int main() 
{
  union shape s;
  char shape_type;

  printf("enter the type of shape you want to calculate (c for circle, r for rectangle): ");
  scanf("%c", &shape_type);
  if (shape_type=='c')
  {
  	printf("enter the radius of the circle:");
  	scanf("%f",&s.radius);
  	printf("area of the circle:%.2f\n",3.14*s.radius*s.radius);
  }
  else if (shape_type == 'r')
  {
  	printf("enter the length of the rectangle:");
  	scanf("%f",&s.rectangle.length);
  	printf("enter the width of the rectangle:");
  	scanf("%f",&s.rectangle.width);
  	
  	printf("area of the rectangle:%.2f\n",s.rectangle.length*s.rectangle.width);
  }
  else
  {
  	printf("invalid shape type enter.\n");
  }
  return 0;
}
  

