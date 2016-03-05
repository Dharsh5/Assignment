#include<stdio.h>
int main()
{
  char str[10];
	int n=0,c=0,x,i,count[10]={0};
	printf("ENTER THE EQUATION:");
	scanf("%s",str);
	while(str[n]!='\0') 
	{
	  n++;
	}
	for(i=0;i<n;i++)
	{
		if((str[i]>='A')&&(str[i]<='Z'))
		{
			  	x=str[i]-'A';
			    if(count[x]==0)
			    {
			        count[x]=1;
				      c++;
			    }
		}
	}
	printf("The number of variables  used are%d\n",c);
	return 0;
}
