#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
  int count=0,i,n;
  char str[20];
  printf("enter string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    if(isalpha(str[i]))
    {
      count_let++;
    }
  }
  printf("no of letters are : %d",count);
  return 0;
}
