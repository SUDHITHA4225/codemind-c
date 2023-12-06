#include<stdio.h>
int main()
{
    int k=0,n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%3==0){k++;}
    }
    printf("%d",k);
}