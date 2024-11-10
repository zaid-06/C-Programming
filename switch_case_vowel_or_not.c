// WAC program using switch case statement to check character is vowel or consonent 


#include <stdio.h>
main()
{
	char ch;
	printf("enter a character: ");
	scanf ("%c", &ch);
	
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
		case 'i':
		case 'I':
		case 'u':
		case 'U':	
			printf ("vowel");
			break;
				
		default :
			printf("consonent" );		
	}
}
