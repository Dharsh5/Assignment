#include<stdio.h>
#include<unistd.h>
int main()
{
  int i;
  char x[]="HAPPY PONGAL";
  for(i=0;i<12;i++)
  {
  	printf("%c",x[i]);
  	sleep(1);
  }
  return 0;
}  
