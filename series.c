#include <stdio.h>
int main(void)
{
    int n,x,i,diff;
    printf("ENTER THE STARTING NUMBER");
    scanf("%d",&x);
    printf("ENTER THE  DIFFERENCE");
    scanf("%d",&diff);
    printf("ENTER THE RANGE OF NUMBERS");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d,\t",x);
        x=x+diff;
        
    }
	return 0;
}
