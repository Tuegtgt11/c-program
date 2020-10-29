#include<stdio.h>
int main()
{
	int i,j,k,l;
	i=0;
	printf("Nhap so cuoi:");
	scanf("%d",&i);

	for (j=i; j>0; j--)
	{
		printf("\n");
		for (k=1; k<=j; k++)
		{
			printf("%d",k);
		}
	}
}
