#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf=(12*bs)/100.0;
    float gs=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}