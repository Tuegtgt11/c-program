#include <stdio.h>

void main()
{
	char name[20];
	/* name is declared as a single dimensional charracter array */
	
	printf("Enter your name: "); /* Displays a message */
	scanf("%s", name); /* Accepts the input */
	
	printf("\nHi there: %s",name); /* Displays the input */
	
	getch();
}
