#include<stdio.h>
int main()
{
    int a,b,i,r,t,flag=1;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
         t=i;
        flag=1;
        while(t!=0)
        {
            r=t%10;
            if(r==0 || i%r!=0)
            {
                flag=0;
            }
            t=t/10;
        }
        if(flag==1)
    printf("%d ",i);
    }
    
}