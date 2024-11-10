#include <stdio.h>
#include<string.h>
main()
{
	int i, j,k ;
	char string[15] = "program";
	for (i=0; i<strlen(string) ; i++)
	{
		for(j=0 ; j<=i; j++)
		{
			
			printf("%c",string[j]);	
		}
		printf("\n");	
	}
}
