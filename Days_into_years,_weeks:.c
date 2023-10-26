#include<stdio.h>
int main()
{
    int d,y,w,rs;
    scanf("%d",&d);
    y=d/365;
    rs=d%365;
    w=rs/7;
    printf("%d
",y);
    printf("%d",w);
}