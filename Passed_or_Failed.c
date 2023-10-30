#include<stdio.h>
int main()
{
    int m,p,c,co,s;
    scanf("%d%d%d%d%d",&m,&p,&c,&co,&s);
    if(m<35 || p<35 || c<35 || co<35 || s<35)
    {
        printf("FAILED");
    }
    else
    {
        printf("PASSED");
    }
}