#include<stdio.h>
void main() 
{
  int x[10][10],n,i,j,t;
  printf("\nEnter the size of matrix :");
  scanf("%d",&n);
  printf("\nEnter the values:");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&x[i][j]);
    }
  }
  printf("\nGiven square matrix is");
  for(i=0;i<n;i++) 
  {
    printf("\n");
    for(j=0;j<n;j++) 
    {
      printf("%d\t",x[i][j]);
    }
  }
  /* Find transpose */
  for(i=1;i<n;i++) 
  {
    for(j=0;j<i;j++) 
    {
      t=x[i][j];
      x[i][j]=x[j][i];
      x[j][i]=t;
    }
  }
  printf("\nTranspose matrix is :");
  for(i=0;i<n;i++) 
  {
    printf("\n");
    for(j=0;j<n;j++) 
    {
      printf("%d\t",x[i][j]);
    }
  }
}
