#include<stdio.h>
int main()
{
	int x,y,z;
	printf("\n nhap x:");
	scanf("%d",&x);
	printf("\n nhap y:");
	scanf("%d",&y);
	printf("\n nhap z:");
	scanf("%d",&z);
	if (x>y&&x>z)
		printf("\n %d la gia tri lon nhat",x);
	else if(y>x&&y>z)
		printf("\n %d la gia tri lon nhat",y);
	else
		printf("\n %d la gia tri lon nhat",z);
	return 0;
}
