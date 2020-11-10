#include <stdio.h>

int cn,ans,balance,stk,sotien,num;
int d,f;
balance=20000000;
int pass,ok,count;
char name;

int longin() /* Dang nhap */
{
	printf("\nVui Long Dang Nhap.");
	
	printf("\nTen Dang Nhap: ");
	scanf("%c",&name);
	fflush(stdin);
	printf("\nMat Khau: ");
	scanf("%d",&pass);
	
	if(pass != 1)
	{
		do
		{
			printf("\nMat Khau Sai.");
			printf("\nNhap Lai Mat Khau: ");
			scanf("%d",&pass);
			if(pass ==1)
			{
				ok == 0;
				printf("\nDang Nhap Thanh Cong.");
				menu();
				break;
			}
			else 
				count++;
		}
		while(count<=2 || ok == 0);
		{
			if(pass !=1 )
				printf("\nBan Da Nhap Qua So Lan Cho Phep.Tai Khoan Da Bi Khoa!");
		}
	}
	else
	menu();	
 }
 
 withdraw()
 {
 	printf("\n So du trong tai khoan: %d vnd",balance);
	printf("\n Nhap so tien can rut: ");
	scanf("%d", &num);
	d=num%50000;
	if(d==0 && num<=balance&& num<=3000000)
	{
		printf("\n Giao dich mat phi 5000 vnd ban co nuon tiep tuc?");
		printf("\n y or n:");
		fflush(stdin);
		scanf("%c", &ans);
		if(ans=='y')
		{
			balance=balance-num-5000;
			printf("\n Giao dich thanh cong.");
			printf("\n So du con lai la: %d vnd",balance);
		}
		else
		{
			printf("\n Quy khach da huy giao dich.");
		}
	}
	else
	{
		printf("So tien khong hop le. Vui long thuc hien lai.");
	}
 }
 
 transfer()
 {
 	printf("\n So du trong tai khoan: %d vnd",balance);
	printf("\n Nhap so tai khoan: ");
	scanf("%d",&stk);
	printf("\n Nhap so tien can chuyen: ");
	scanf("%d",&sotien);
	f=sotien%50000;
	printf("\n Giao dich mat phi 5000 vnd ban co nuon tiep tuc?");
	printf("\n y or n:");
	fflush(stdin);
	scanf("%c", &ans);
	if(ans=='y')
	{
		balance=balance-sotien-5000;
		printf("\nGiao dich thanh cong.");
		printf("\nSo du con lai la: %d vnd",balance);
	}
	else
	{
		printf("\n Quy khach da huy giao dich.");
	}
 }
 
 check()
 {
 	printf("\n So du trong tai khoan: %d vnd",name,balance);
 }
 
int menu()
{
	char key;
	while(key != 27)
	{
		printf("\nChon Chuc nang: \n\t1.Rut Tien. \n\t2.Chuyen Tien. \n\t3.Kiem Tra So Du. \n\t4.Thoat.");
		printf("\nNhap: ");
		scanf("%d",&cn);
		fflush(stdin);
		if(cn == 1 || cn == 2 || cn == 3 || cn == 4)
		{
			switch(cn)
			{
					case 1:
					{
						withdraw();
							printf("\nBam phim bat ki de tiep tuc. Bam Esc de thoat.");
							key = getch();
					}
						break;	
					case 2:
					{
						transfer();
						printf("\nBam phim bat ki de tiep tuc giao dich. Bam Esc de thoat.");
						key = getch();
						break;
					}
					case 3:
					{
						check();
						printf("\nBam phim bat ki de tiep tuc giao dich. Bam Esc de thoat.");
						key = getch();
						break;
					}
					case 4:
					printf("\n Tam biet. Hen gap lai.");
					return 0;
					}
		}
		else
		{
			printf("\nLua Chon Sai.Vui Long Chon Lai Hoac An ESC de thoat.");
			key = getch();
		}
	}
}
 
main()
{
	printf("\nWelcome to the VN BANK.");
	longin();
}
