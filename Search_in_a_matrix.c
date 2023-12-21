#include<stdio.h>
int main()
{
	int i,j,r,c,flag=0;
	scanf("%d%d",&r,&c);
	int a[r][c];
	//reading elements
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++) 
		{
		    scanf("%d",&a[i][j]);	
		}
	}
	int s;
	scanf("%d",&s);
	//printing elements
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++) 
		{
		    if(s==a[i][j])
		    {
		        flag= 1;
		    }
		}
	}
	if(flag==1)
	printf("1");
	else
	printf("0");
}