#include<stdio.h>
int main()
{
    int cp,sp,loss;
    scanf("%d%d",&cp,&sp);
    loss=cp-sp;
    float res=(loss*100.0)/cp;
    printf("%.2f",res);
}