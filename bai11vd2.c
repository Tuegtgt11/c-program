/* input avlues are accepted from the user into the array ary[10]*/
#include<stdio.h>
int main()
{
	int ary[10];
	int i,total,high;
	for (i=0; i<10; i++)
	{
		printf("|nEnter value: %d :",i+1);
		scanf("%d",&ary[i]);
	}
	/* Displays highest of the entered values */
	high = ary[0];
	for (i=1; i<10; i++)
	{
		if (ary[i] >high)
		high = ary[i];
	}
	printf("\n Highest value entered was %d", high);
	/* printfaverage of value entered for ary[10] */
	for (i=0, total=0; i<10;i++)
	total =total +ary[i];
	printf("\nthe average of the element of ary is %d", total/i);
}
