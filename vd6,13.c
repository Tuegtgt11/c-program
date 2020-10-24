/* chuong trinh trinh bay getchar() va putchar() */
#include<stdio.h>
int main()
{
	char letter;
	printf("you can enter a character now: ");
	letter = getchar();
	putchar(letter);
	return 0;
}
