#include <stdio.h>
int check(int num);
main()
{
	int num,num1,num2;
	
	printf("\nNhap so bat ki:");
	scanf("%d",&num);
	check(num);
	printf("\n");
	printf("\nNhap so thu nhat:\n");
	scanf("%d",&num1);
	printf("\nNhap so thu hai:\n");
	scanf("%d",&num2);
	for(num=num1;num<=num2;num++)
	{
		if(num%50==0)
		{
			printf("%d\t",num);
		}
	}
}
int check(int num)
{
		if(num%50==0)
	{
		printf("\nSo nguyen chia het cho 50 ");
		return(0);
	}
	else
	printf("So nguyen ko chia het cho 50 ");
	return(1);
}
