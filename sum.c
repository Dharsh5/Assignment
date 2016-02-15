#include <stdio.h>
int add(int,int,int);

int main(void)
{
    int a,b,c,sum,arr[3];
    printf("\nTHREE VARIABLES\n");
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    printf("\n%d",sum);
    printf("\nARRAY\n");
    printf("enter array val");
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    sum=arr[0]+arr[1]+arr[2];
    printf("\n%d",sum);
    printf("\nUSING FUNCTION CALL\n");
    sum=add(a,b,c);
    printf("\n%d",sum);
    return 0;
}
int add(int x,int y,int z)
{
    int f;
    f=x+y+z;
    return f;
}
