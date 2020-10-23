#include <stdio.h>
#define PI 3.14159
int main()
{
	float h, r , thetichV;
	printf("nhap chieu cao h:");
	scanf("%f", &h);
	printf("nhap ban kinh r:");
	scanf("%f", &r);
	thetichV= h*r*r*PI;
	printf("the tich hinh tru la: %f\n", thetichV);
	return 0;
}

