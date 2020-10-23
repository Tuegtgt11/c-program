
#include <stdio.h>
#define PI 3.14159
float main()
{
	float r,chuvi,dientich;
	printf("nhap ban kinh r:");
	scanf("%f",&r);
	chuvi= 2*PI*r;
	dientich= PI*r*r;
	printf("chu vi hinh tron la: %f\n", chuvi);
	printf("dien tich hinh tron la: %f",dientich);
	return 0;
}
