#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Nhap a: ");
	scanf("%d",&a);
	printf("\n Nhap b: ");
	scanf("%d",&b);
	if(a-b==a)
	printf("\n a-b=a");
	else if(a-b==b)
	printf("\n a-b=b");
	else
	printf("\n Hieu khong bang bat ki gia tri nao.");
	return 0;
}
