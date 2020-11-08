#include <stdio.h>

int Check();
int Say();
void Break();
void Love();
int tuoi;
float cc, cn;
int Check(){
	printf("\nNhap so tuoi hien tai: ");
	scanf("%d",&tuoi);
	printf("\nNhap chieu cao(cm): ");
	scanf("%f",&cc);
	printf("\nNhap can nang(kg): ");
	scanf("%f",&cn);
	if(tuoi>=17 && tuoi<=22 && cc>=155 && cc<=175 && cn>=45 && cn<=55){
		Say();	
	}
	else{
		printf("\nTieu chuan khong hop le dep deeee.");
	}	
}

int i;
char ans;
int Say(){
		for (i=0; i<=10; i++){
		printf("\nFall in love %d",i);
	}
	printf("\nDo you love me?");
	fflush(stdin);
	printf("\nANS: ");
	scanf("%c",&ans);
	fflush(stdin);
	
	if(ans == 'y'){
		Love();
	}
	else{
		Break();
	}
}

int i;
void Love(){
	int n,j;
	n=10;
	for(i=n/2; i<=n; i+=2)
	{
		for(j=1; j<n-i; j+=2)
		{
			printf(" ");
		}

		for(j=1; j<=i; j++)
		{
			printf("*");
		}

		for(j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	for(i=n; i>=1; i--)
	{
		for(j=i; j<n; j++)
		{
			printf(" ");
		}

		if(i==n)
		{
			for(j=1; j<=n; j++)
			{
				printf("*");
			}
			for(j=1; j<n; j++)
			{
				printf("*");
			}
		}

		else
		{
			for (j=1; j<=(i*2)-1; j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return ;
}

void Break(){
	printf("\nCMM CUTTTTT!");
}

main(){
	char name[150];
	printf("\nNhap ten cua ban: ");
	gets(name);
	
	Check();
}
