#include<stdio.h>
int main()
{
    int p,c,b,m,cs,per;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    int t=500;
    int obt=p+c+b+m+cs;
    per=(obt*100)/t;
    if(per>=90)
    printf("Grade A");
    else if(per>=80)
    printf("Grade B");
    else if(per>=70)
    printf("Grade C");
    else if(per>=60)
    printf("Grade D");
    else if(per>=40)
    printf("Grade E");
    else if(per<40)
    printf("Grade F");
}