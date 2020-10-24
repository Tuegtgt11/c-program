#include<stdio.h>
#include<conio.h>
int main()
{
	float com=0, sales_amt;
	char grade;
	printf("\nenter the sales amount:");
	scanf("%f", &sales_amt);
	printf("\n enter the grade: ");
	scanf("%c", &grade);
	if (sales_amt> 10000)
	 if(grade=='A')
	 com=sales_amt*0.1;
	 else
	 com= sales_amt*0.08;
	else
	 com= sales_amt*0.05;
	printf("\n commission =%f", com);
	return 0;
}
