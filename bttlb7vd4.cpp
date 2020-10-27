#include<stdio.h>
int main()
{
	char a;
	printf("\n nhap loai nhan vien:");
	scanf("%c",&a);
	if(a=='A')
	printf("\n luong 300");
	else if(a=='B')
	printf("\n luong 250");
	else
	printf("\n luong 100");
	return 0;
}
