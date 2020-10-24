#include <stdio.h>
main()
{
	char ch;
	
	printf("\nenter  lower cased alphabet (a-z):");
	scanf("%c", &ch);
	if(ch<'a' || ch>'z')
	 printf("\ncharacter not a lower cased alphabet");
	else
	 switch (ch)
	 {
	 	case 'a':
	 	case 'e':
	 	case 'i':
	 	case 'o':
	 	case 'u':
	 		printf("\ncharacter is a vowel");
	 		break;
	 	case 'z':
	 		printf("\nlast alphabet (z) was etered");
	 		break;
	 	default:
	 		printf("\ncharacter is a consonant");
	 		break;
	 }
	 return 0;
}
