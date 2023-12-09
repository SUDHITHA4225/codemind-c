#include<stdio.h>
int main()
{
    int n,r,t,s=0;
    scanf("%d",&n);
    t=n*n;
     
    while(t!=0)
    {
        r=t%10;
        s=s+r;
        t=t/10;
    }
    if(n==s){
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}