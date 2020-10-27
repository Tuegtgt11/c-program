#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Nhap a: ");
	scanf("%d",&a);
	printf("\n Nhap b: ");
	scanf("%d", &b);
	c=a%b;
	if (c==0)
	printf("\n a chia het cho b.");
	else
	printf("\n a khong chia het cho b.");
	return 0;
}
