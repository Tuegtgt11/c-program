/* chuong trinh trinh bay cach dung getchar() */

#include<stdio.h>
int main()
{
	char letter;
	printf("\n please enter any character:");
	letter = getchar();
	printf("\n the character entered by you is %c.", letter);
	return 0;
}
