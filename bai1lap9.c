#include<stdio.h>
int main()
{
	int arr[10];
	int i;
	for(i=0; i<=9; i++)
	{
	printf("\nNhap so: ");
	scanf("%d",&arr[i]);
	}
	for(i=0; i<=9; i+=2)
	printf(" arr[%d] = %d\t",i,arr[i]);
}
