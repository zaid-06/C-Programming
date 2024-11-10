#include<stdio.h>
main()
{
	char s[20];
	int i, j, x;
	printf("enter name: ");
	gets(s);
	x=strlen(s);
	
	for(i=0 ; i<(x/2)+1; i++)
	{
		
		for(j=0 ; j<x-i; j++)
		{
			if(j>=i && j<x-i)
			{
				printf("%c",s[j]);
		
			}
			else
			printf(" ");
				
		}
		printf("\n");
	}
	
	
	
}
