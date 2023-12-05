#include<stdio.h>
int main()
{
    float p;
    scanf("%f",&p);
    if(p<150){
    printf("The person is Dwarf.");}
    else if(p>150 && p<=165){
    printf("The person is average heighted.");}
    else if(p>165 && p<=195){
    printf("The person is taller.");}
    else{
    printf("Abnormal height.");}
}