#include<stdio.h>
int main()
{
    char t; 
    scanf("%c",&t);
    if(t=='V')
    printf("Violet");
    else if(t=='I')
    printf("Indigo");
    else if(t=='B')
    printf("Blue");
    else if(t=='G')
    printf("Green");
    else if(t=='Y')
    printf("Yellow");
    else if(t=='O')
    printf("Orange");
    else if(t=='R')
    printf("Red");
    else
    printf("-1");
}