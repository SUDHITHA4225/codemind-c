#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int profit=sp-cp;
    float per=(profit*100.0)/cp;
    printf("%.2f",per);
}