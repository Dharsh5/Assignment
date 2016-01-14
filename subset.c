#include<stdio.h>
void main()
{
  int i,j,k,x,y,z;
  int a[3]={1,2,3};
  for(x=0;x<3;x++)
  {
    scanf("%d",&a[x]);
    printf("The subsets are :\n");
  } 
  for(i=1;i<=3;i++)
  {
    for(j=0;j<=3-i;j++)
    {
      if(i==1)
      {
        printf("%d\n",a[j]);
      }
      else
      {
        z=j+i-1;
        for(k=z;k<3;k++)
        {
          for(y=j;y<z;y++)
          {
            printf("%d",a[y]);
          }
          printf("%d\n",a[k]);
        }
      }
    }
  }
}

