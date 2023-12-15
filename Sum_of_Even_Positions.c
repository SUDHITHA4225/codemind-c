#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    int sp[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&sp[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+sp[i];
        }
    }
    printf("%d",s);
}