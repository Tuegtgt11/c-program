#include<stdio.h>
main()
{
	int i,j,k;
	i=0;
	printf("enter no. of row: ");
	scanf("%d",&i);
	printf("\n");
	for (j=0; j<i; j++)
	{
		printf("\n");
		for (k=0; k<=j; k++) /* vong lap ben trong */
		printf("*");
	}
	return 0;
}
