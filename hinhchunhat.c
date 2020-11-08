#include <stdio.h>

float dai,rong;
float chuvi(float dai, float rong){
	return (dai+rong)*2;
}

float dientich(float dai, float rong){
	return dai*rong;
}

int menu(){
	int ch;
	printf("\n1.Tinh chu vi. \n2.Tinh dien tich.");
	scanf("%d",&ch);
		switch(ch){
			case 1: {
				chuvi(dai,rong);
				printf("\nChu vi la %f",(dai+ rong)*2);
				break;
			}
			case 2: {
				dientich(dai,rong);
				printf("\nDien tich la %f",dai*rong);
				break;
			}
	}
}
main(){
	printf("\nNhap chieu dai: ");
	scanf("%f",&dai);
	printf("\nNhap chieu rong: ");
	scanf("%f",&rong);
	
	menu();
	return ;
}
