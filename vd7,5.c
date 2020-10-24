/* doi mot ky tu hoa thanh mot ki tu thuong */
#include<stdio.h>
int main()
{
	char c;
	printf("please enter a character : ");
	scanf ("%c", &c);
	
	if (c>= 'A' && c<= 'Z')
	 printf("lowercase character + %c", c='a'- 'A');
	else
	 printf("character entered is = %c", c);
	return 0;
}
