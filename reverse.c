#include <stdio.h>
void main()
{
   int x, rev=0, rem;
   printf("Enter an integer: ");
   scanf("%d", &x);
   while(x!=0)
   {
      rem=x%10;
      rev=rev*10+rem;
      x/=10;
   }
   printf("Reversed Number = %d",rev);
}
