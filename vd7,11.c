/* interger constants as case labels */
#include <stdio.h>
int main()
{
	int basic;
	printf("\n please enter your basic:");
	scanf("%d", &basic);
	switch (basic)
	{
		case 200:
			printf("\n bonus is dollar %d\n", 50);
			   break;
		case 300:
			printf("\n bonus is dollar %\n", 125);
			   break;
		case 400:
			printf("\n bonus is dollar %d\n", 140);
			   break;
		case 500:
			printf("\n bonus is dollar %d\n", 175);
			   break;
		default:
			printf("\n invalid entry");
			break;
	}
	return 0;
}
