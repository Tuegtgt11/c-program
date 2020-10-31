#include<stdio.h>
#include<conio.h>
int main()
{
	int the, pin, cn, balance, num, ans, stk, sotien; //cn la chuc nang
	int d,e,f;
	int count = 1, ok = 0;
	char key;
	balance = 20000000;
	
	printf("\nWelcome to VUDUCTUE Bank :D");
	printf("\nVui long nhap the: ");
	scanf("%d", &the);
	printf("\nNhap ma pin: ");
	scanf("%d", &pin);
	if (pin != 1)
	{
		do
		{
			printf("\nMa pin sai.");
			printf("\nNhap lai ma pin: ");
			scanf("%d", &pin);
			if (pin == 1)
			{
				ok == 0;
				printf("\nDang nhap thanh cong.");
				break;
			}
			else
				count ++;
		}
		while (count <= 2 || ok == 0);
		{
			if (pin !=1)
				printf("\nThe cua ban da bi khoa! Vui long lien he voi nhan vien ngan hang de duoc giup do.");
		}
	}
	else
		printf("\nDang nhap thanh cong.");
		
	while(key != 27)
	{
		printf("\nChon dich vu: \n\t1.Rut tien \n\t2.Chuyen tien \n\t3.Kiem tra so du \n\t4.Ket thuc");
		printf("\nBan chon: ");
		scanf("%d", &cn);
		if(cn ==1 || cn == 2 || cn == 3 || cn == 4)
		switch (cn)
		{
			case 1:
			{
				printf("\n So du trong tai khoan: %d vnd",balance);
				printf("\n Nhap so tien can rut: ");
				scanf("%d", &num);
				d=num%50000;
				if(d==0 && num<=balance-5000 && num<=5000000)
				{
					printf("\n Giao dich mat phi 5000 vnd ban co nuon tiep tuc?");
					printf("\n y or n:");
					fflush(stdin);
					scanf("%c", &ans);
					if(ans=='y')
					{
						e=balance-num-5000;
						printf("\n Giao dich thanh cong.");
						printf("\n So du con lai la: %d vnd",e);
						printf("\nBam phim bat ki de tiep tuc. Bam Esc de thoat.");
						key = getch();
					}
					else
					{
						printf("\n Quy khach da huy giao dich. Bam phim bat ki de tiep tuc giao dich khac. Bam Esc de thoat.");
						key = getch();
					}
				}
				else
				{
					printf("So tien khong hop le. Vui long thuc hien lai.");
				}
				break;	
			}
			case 2:
			{
				printf("\n So du trong tai khoan: %d",balance);
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
					e=balance-sotien-5000;
					printf("\nGiao dich thanh cong.");
					printf("\nSo du con lai la: %d vnd",e);
					printf("\nBam phim bat ki de tiep tuc giao dich. Bam Esc de thoat.");
					key = getch();
				}
				else
				{
					printf("\n Quy khach da huy giao dich.");
					printf("\nBam phim bat ki de tiep tuc giao dich. Bam Esc de thoat.");
					key = getch();
				}
				break;
			}
			case 3:
			{
				printf("\n\t So tai khoan:1\n\t So du %d",balance);
				printf("\nBam phim bat ki de tiep tuc giao dich. Bam Esc de thoat.");
				key = getch();
				break;
			}
			case 4:
			printf("\n Tam biet. Hen gap lai.");
			return 0;	
		}
		else
		printf("\nLua chon sai.Moi chon lai hoac an Esc de thoat.");
		key = getch();
	}
}
