#include<stdio.h>
int main()
{
  int n,count=0;
  printf("Enter the number \n");
  scanf("%d",&n);
  if(n==0)
  {
    count=1;
  }
  else
  {
   while(n>0)
   {
     n=n/2;
	    count++;
   }
  }
 printf("%d",count);
 return 0;
}
