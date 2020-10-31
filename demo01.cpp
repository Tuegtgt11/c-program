#include<stdio.h>
int main()
{
	int num1,num2,x;
	printf("\n nhap num1: ");
	scanf("%d",&num1);
	printf("\n nhap num2: ");
	scanf("%d",&num2);
	for(x=num1; x<=num2; x++)
	{
		if(x%50==0)
		printf("\t%d",x);
	}
}
