#include<stdio.h>
void main()
{
	int a[10],n,i,x;
	printf("ENTER THE SIZE");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER x");
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
		printf("%d",-1);
	}
	else 
	{
		printf("\n %d",i);
	}
	
}
