#include<stdio.h>
int main()
{
	int productcode;
	float orderamount, rate = 0.0;
	printf("\nplease enter the product code: ");
	scanf("%d", &productcode);
	printf("pealse enter the order amount:");
	scanf("%f", &orderamount);
	
	if (productcode==1)
	{
		if(orderamount >= 500)
		 rate =0.12;
		else if (orderamount >= 300)
		 rate= 0.08;
		else
		 rate= 0.02;
	}
	else if (productcode==2)
	{
		if(orderamount >=2000)
		 rate = 0.10;
		else if (orderamount >=1500)
		 rate= 0.05;
	}
	else if (orderamount==3)
	{
		if(orderamount >=5000)
		 rate=0.10;
		else if (orderamount>=2500)
		 rate=0.05;
	}
	orderamount-= orderamount*rate;
	printf(" the net order amount is %.2f \n", orderamount);
	return 0;
}