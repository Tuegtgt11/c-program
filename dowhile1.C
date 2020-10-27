#include<stdio.h>
#include<conio.h>
int main()
{
	int cnt=0, num;
	do
	{
		printf("\n Enter a Number: ");
		scanf("%d", &num);
		printf("No. is %d", num);
		cnt++;
	}while (num != 0);
	printf("\n The total numbers entered were %d", --cnt);
	return 0;
}
