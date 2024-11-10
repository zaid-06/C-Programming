#include <stdio.h>
main() 
{
    char c , a, A ,e ,E ,i ,I, u, U ,O,o;
    
    printf("Enter an alphabet: ");
    scanf("%c", &c);
	c = toupper(c);
    if (c == 'A' /*|| c == 'a'*/ || c == 'I' || c == 'O' || c == 'U'|| c == 'e' || c == 'i' || c == 'o' || c == 'u')
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);
    
}
