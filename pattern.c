#include <stdio.h>
main()
{
	int i, j;
	
	for (i=1; i<=5; i++)
	{
		for(j=1 ; j<=i; j++)
		{
			printf("*");	
		}
		printf("\n");	
	}
	
	secondmethod(i , j);
}


void secondmethod(int i ,int j)
{
	
	for (i=1; i<=5; i++)
	{
		for(j=1 ; j<=5; j++)
		{	
			if (j<=i)
			{
				printf("#");
			}
			else
			{
				printf(" ");
			}	
		}
		printf("\n");
		
	}	
}
