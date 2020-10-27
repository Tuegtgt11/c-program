#include<stdio.h>
int main()
{
	int x,y;
	printf("\n Nhap x:");
	scanf("%d",&x);
	printf("\n Nhap y:");
	scanf("%d",&y);
	if(x<2000 || x>3000)
	printf("\n x=%d",x);
	if(y>=100&&y<500)
	printf("\n y=%d",y);
	return 0;
}
