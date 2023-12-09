#include<stdio.h>
int main()
{
    int i,a,b,s=0,t=0,r;
    scanf("%d%d",&a,&b);
    s=0;
    for(i=1;i<a;i++)
    {
      if(a%i==0)
      {
          s=s+i;
      }
    }
    for(i=1;i<b;i++)
    {
     if(b%i==0){
         t=t+i;
     }   
}
    if(a==t && b==s)
    printf("Amicable");
    else
    printf("Not Amicable");
}