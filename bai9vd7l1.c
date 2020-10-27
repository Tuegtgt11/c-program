/*echo program*/
/* a program to accept data from the console and printf it on the screen */
/* end of input data is indicated by pressing '^Z'*/
#include<stdio.h>
main()
{
	char ch;
	while((ch=getchar()) !=EOF)
	{
		putchar(ch);
	}
	return 0;
}
