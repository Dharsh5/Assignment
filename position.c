#include<stdio.h>
void main()
{
	int a[20],n,i,x;
	printf("enter the array size:\n");
	scanf("%d",&n);
	printf("enter the elements in ascending order:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter x:\n");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if (a[i]>x)
		{
			break;
		}
	}
	if (i==n)
	{
		printf("\nindex is %d",-1);
	}
	else 
	{
		printf("index is %d",i);
	}
	
}
