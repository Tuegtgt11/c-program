#include<stdio.h>
int main()
{
	char ch;
	printf("\n Nhap so tu A-Z: ");
	scanf("%c",&ch);
	switch(ch)
	if(ch>='a' && ch<='z')
	{
		case 'B':
			printf("\n Hien thi B");
			break;
		case 'C':
			printf("\n Hien thi C");
			break;
		case 'D':
			printf("\n Hien thi D");
		default:
			printf("\n Khong co ki tu hop le.");	
	}
	return 0;
}
