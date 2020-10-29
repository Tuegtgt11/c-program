#include<stdio.h>
int main()
{
	int x;
	for (x=100;x>=5; x-- )
	{
		if (x%5==0)
		printf("\t %d",x);
	}
	return 0;
}
