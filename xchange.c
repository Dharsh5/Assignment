#include <stdio.h>
 
int main(void) {
    int x[10],i,n,temp,v;
    printf("enter the no.of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
     v=(n/2);
     if((n%2)!=0)
    {
        for(temp=0,i=1;i<=v;i++)
        {
            temp=x[i];
            x[i]=x[i+(v+1)];
            x[i+(v+1)]=temp;
        }
    }
    else
    {
        for(temp=0,i=1;i<=v;i++)
        {
            temp=x[i];
            x[i]=x[i+v];
            x[i+v]=temp;
        }
    }

 
    for(i=1;i<=n;i++)
    {
    printf("%d",x[i]);
    }
 
   
    return 0;
}
