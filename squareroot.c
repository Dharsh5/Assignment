#include<stdio.h>
int main()
{
  float x,y,p;
  printf("ENTER THE VALUE OF x :\n");
  scanf("%f",&x);
  y=x;
  do
    {
      p=y;
      y=((y+(x/y))/2);
    }
  while((p-y)>.00001);
  printf("the sq. root is %f \n",y);
  return 0;
} 
