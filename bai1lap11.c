#include <stdio.h>
#include <math.h>

main() {
	int a,b,c,p,S;
	printf("\nNhap do dai canh a: ");
	scanf("%d",&a);
	printf("\nNhap do dai canh b: ");
	scanf("%d",&b);
	printf("\nNHap do dai canh c: ");
	scanf("%d",&c);
	p=(a + b + c)/2;
	S=(p*(p-a)*(p-b)*(p-c));
	
	int GetArea(int S) {
		return S;
	}
	
		if((a+b)>c && (b+c)>a && (a+c)>b)
		{
			printf("\nDien tich tam giac la %d",GetArea(S));
		}
		else
		{
			printf("\nDo dai cach canh da nhap khong tao thanh tam giac. ");
		}
	}

