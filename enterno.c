#include <stdio.h>
int main()
{
   int a[6]={1,10,20,35,19}, pos,i,value;
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);
   printf("Enter the value to insert\n");
   scanf("%d", &value);
   for (i=5;i>=pos-1;i--)
   {
      a[i+1] = a[i];
      a[pos-1] = value;
    }
   printf("Resultant array is\n");
   for (i=0;i<=6;i++)
   {
      printf("%d\n", a[i]);
    }
   return 0;
}
