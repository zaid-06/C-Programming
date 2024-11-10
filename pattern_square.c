#include <stdio.h>
main()
{
	int i, j ;
	for (i=1 ; i<=5; i++)
		{
			for (j=1; j<=9; j++)
			{
				if(j>=6-i && j<=4+i)
				
					printf("*");
				else
					printf(" ");
			}
					
			printf("\n");
				
		}
	
	for (i = 1 ; i <= 4; i++)
	{
			
		for (j = 1 ; j <= 8; j++)
		{
				if(j>=1+i && j<=9-i)
			
					printf("*");
				else
					printf(" ");
		}
			printf("\n");
	}
	
	short_method();
	//or by user 
	byuser()
	;
	
}
//or
short_method()
{
	int i, j ,k=1;
	for (i=1 ; i<=10; i++)
	{
		for (j=1; j<=10; j++)
		{
			if(j>=6-k && j<=4+k)
			
				printf("@ ");
			else
				printf("  ");			
		}
		if (i<5)
			    k++;
		else 
           k--	;		
		printf("\n");
			
	}
	
}

byuser()
{
	int i, j ,k=1, num , n; //x=2;
	printf("enter a number :");
	scanf("%d",&num );
	n = num / 2;
	
	for (i=1 ; i<=num; i++)
	{
	//	x=2;
		for (j=1; j<=num; j++)
		{
			if(j>=n+1-k && j<=n-1+k)
			{
//				if(x != 0)
//				{
//					printf("# ");
//					x--;
//				}
//				
//				else 
				printf("* ");	
			}
			else
				printf("  ");
				
		}
		if (i<n)
			    k++;
		else 
           k--	;
				
		printf("\n");
			
	}
	
}
