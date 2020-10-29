#include<stdio.h>
int main()
{
	int n1,n2,n3,i,gioihan;
	n1=1;
	n1=1;
	printf("\n nhap gioi han:");
	scanf("%d",&gioihan);
	printf("\n %d %d",n1,n2);
	for (i=2; i<=gioihan;i++)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
}
