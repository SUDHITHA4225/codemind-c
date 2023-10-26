#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int cap=2*t*s*b*512;
    int ckb=cap/1024;
    printf("%d KB",ckb);
}