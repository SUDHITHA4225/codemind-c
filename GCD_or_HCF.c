#include<stdio.h>
int main()
{
    int i,a,b,m,gcd;
    scanf("%d%d",&a,&b);
    for(i=1;i;i++){
    m=a*i;
    if(m%b==0)
    break;
    }
    gcd=(a*b)/m;
    printf("%d",gcd);
}