#include<stdio.h>
int main()
{
    int r,s,n;
    scanf("%d",&n);
    r=n%10;
    while(n!=0)
    {
        s=n%10;
        n=n/10;
        if(n==0)
        break;
    }
    printf("%d",r+s);
}