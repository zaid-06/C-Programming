#include<stdio.h>
main()
{
	int i, j, n;
	printf("enter s number: ");
	scanf ("%d",&n);
	for(i=1 ; i<=n; i++)	
	{
		
		for(j=1 ; j<=n; j++)
		{
			if(j<=i)
			printf(" ");
			
		}
			for(j=1 ; j<=n; j++)
		{
			
			if(i==1 || i==n || j==1 || j==n)
			{
				printf(" *");
			}
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
		
	}
} 
    
