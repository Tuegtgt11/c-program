#include<stdio.h>
int main()
{
	int i,j,k,l;
	i=0;
	printf("Nhap so cuoi:");
	scanf("%d",&i);

	for (j=0; j<i; j++)
	{
		printf("\n");
		for (k=0; k<=j; k++)
		{
			printf("%d",k+1);
		}
	}
}
