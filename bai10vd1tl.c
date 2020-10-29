#include<stdio.h>
int main()
{
	int tuoi,a;
	char name[30];
	printf("\n Nhap ten: ",name);
	gets (name);
	printf("\n Nhap tuoi: ");
	scanf("%d",&tuoi);
	for(a=1; a<=tuoi; a++)
	{
		printf("\n %s",name);
	}
}
