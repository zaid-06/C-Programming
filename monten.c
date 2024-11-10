#include<stdio.h>

main()
{
	int i, j, x;
	int n = 5;
	for (i=1; i<=n; i++)
	{
		for(j=1 ; j<=n; j++)
		{	
			if (j<=i)
			{
				printf(". ");
			}
			else
			{
				printf("  ");
			}	
		
		}				
		for (x=n; x>=1; x--)
		{
			if(x > i)
			{
				printf("  ");
			}
			else 
			{
				printf(". ");
			}
			
		}
				
		printf("\n");
		
	}
	

}
