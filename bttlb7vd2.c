#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Nhap a:");
	scanf("%d",&a);
	printf("\n Nhap b: ");
	scanf("%d",&b);
	if(a*b==1000)
	printf("\n a*b=1000");
	else if(a*b>1000)
	printf("\n a*b>1000");
	else
	printf("\n a*b<1000");
	return 0;
}
