#include<stdio.h>
main()
{
	int x;
	char i, ans;
	i = 'A';
	do{
		x=0;
		ans='Y';
		printf("\nEnter sequemce of character: ");
		do{
			i=getchar();
			x++;
		}while (i != '\n');
		i= 'A';
		printf("\nNumber of charactera entered is: %d", --x);
		printf("\nMore sequences (Y/N)?");
		ans = getch();
	}while (ans == 'Y' || ans == 'Y');
}
	
