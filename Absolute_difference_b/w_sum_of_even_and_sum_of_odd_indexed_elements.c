#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,t=0,diff;
    scanf("%d",&n);
    int as[n];
    
        for(i=0;i<n;i++)
        {
            scanf("%d",&as[i]);
        }
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                s=s+as[i];
            }
            else
            {
                t=t+as[i];
            }
        }
        diff=abs(s-t);
        printf("%d",diff);
}